// AnimBlueprintGeneratedClass SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint.SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint_C
// Size: 0x15e0 (Inherited: 0xc30)
struct USK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint_C : UStabberVineAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc30(0x08)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0xc38(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0xd40(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0xe48(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0xf50(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x1058(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x1160(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1268(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1370(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1478(0x108)
	FAnimNode_Root AnimGraphNode_Root; // 0x1580(0x30)
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x15b0(0x10)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x15c0(0x20)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint(int32_t EntryPoint);
};

