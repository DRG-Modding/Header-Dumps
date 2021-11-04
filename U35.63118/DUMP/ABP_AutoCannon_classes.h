// AnimBlueprintGeneratedClass ABP_AutoCannon.ABP_AutoCannon_C
// Size: 0x338 (Inherited: 0x270)
struct UABP_AutoCannon_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x278(0x48)
	FAnimNode_Root AnimGraphNode_Root; // 0x2c0(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f0(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_AutoCannon(int32_t EntryPoint);
};

