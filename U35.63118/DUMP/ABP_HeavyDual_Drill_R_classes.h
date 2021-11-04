// AnimBlueprintGeneratedClass ABP_HeavyDual_Drill_R.ABP_HeavyDual_Drill_R_C
// Size: 0x818 (Inherited: 0x280)
struct UABP_HeavyDual_Drill_R_C : UDoubleDrillAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2b8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2e0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x308(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x380(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3b0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x428(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x458(0xb0)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x508(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x530(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x558(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x5d0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x600(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x678(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6a8(0xb0)
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x758(0xc0)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_R_AnimGraphNode_TransitionResult_390E1F5847CCD80694ADF384F17BEFAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_R_AnimGraphNode_TransitionResult_D12FE6AB4B7BC9F94D60F68F1B91CF96();
	void ExecuteUbergraph_ABP_HeavyDual_Drill_R(int32_t EntryPoint);
};

