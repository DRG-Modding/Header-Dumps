// AnimBlueprintGeneratedClass ABP_DroppodRamp.ABP_DroppodRamp_C
// Size: 0x638 (Inherited: 0x270)
struct UABP_DroppodRamp_C : UMiningPodAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x348(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x390(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3c0(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x408(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x438(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4b0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4e0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x558(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x588(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_4C3FEBDE4E195AF67C9CDBA7D7290FAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_D963559D4F7D338C844A7B8D11940AE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_41AF7652437F3C10561791958CD250B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_B178AD27426F23F1EE7CCFBBAE4B7D38();
	void ExecuteUbergraph_ABP_DroppodRamp(int32_t EntryPoint);
};
