// AnimBlueprintGeneratedClass ABP_FuelCell.ABP_FuelCell_C
// Size: 0x56c (Inherited: 0x270)
struct UABP_FuelCell_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2a8(0x48)
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x2f0(0xc0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b0(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x428(0x78)
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4a0(0xc0)
	float BuildProgress; // 0x560(0x04)
	float DefendProgress; // 0x564(0x04)
	float IsDrilling; // 0x568(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void SetBuildProgress(float Progress);
	void SetDefendProgress(float Progress);
	void SetIsDrilling(bool IsDrilling);
	void ExecuteUbergraph_ABP_FuelCell(int32_t EntryPoint);
};

