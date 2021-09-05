// AnimBlueprintGeneratedClass ABP_LootBugTest.ABP_LootBugTest_C
// Size: 0xd08 (Inherited: 0x990)
struct UABP_LootBugTest_C : UTestAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x990(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x998(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x9c8(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x9f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xa68(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xa98(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb10(0x78)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xb88(0xa0)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xc28(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xc58(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_LootBugTest(int32_t EntryPoint);
};

