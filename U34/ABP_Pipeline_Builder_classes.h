// AnimBlueprintGeneratedClass ABP_Pipeline_Builder.ABP_Pipeline_Builder_C
// Size: 0x4e0 (Inherited: 0x270)
struct UABP_Pipeline_Builder_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2a8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3b0(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4b8(0x20)
	float ElevationPercent; // 0x4d8(0x04)
	float DistancePercent; // 0x4dc(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_8C56493144034886A92FCC8F2BC53356(); // Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_8C56493144034886A92FCC8F2BC53356
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_6CE1F974493F8A0CC562868BCA6FADCD(); // Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_6CE1F974493F8A0CC562868BCA6FADCD
	void ExecuteUbergraph_ABP_Pipeline_Builder(int32_t EntryPoint); // Function ABP_Pipeline_Builder.ABP_Pipeline_Builder_C.ExecuteUbergraph_ABP_Pipeline_Builder
};

