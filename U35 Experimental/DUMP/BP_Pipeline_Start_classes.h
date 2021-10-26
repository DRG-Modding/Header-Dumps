// BlueprintGeneratedClass BP_Pipeline_Start.BP_Pipeline_Start_C
// Size: 0x2b8 (Inherited: 0x270)
struct ABP_Pipeline_Start_C : APipelineStart {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* NumberPlane; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* BP_StatusLamp; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* PipelineStartTransform; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* ColliderPipelineStart; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) UMaterialInterface* MarkerRingMaterial; 

	UFUNCTION(BlueprintCallable) void UpdatePipelineNumber();
	UFUNCTION(BlueprintCallable) void UpdateState();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void BndEvt__PipelineStartUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceiveBuildStateChanged(enum class EPipelineBuildState InBuildState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Pipeline_Start(int32_t EntryPoint);
};

