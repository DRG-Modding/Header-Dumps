#ifndef UE4SS_SDK_AnimationSharing_HPP
#define UE4SS_SDK_AnimationSharing_HPP

class UAnimSharingStateInstance : UAnimInstance
{
    UAnimSequence* AnimationToPlay;
    float PermutationTimeOffset;
    float PlayRate;
    bool bStateBool;
    UAnimSharingInstance* instance;

    void GetInstancedActors(TArray<AActor*>& Actors);
}

class UAnimSharingTransitionInstance : UAnimInstance
{
    TWeakObjectPtr<USkeletalMeshComponent> FromComponent;
    TWeakObjectPtr<USkeletalMeshComponent> ToComponent;
    float BlendTime;
    bool bBlendBool;
}

class UAnimSharingAdditiveInstance : UAnimInstance
{
    TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;
    TWeakObjectPtr<UAnimSequence> AdditiveAnimation;
    float alpha;
    bool bStateBool;
}

class UAnimSharingInstance : UObject
{
    TArray<AActor*> RegisteredActors;
    UAnimationSharingStateProcessor* StateProcessor;
    TArray<UAnimSequence*> UsedAnimationSequences;
    UEnum* StateEnum;
    AActor* SharingActor;
}

class UAnimationSharingManager : UObject
{
    TArray<USkeleton*> Skeletons;
    TArray<UAnimSharingInstance*> PerSkeletonData;

    void RegisterActorWithSkeletonBP(AActor* InActor, const USkeleton* SharingSkeleton);
    UAnimationSharingManager* GetAnimationSharingManager(UObject* WorldContextObject);
    bool CreateAnimationSharingManager(UObject* WorldContextObject, const UAnimationSharingSetup* setup);
    bool AnimationSharingEnabled();
}

class UAnimationSharingSetup : UObject
{
    TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups;
    FAnimationSharingScalability ScalabilitySettings;
}

class UAnimationSharingStateProcessor : UObject
{
    TSoftObjectPtr<UEnum> AnimationStateEnum;

    void ProcessActorState(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess);
    UEnum* GetAnimationStateEnum();
}

struct FTickAnimationSharingFunction : FTickFunction
{
}

struct FAnimationSharingScalability
{
    FPerPlatformBool UseBlendTransitions;
    FPerPlatformFloat BlendSignificanceValue;
    FPerPlatformInt MaximumNumberConcurrentBlends;
    FPerPlatformFloat TickSignificanceValue;
}

struct FPerSkeletonAnimationSharingSetup
{
    USkeleton* Skeleton;
    USkeletalMesh* SkeletalMesh;
    TSubclassOf<UAnimSharingTransitionInstance> BlendAnimBlueprint;
    TSubclassOf<UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;
    TSubclassOf<UAnimationSharingStateProcessor> StateProcessorClass;
    TArray<FAnimationStateEntry> AnimationStates;
}

struct FAnimationStateEntry
{
    uint8 State;
    TArray<FAnimationSetup> AnimationSetups;
    bool bOnDemand;
    bool bAdditive;
    float BlendTime;
    bool bReturnToPreviousState;
    bool bSetNextState;
    uint8 NextState;
    FPerPlatformInt MaximumNumberOfConcurrentInstances;
    float WiggleTimePercentage;
    bool bRequiresCurves;
}

struct FAnimationSetup
{
    UAnimSequence* AnimSequence;
    TSubclassOf<UAnimSharingStateInstance> AnimBlueprint;
    FPerPlatformInt NumRandomizedInstances;
    FPerPlatformBool Enabled;
}

#endif
