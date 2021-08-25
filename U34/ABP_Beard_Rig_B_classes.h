// AnimBlueprintGeneratedClass ABP_Beard_Rig_B.ABP_Beard_Rig_B_C
// Size: 0xbe0 (Inherited: 0x2a0)
struct UABP_Beard_Rig_B_C : UVanityAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2a8(0x30)
	char UnknownData_2D8[0x8]; // 0x2d8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x2e0(0x590)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x870(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x890(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x8b0(0x108)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x9b8(0x140)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xaf8(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xb98(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Beard_Rig_B.ABP_Beard_Rig_B_C.AnimGraph
	void ExecuteUbergraph_ABP_Beard_Rig_B(int32_t EntryPoint); // Function ABP_Beard_Rig_B.ABP_Beard_Rig_B_C.ExecuteUbergraph_ABP_Beard_Rig_B
};

