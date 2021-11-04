// AnimBlueprintGeneratedClass ABP_Sideburns_Rig_A.ABP_Sideburns_Rig_A_C
// Size: 0x9a8 (Inherited: 0x2a0)
struct UABP_Sideburns_Rig_A_C : UVanityAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2a8(0x30)
	FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x2e0(0x590)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x870(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x890(0x108)
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x998(0x10)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Sideburns_Rig_A(int32_t EntryPoint);
};

