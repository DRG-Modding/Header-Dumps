// AnimBlueprintGeneratedClass ABP_Slug_A.ABP_Slug_A_C
// Size: 0xb3c (Inherited: 0x2c0)
struct UABP_Slug_A_C : UEnemyAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2f8(0x28)
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x320(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x398(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3c8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x440(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x470(0xb0)
	FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x520(0x590)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xab0(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xad0(0x20)
	FAnimNode_Slot AnimGraphNode_Slot; // 0xaf0(0x48)
	int32_t Picked; // 0xb38(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Slug_A_AnimGraphNode_TransitionResult_294DDAB341123081E8C9C3A03F396AFC();
	void ExecuteUbergraph_ABP_Slug_A(int32_t EntryPoint);
};

