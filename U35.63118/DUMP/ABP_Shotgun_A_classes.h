// AnimBlueprintGeneratedClass ABP_Shotgun_A.ABP_Shotgun_A_C
// Size: 0x2f0 (Inherited: 0x270)
struct UABP_Shotgun_A_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2a8(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Shotgun_A(int32_t EntryPoint);
};
