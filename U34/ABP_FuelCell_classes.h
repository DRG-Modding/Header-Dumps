// AnimBlueprintGeneratedClass ABP_FuelCell.ABP_FuelCell_C
// Size: 0x56c (Inherited: 0x270)
struct UABP_FuelCell_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2a8(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x2f0(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3b0(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x428(0x78)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4a0(0xc0)
	float BuildProgress; // 0x560(0x04)
	float DefendProgress; // 0x564(0x04)
	float IsDrilling; // 0x568(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_FuelCell.ABP_FuelCell_C.AnimGraph
	void SetBuildProgress(float Progress); // Function ABP_FuelCell.ABP_FuelCell_C.SetBuildProgress
	void SetDefendProgress(float Progress); // Function ABP_FuelCell.ABP_FuelCell_C.SetDefendProgress
	void SetIsDrilling(bool IsDrilling); // Function ABP_FuelCell.ABP_FuelCell_C.SetIsDrilling
	void ExecuteUbergraph_ABP_FuelCell(int32_t EntryPoint); // Function ABP_FuelCell.ABP_FuelCell_C.ExecuteUbergraph_ABP_FuelCell
};

