// AnimBlueprintGeneratedClass ABP_DrillDozer_Drill.ABP_DrillDozer_Drill_C
// Size: 0x2b0 (Inherited: 0x270)
struct UABP_DrillDozer_Drill_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	float WorldTime; // 0x2a8(0x04)
	float RotateSpeed; // 0x2ac(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_DrillDozer_Drill(int32_t EntryPoint);
};

