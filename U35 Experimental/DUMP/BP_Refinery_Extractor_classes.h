// BlueprintGeneratedClass BP_Refinery_Extractor.BP_Refinery_Extractor_C
// Size: 0x392 (Inherited: 0x2c0)
struct ABP_Refinery_Extractor_C : APipelineExtractorPod {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* BP_Extractor_Lamp02; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* BP_Extractor_Lamp01; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_railconnector_02; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_railconnector_01; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UBP_Extractor_Shell_C* Door_Back; 
	UPROPERTY(BlueprintReadWrite) UBP_Extractor_Shell_C* Door_Front; 
	UPROPERTY(BlueprintReadWrite) UBP_Extractor_Shell_C* Door_Left; 
	UPROPERTY(BlueprintReadWrite) UBP_Extractor_Shell_C* Door_Right; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Doors; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AudioDropStarted; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Drill; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* MineheadDrilling_Cue; 
	UPROPERTY(BlueprintReadWrite) UAutoCarverComponent* AutoCarver; 
	UPROPERTY(BlueprintReadWrite) UTerrainScannerStaticMesh* TerrainScannerStaticMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* ConnectedIndicator; 
	UPROPERTY(BlueprintReadWrite) UActorTrackingComponent* ActorTrackingIcon; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* DrillParticles01; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* DrillParticles02; 
	UPROPERTY(BlueprintReadWrite) bool DoorsPushedAway; 
	UPROPERTY(BlueprintReadWrite) bool ItemEquipped; 

	UFUNCTION(BlueprintCallable) void UpdateState();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ExtractorPodOrderedEvent(APlayerCharacter* InUser);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDropStarted();
	UFUNCTION(BlueprintCallable) void OnItemEquipped_Event(AItem* Item);
	UFUNCTION(BlueprintCallable) void SetPipelineBuilderEquipped(bool InEquipped);
	UFUNCTION(BlueprintCallable) void ReceiveConnectedToSegment(APipelineSegment* InConnectedSegment);
	UFUNCTION(BlueprintCallable) void Setup ItemEquipped();
	UFUNCTION(BlueprintCallable) void OnDroppodImpact();
	UFUNCTION(BlueprintCallable) void OnPipelineStateChanged(enum class EPipelineBuildState InPipelineState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Refinery_Extractor(int32_t EntryPoint);
};

