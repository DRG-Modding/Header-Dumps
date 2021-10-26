// AnimBlueprintGeneratedClass ABP_FacilityTurret_Barrier.ABP_FacilityTurret_Barrier_C
// Size: 0x840 (Inherited: 0x2d0)
struct UABP_FacilityTurret_Barrier_C : UFacilityTurretAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x308(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x330(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x358(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x380(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3a8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x420(0x30)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x450(0x20)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x470(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x490(0x108)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x598(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x610(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x640(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6b8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6e8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x760(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x790(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Barrier_AnimGraphNode_ModifyBone_97C64772427241D2B3C617B92F1FFAE3();
	void ExecuteUbergraph_ABP_FacilityTurret_Barrier(int32_t EntryPoint);
};

