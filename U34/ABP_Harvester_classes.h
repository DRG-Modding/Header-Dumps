// AnimBlueprintGeneratedClass ABP_Harvester.ABP_Harvester_C
// Size: 0x570 (Inherited: 0x2f0)
struct UABP_Harvester_C : USimpleMovingEnemyAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x328(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x398(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3e0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x410(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x488(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4b8(0xb0)
	struct UAudioComponent* HarvestingSound; // 0x568(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Harvester.ABP_Harvester_C.AnimGraph
	void AnimNotify_EnterAlive(); // Function ABP_Harvester.ABP_Harvester_C.AnimNotify_EnterAlive
	void AnimNotify_ExitAlive(); // Function ABP_Harvester.ABP_Harvester_C.AnimNotify_ExitAlive
	void ExecuteUbergraph_ABP_Harvester(int32_t EntryPoint); // Function ABP_Harvester.ABP_Harvester_C.ExecuteUbergraph_ABP_Harvester
};

