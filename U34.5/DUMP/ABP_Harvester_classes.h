// AnimBlueprintGeneratedClass ABP_Harvester.ABP_Harvester_C
// Size: 0x570 (Inherited: 0x2f0)
struct UABP_Harvester_C : USimpleMovingEnemyAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x328(0x48)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x398(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3e0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x410(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x488(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4b8(0xb0)
	UAudioComponent* HarvestingSound; // 0x568(0x08)

	void AnimGraph(FPoseLink AnimGraph);
	void AnimNotify_EnterAlive();
	void AnimNotify_ExitAlive();
	void ExecuteUbergraph_ABP_Harvester(int32_t EntryPoint);
};

