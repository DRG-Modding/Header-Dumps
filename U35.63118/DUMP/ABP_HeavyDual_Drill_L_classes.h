// AnimBlueprintGeneratedClass ABP_HeavyDual_Drill_L.ABP_HeavyDual_Drill_L_C
// Size: 0x818 (Inherited: 0x280)
struct UABP_HeavyDual_Drill_L_C : UDoubleDrillAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2b8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2e0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x308(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x380(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3b0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x428(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x458(0xb0)
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x508(0xc0)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5c8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5f0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x618(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x690(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6c0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x738(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x768(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_L_AnimGraphNode_TransitionResult_60ED788F420D8EC12734F1A7F3AA939C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_L_AnimGraphNode_TransitionResult_49E85F5647E4004F3D46128D6C5D4127();
	void ExecuteUbergraph_ABP_HeavyDual_Drill_L(int32_t EntryPoint);
};

