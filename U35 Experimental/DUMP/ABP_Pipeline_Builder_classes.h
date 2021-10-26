// AnimBlueprintGeneratedClass ABP_Pipeline_Builder.ABP_Pipeline_Builder_C
// Size: 0x4e0 (Inherited: 0x270)
struct UABP_Pipeline_Builder_C : UAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	UPROPERTY(BlueprintReadWrite) float ElevationPercent; 
	UPROPERTY(BlueprintReadWrite) float DistancePercent; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_8C56493144034886A92FCC8F2BC53356();
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_6CE1F974493F8A0CC562868BCA6FADCD();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_Pipeline_Builder(int32_t EntryPoint);
};

