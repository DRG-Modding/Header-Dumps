// AnimBlueprintGeneratedClass ABP_Pistol_B.ABP_Pistol_B_C
// Size: 0x338 (Inherited: 0x270)
struct UABP_Pistol_B_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2a8(0x48)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2f0(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Pistol_B(int32_t EntryPoint);
};
