// BlueprintGeneratedClass BP_Refinery_Target.BP_Refinery_Target_C
// Size: 0x30a (Inherited: 0x248)
struct ABP_Refinery_Target_C : APipelineFinish {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ST_LiquidMorkite_Well; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ST_LiquidMorkite_Well1; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* GroundRoot; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AudioIdle; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* MeshCarver-MaterialVein2; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* MeshCarver-MaterialVein1; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationDebris* LevelGenerationDebris; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* MeshCarver-MaterialBottom; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* MeshCarver-Outside; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* MeshCarver-Mid; 
	UPROPERTY(BlueprintReadWrite) UTerrainScannerStaticMesh* TerrainScannerStaticMesh; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* FindMe_PointLight; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ExtractorBlueprintChildActor; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* OrderExtractorCollision; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* GroundCollision; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ResourceMesh; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) bool PlayerLookingAtTarget; 
	UPROPERTY(BlueprintReadWrite) bool PlacementValid; 
	UPROPERTY(BlueprintReadWrite) APipelineStart* PipelineStart; 
	UPROPERTY(BlueprintReadWrite) enum class ERefineryState RefineryState; 
	UPROPERTY(BlueprintReadWrite) bool IsRefining; 

	UFUNCTION(BlueprintCallable) FVector GetLandingOffset();
	UFUNCTION(BlueprintCallable) void UpdateIsRefining();
	UFUNCTION(BlueprintCallable) void UpdateState();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void StartBlinking();
	UFUNCTION(BlueprintCallable) void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
	UFUNCTION(BlueprintCallable) void BndEvt__PipelineEndConnection_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
	UFUNCTION(BlueprintCallable) void BndEvt__UsableOrderExtractor_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void OnRefineryStateChanged_Event(enum class ERefineryState InRefineryState);
	UFUNCTION(BlueprintCallable) void OnStateChanged_Event(ARessuplyPod* InPod, enum class ERessuplyPodState InState);
	UFUNCTION(BlueprintCallable) void BndEvt__Outline_K2Node_ComponentBoundEvent_2_OutlineChanged__DelegateSignature(enum class EOutline InOutline);
	UFUNCTION(BlueprintCallable) void InitialCarve();
	UFUNCTION(BlueprintCallable) void OnMatchStarted();
	UFUNCTION(BlueprintCallable) void StopBlinking();
	UFUNCTION(BlueprintCallable) void Ping(bool InValidPlacement);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32_t ParticleCount);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Refinery_Target(int32_t EntryPoint);
};

