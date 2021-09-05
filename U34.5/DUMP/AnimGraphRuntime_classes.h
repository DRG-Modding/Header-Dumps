// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	FName NotifyName; // 0x30(0x08)
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x270 (Inherited: 0x270)
struct UAnimSequencerInstance : UAnimInstance {
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {

	void K2_TwoBoneIK(FVector RootPos, FVector JointPos, FVector EndPos, FVector JointTarget, FVector Effector, FVector OutJointPos, FVector OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	void K2_StartProfilingTimer();
	FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	FTransform K2_LookAt(FTransform CurrentTransform, FVector TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree);
	float K2_EndProfilingTimer(bool bLog, FString LogPrefix);
	float K2_DistanceBetweenTwoSocketsAndMapRange(USkeletalMeshComponent* Component, FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	FVector K2_DirectionBetweenSockets(USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo);
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, FVector OffsetInBoneSpace, FPositionHistory History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, FRuntimeFloatCurve CustomCurve);
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xa8 (Inherited: 0x28)
struct UPlayMontageCallbackProxy : UObject {
	FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
	FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
	FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
	FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
	FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)

	void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload BranchingPointNotifyPayload);
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
	UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x28 (Inherited: 0x28)
struct USequencerAnimationSupport : UInterface {
};

