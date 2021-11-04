// AnimBlueprintGeneratedClass ABP_Bartender.ABP_Bartender_C
// Size: 0x368 (Inherited: 0x270)
struct UABP_Bartender_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2a8(0x48)
	FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x2f0(0x78)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Bartender(int32_t EntryPoint);
};

