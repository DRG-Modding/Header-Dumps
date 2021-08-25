// AnimBlueprintGeneratedClass ABP_Dice.ABP_Dice_C
// Size: 0x9c0 (Inherited: 0x270)
struct UABP_Dice_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2a8(0x140)
	char UnknownData_3E8[0x8]; // 0x3e8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x3f0(0x590)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x980(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9a0(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Dice.ABP_Dice_C.AnimGraph
	void ExecuteUbergraph_ABP_Dice(int32_t EntryPoint); // Function ABP_Dice.ABP_Dice_C.ExecuteUbergraph_ABP_Dice
};

