// AnimBlueprintGeneratedClass ABP_LockOnRifle_A.ABP_LockOnRifle_A_C
// Size: 0x590 (Inherited: 0x270)
struct UABP_LockOnRifle_A_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2d0(0x28)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2f8(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x318(0x108)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x420(0x30)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x450(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x480(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x530(0x48)
	FRotator FrontRotation; // 0x578(0x0c)
	bool HasLockedTarget; // 0x584(0x01)
	ALockOnWeapon* Test; // 0x588(0x08)

	void AnimGraph(FPoseLink AnimGraph);
	void SetHasLockedTarget(bool HasLockedTarget);
	void SetRotation(FRotator WorldRotation);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206();
	void BlueprintBeginPlay();
	void OnRotationUpdated(bool hasTargetLockon, FRotator socketRotation);
	void ExecuteUbergraph_ABP_LockOnRifle_A(int32_t EntryPoint);
};

