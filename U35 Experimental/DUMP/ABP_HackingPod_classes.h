// AnimBlueprintGeneratedClass ABP_HackingPod.ABP_HackingPod_C
// Size: 0xbd0 (Inherited: 0x270)
struct UABP_HackingPod_C : UFacilityHackingPodAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x370(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x3e8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x418(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x490(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x4c0(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x570(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x5b8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x5e8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x660(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x690(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x708(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x738(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7b0(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7e0(0xb0)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x890(0xc8)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x958(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9f8(0x78)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xa70(0x108)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb78(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb98(0x20)
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0xbb8(0x18)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HackingPod_AnimGraphNode_ModifyBone_51C1899841CBC90E41B463BE266D93F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HackingPod_AnimGraphNode_TransitionResult_D31904854FEF33B626FDC6A8B6FFD447();
	void ExecuteUbergraph_ABP_HackingPod(int32_t EntryPoint);
};

