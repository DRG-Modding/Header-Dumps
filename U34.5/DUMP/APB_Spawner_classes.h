// AnimBlueprintGeneratedClass APB_Spawner.APB_Spawner_C
// Size: 0x368 (Inherited: 0x270)
struct UAPB_Spawner_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2a8(0x78)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x320(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_APB_Spawner(int32_t EntryPoint);
};

