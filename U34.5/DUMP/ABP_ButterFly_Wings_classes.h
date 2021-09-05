// AnimBlueprintGeneratedClass ABP_ButterFly_Wings.ABP_ButterFly_Wings_C
// Size: 0xad1 (Inherited: 0x270)
struct UABP_ButterFly_Wings_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x2b0(0x590)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x840(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x860(0x20)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x880(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x8a8(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x8d0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x948(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x978(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x9f0(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa20(0xb0)
	bool IsFlying; // 0xad0(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void SetFlying(bool SetFlying);
	void ExecuteUbergraph_ABP_ButterFly_Wings(int32_t EntryPoint);
};

