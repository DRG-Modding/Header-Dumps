// AnimBlueprintGeneratedClass SK_Defence_Tentacle_01_Skeleton_AnimBlueprint.SK_Defence_Tentacle_01_Skeleton_AnimBlueprint_C
// Size: 0xc90 (Inherited: 0xa50)
struct USK_Defence_Tentacle_01_Skeleton_AnimBlueprint_C : UTentacleAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa50(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0xa58(0x30)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa88(0x20)
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xaa8(0x10)
	FAnimNode_Tentacle AnimGraphNode_Tentacle; // 0xac0(0x1d0)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_SK_Defence_Tentacle_01_Skeleton_AnimBlueprint(int32_t EntryPoint);
};

