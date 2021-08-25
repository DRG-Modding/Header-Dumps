// AnimBlueprintGeneratedClass ABP_Moustache_Rig_A.ABP_Moustache_Rig_A_C
// Size: 0x9a8 (Inherited: 0x2a0)
struct UABP_Moustache_Rig_A_C : UVanityAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2a8(0x30)
	char UnknownData_2D8[0x8]; // 0x2d8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x2e0(0x590)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x870(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x890(0x108)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x998(0x10)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Moustache_Rig_A.ABP_Moustache_Rig_A_C.AnimGraph
	void ExecuteUbergraph_ABP_Moustache_Rig_A(int32_t EntryPoint); // Function ABP_Moustache_Rig_A.ABP_Moustache_Rig_A_C.ExecuteUbergraph_ABP_Moustache_Rig_A
};

