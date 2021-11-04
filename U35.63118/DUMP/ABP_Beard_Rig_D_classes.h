// AnimBlueprintGeneratedClass ABP_Beard_Rig_D.ABP_Beard_Rig_D_C
// Size: 0xa90 (Inherited: 0x2a0)
struct UABP_Beard_Rig_D_C : UVanityAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2a8(0x30)
	FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x2e0(0x590)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x870(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x890(0x108)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x998(0xa0)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xa38(0x48)
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa80(0x10)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Beard_Rig_D(int32_t EntryPoint);
};

