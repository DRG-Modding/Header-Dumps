// AnimBlueprintGeneratedClass ABP_FuelCell.ABP_FuelCell_C
// Size: 0x56c (Inherited: 0x270)
struct UABP_FuelCell_C : UAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	UPROPERTY(BlueprintReadWrite) float BuildProgress; 
	UPROPERTY(BlueprintReadWrite) float DefendProgress; 
	UPROPERTY(BlueprintReadWrite) float IsDrilling; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void SetBuildProgress(float Progress);
	UFUNCTION(BlueprintCallable) void SetDefendProgress(float Progress);
	UFUNCTION(BlueprintCallable) void SetIsDrilling(bool IsDrilling);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_FuelCell(int32_t EntryPoint);
};

