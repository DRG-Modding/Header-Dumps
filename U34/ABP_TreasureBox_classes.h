// AnimBlueprintGeneratedClass ABP_TreasureBox.ABP_TreasureBox_C
// Size: 0x740 (Inherited: 0x280)
struct UABP_TreasureBox_C : UTreasureBoxAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x288(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x348(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x3c0(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3f0(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x438(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x468(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4e0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x510(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x588(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x630(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x660(0xb0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x710(0x30)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_TreasureBox.ABP_TreasureBox_C.AnimGraph
	void ExecuteUbergraph_ABP_TreasureBox(int32_t EntryPoint); // Function ABP_TreasureBox.ABP_TreasureBox_C.ExecuteUbergraph_ABP_TreasureBox
};

