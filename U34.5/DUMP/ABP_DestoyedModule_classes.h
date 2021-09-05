// AnimBlueprintGeneratedClass ABP_DestoyedModule.ABP_DestoyedModule_C
// Size: 0x428 (Inherited: 0x290)
struct UABP_DestoyedModule_C : UGunTowerModuleAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2c8(0x18)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2e0(0x108)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3e8(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x408(0x20)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DestoyedModule_AnimGraphNode_ModifyBone_56305503412A48937F0CB9A968487685();
	void ExecuteUbergraph_ABP_DestoyedModule(int32_t EntryPoint);
};

