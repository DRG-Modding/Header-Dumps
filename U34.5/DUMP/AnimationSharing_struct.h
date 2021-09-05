// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// Size: 0x30 (Inherited: 0x28)
struct FTickAnimationSharingFunction : FTickFunction {
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// Size: 0x10 (Inherited: 0x00)
struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x00(0x01)
	FPerPlatformFloat BlendSignificanceValue; // 0x04(0x04)
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x08(0x04)
	FPerPlatformFloat TickSignificanceValue; // 0x0c(0x04)
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// Size: 0x38 (Inherited: 0x00)
struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x00(0x08)
	USkeletalMesh* SkeletalMesh; // 0x08(0x08)
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10(0x08)
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18(0x08)
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20(0x08)
	TArray<FAnimationStateEntry> AnimationStates; // 0x28(0x10)
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// Size: 0x30 (Inherited: 0x00)
struct FAnimationStateEntry {
	char State; // 0x00(0x01)
	TArray<FAnimationSetup> AnimationSetups; // 0x08(0x10)
	bool bOnDemand; // 0x18(0x01)
	bool bAdditive; // 0x19(0x01)
	float BlendTime; // 0x1c(0x04)
	bool bReturnToPreviousState; // 0x20(0x01)
	bool bSetNextState; // 0x21(0x01)
	char NextState; // 0x22(0x01)
	FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24(0x04)
	float WiggleTimePercentage; // 0x28(0x04)
	bool bRequiresCurves; // 0x2c(0x01)
};

// ScriptStruct AnimationSharing.AnimationSetup
// Size: 0x18 (Inherited: 0x00)
struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x00(0x08)
	UAnimSharingStateInstance* AnimBlueprint; // 0x08(0x08)
	FPerPlatformInt NumRandomizedInstances; // 0x10(0x04)
	FPerPlatformBool Enabled; // 0x14(0x01)
};

