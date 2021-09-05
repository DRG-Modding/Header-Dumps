// AnimBlueprintGeneratedClass APB_Flier_Shooter.APB_Flier_Shooter_C
// Size: 0x808 (Inherited: 0x2f0)
struct UAPB_Flier_Shooter_C : UFlyingBugAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x328(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x350(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x378(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3f0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x420(0x78)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x498(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x538(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5b0(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5e0(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x690(0x48)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x6d8(0x48)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x720(0xa0)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x7c0(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_APB_Flier_Shooter(int32_t EntryPoint);
};

