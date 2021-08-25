// AnimBlueprintGeneratedClass APB_Flier_Shooter.APB_Flier_Shooter_C
// Size: 0x808 (Inherited: 0x2f0)
struct UAPB_Flier_Shooter_C : UFlyingBugAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x328(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x350(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x378(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x420(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x498(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x538(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5b0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5e0(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x690(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x6d8(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x720(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x7c0(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function APB_Flier_Shooter.APB_Flier_Shooter_C.AnimGraph
	void ExecuteUbergraph_APB_Flier_Shooter(int32_t EntryPoint); // Function APB_Flier_Shooter.APB_Flier_Shooter_C.ExecuteUbergraph_APB_Flier_Shooter
};

