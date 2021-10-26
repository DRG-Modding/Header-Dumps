// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x290 (Inherited: 0x270)
struct UAnimSharingStateInstance : UAnimInstance {
	UAnimSequence* AnimationToPlay; // 0x268(0x08)
	float PermutationTimeOffset; // 0x270(0x04)
	float PlayRate; // 0x274(0x04)
	bool bStateBool; // 0x278(0x01)
	UAnimSharingInstance* instance; // 0x280(0x08)

	void GetInstancedActors(TArray<AActor*> Actors);
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x280 (Inherited: 0x270)
struct UAnimSharingTransitionInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x268(0x08)
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x270(0x08)
	float BlendTime; // 0x278(0x04)
	bool bBlendBool; // 0x27c(0x01)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x280 (Inherited: 0x270)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x268(0x08)
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x270(0x08)
	float alpha; // 0x278(0x04)
	bool bStateBool; // 0x27c(0x01)
};

// Class AnimationSharing.AnimSharingInstance
// Size: 0x138 (Inherited: 0x28)
struct UAnimSharingInstance : UObject {
	TArray<AActor*> RegisteredActors; // 0x28(0x10)
	UAnimationSharingStateProcessor* StateProcessor; // 0xa8(0x08)
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xe8(0x10)
	UEnum* StateEnum; // 0x108(0x08)
	AActor* SharingActor; // 0x110(0x08)
};

// Class AnimationSharing.AnimationSharingManager
// Size: 0x88 (Inherited: 0x28)
struct UAnimationSharingManager : UObject {
	TArray<USkeleton*> Skeletons; // 0x28(0x10)
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38(0x10)

	void RegisterActorWithSkeletonBP(AActor* InActor, USkeleton* SharingSkeleton);
	UAnimationSharingManager* GetAnimationSharingManager(UObject* WorldContextObject);
	bool CreateAnimationSharingManager(UObject* WorldContextObject, UAnimationSharingSetup* setup);
	bool AnimationSharingEnabled();
};

// Class AnimationSharing.AnimationSharingSetup
// Size: 0x48 (Inherited: 0x28)
struct UAnimationSharingSetup : UObject {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28(0x10)
	FAnimationSharingScalability ScalabilitySettings; // 0x38(0x10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x50 (Inherited: 0x28)
struct UAnimationSharingStateProcessor : UObject {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28(0x28)

	void ProcessActorState(int32_t OutState, AActor* InActor, char CurrentState, char OnDemandState, bool bShouldProcess);
	UEnum* GetAnimationStateEnum();
};

