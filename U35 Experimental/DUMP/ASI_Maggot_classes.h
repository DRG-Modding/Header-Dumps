// AnimBlueprintGeneratedClass ASI_Maggot.ASI_Maggot_C
// Size: 0x5d8 (Inherited: 0x280)
struct UASI_Maggot_C : UAnimSharingTransitionInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2b8(0xa0)
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_2; // 0x358(0x140)
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x498(0x140)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ASI_Maggot(int32_t EntryPoint);
};

