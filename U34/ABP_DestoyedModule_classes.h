// AnimBlueprintGeneratedClass ABP_DestoyedModule.ABP_DestoyedModule_C
// Size: 0x428 (Inherited: 0x290)
struct UABP_DestoyedModule_C : UGunTowerModuleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2c8(0x18)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2e0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3e8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x408(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_DestoyedModule.ABP_DestoyedModule_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DestoyedModule_AnimGraphNode_ModifyBone_56305503412A48937F0CB9A968487685(); // Function ABP_DestoyedModule.ABP_DestoyedModule_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DestoyedModule_AnimGraphNode_ModifyBone_56305503412A48937F0CB9A968487685
	void ExecuteUbergraph_ABP_DestoyedModule(int32_t EntryPoint); // Function ABP_DestoyedModule.ABP_DestoyedModule_C.ExecuteUbergraph_ABP_DestoyedModule
};

