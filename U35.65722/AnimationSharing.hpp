#ifndef UE4SS_SDK_AnimationSharing_HPP
#define UE4SS_SDK_AnimationSharing_HPP

class UAnimSharingStateInstance : public UAnimInstance
{
    class UAnimSequence* AnimationToPlay;
    float PermutationTimeOffset;
    float PlayRate;
    bool bStateBool;
    class UAnimSharingInstance* instance;

    void GetInstancedActors(TArray<class AActor*>& Actors);
};

class UAnimSharingTransitionInstance : public UAnimInstance
{
    TWeakObjectPtr<class USkeletalMeshComponent> FromComponent;
    TWeakObjectPtr<class USkeletalMeshComponent> ToComponent;
    float BlendTime;
    bool bBlendBool;
};

class UAnimSharingAdditiveInstance : public UAnimInstance
{
    TWeakObjectPtr<class USkeletalMeshComponent> BaseComponent;
    TWeakObjectPtr<class UAnimSequence> AdditiveAnimation;
    float alpha;
    bool bStateBool;
};

class UAnimSharingInstance : public UObject
{
    TArray<class AActor*> RegisteredActors;
    class UAnimationSharingStateProcessor* StateProcessor;
    TArray<class UAnimSequence*> UsedAnimationSequences;
    class UEnum* StateEnum;
    class AActor* SharingActor;
};

class UAnimationSharingManager : public UObject
{
    TArray<class USkeleton*> Skeletons;
    TArray<class UAnimSharingInstance*> PerSkeletonData;

    void RegisterActorWithSkeletonBP(class AActor* InActor, const class USkeleton* SharingSkeleton);
    class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);
    bool CreateAnimationSharingManager(class UObject* WorldContextObject, const class UAnimationSharingSetup* setup);
    bool AnimationSharingEnabled();
};

struct FAnimationSetup
{
    class UAnimSequence* AnimSequence;
    TSubclassOf<class UAnimSharingStateInstance> AnimBlueprint;
    FPerPlatformInt NumRandomizedInstances;
    FPerPlatformBool Enabled;
};

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
};

struct FPerSkeletonAnimationSharingSetup
{
    class USkeleton* Skeleton;
    class USkeletalMesh* SkeletalMesh;
    TSubclassOf<class UAnimSharingTransitionInstance> BlendAnimBlueprint;
    TSubclassOf<class UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;
    TSubclassOf<class UAnimationSharingStateProcessor> StateProcessorClass;
    TArray<FAnimationStateEntry> AnimationStates;
};

struct FAnimationSharingScalability
{
    FPerPlatformBool UseBlendTransitions;
    FPerPlatformFloat BlendSignificanceValue;
    FPerPlatformInt MaximumNumberConcurrentBlends;
    FPerPlatformFloat TickSignificanceValue;
};

class UAnimationSharingSetup : public UObject
{
    TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups;
    FAnimationSharingScalability ScalabilitySettings;
};

class UAnimationSharingStateProcessor : public UObject
{
    TSoftObjectPtr<UEnum> AnimationStateEnum;

    void ProcessActorState(int32& OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess);
    class UEnum* GetAnimationStateEnum();
};

struct FTickAnimationSharingFunction : public FTickFunction
{
};

#endif
