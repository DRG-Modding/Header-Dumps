// AnimBlueprintGeneratedClass ABP_Dice.ABP_Dice_C
// Size: 0x9c0 (Inherited: 0x270)
struct UABP_Dice_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2a8(0x140)
	FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x3f0(0x590)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x980(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9a0(0x20)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Dice(int32_t EntryPoint);
};

