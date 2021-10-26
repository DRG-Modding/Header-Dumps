// BlueprintGeneratedClass BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C
// Size: 0x241 (Inherited: 0x220)
struct ABP_Pipeline_StatusLamp_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ST_Connector_StatusLamp; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) APipelineStart* PipelineStart; 
	UPROPERTY(BlueprintReadWrite) enum class EPipelineBuildState PreviewState; 

	UFUNCTION(BlueprintCallable) void UpdateState();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ListenToPipelineStart(APipelineStart* InPipelineStart);
	UFUNCTION(BlueprintCallable) void OnBuildStateChanged_Event(APipelineStart* InPipelineStart, enum class EPipelineBuildState InPipelineState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Pipeline_StatusLamp(int32_t EntryPoint);
};

