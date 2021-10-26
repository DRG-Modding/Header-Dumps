// AnimBlueprintGeneratedClass ABP_DrillDozer_Drill.ABP_DrillDozer_Drill_C
// Size: 0x2b0 (Inherited: 0x270)
struct UABP_DrillDozer_Drill_C : UAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) float WorldTime; 
	UPROPERTY(BlueprintReadWrite) float RotateSpeed; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_DrillDozer_Drill(int32_t EntryPoint);
};

