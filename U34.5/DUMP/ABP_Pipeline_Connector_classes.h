// AnimBlueprintGeneratedClass ABP_Pipeline_Connector.ABP_Pipeline_Connector_C
// Size: 0x578 (Inherited: 0x280)
struct UABP_Pipeline_Connector_C : UPipelineSegmentEndPostAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2b8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2e0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x308(0x28)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x330(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x378(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3a8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x420(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x450(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x498(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4c8(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Pipeline_Connector(int32_t EntryPoint);
};

