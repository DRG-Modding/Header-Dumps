// AnimBlueprintGeneratedClass ABP_Donkey.ABP_Donkey_C
// Size: 0x952 (Inherited: 0x2f0)
struct UABP_Donkey_C : USimpleMovingEnemyAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x328(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x350(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x378(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x418(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x440(0x28)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x468(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x4b0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4e0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x558(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x588(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x600(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x630(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x6a8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6d8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x750(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x780(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7f8(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x828(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x870(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x8a0(0xb0)
	bool IsDown; // 0x950(0x01)
	bool IsTrayOpen; // 0x951(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Donkey.ABP_Donkey_C.AnimGraph
	void ExecuteUbergraph_ABP_Donkey(int32_t EntryPoint); // Function ABP_Donkey.ABP_Donkey_C.ExecuteUbergraph_ABP_Donkey
};

