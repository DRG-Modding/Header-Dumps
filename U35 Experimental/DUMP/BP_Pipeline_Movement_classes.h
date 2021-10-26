// BlueprintGeneratedClass BP_Pipeline_Movement.BP_Pipeline_Movement_C
// Size: 0xd8 (Inherited: 0xb8)
struct UBP_Pipeline_Movement_C : UTrackBuilderMovement {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USplineComponent* MovementSpline; 
	UPROPERTY(BlueprintReadWrite) float SplineLength; 
	UPROPERTY(BlueprintReadWrite) float VerticalOffset; 
	UPROPERTY(BlueprintReadWrite) ABP_Pipeline_Segment_C* PipelineSegment; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Pipeline_Movement(int32_t EntryPoint);
};

