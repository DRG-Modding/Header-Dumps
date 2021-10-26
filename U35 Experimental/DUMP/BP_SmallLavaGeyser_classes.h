// BlueprintGeneratedClass BP_SmallLavaGeyser.BP_SmallLavaGeyser_C
// Size: 0x304 (Inherited: 0x220)
struct ABP_SmallLavaGeyser_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystemTell; 
	UPROPERTY(BlueprintReadWrite) UActorStateComponent* EndErruptionState; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* Billboard; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Carver_DropPodDrill001; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver_HotRockCore; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Carver_DropPodDrill002; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver_Slag; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UActorStateComponent* ErruptState; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Carver_Rock21; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float LightIntensity_Intensity_6E1A640541026D247C6B3FA0FE340F1B; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection LightIntensity__Direction_6E1A640541026D247C6B3FA0FE340F1B; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* LightIntensity; 
	UPROPERTY(BlueprintReadWrite) FVector2D ErruptionDurrationMinMax; 
	UPROPERTY(BlueprintReadWrite) float LightIntensityErrupt; 
	UPROPERTY(BlueprintReadWrite) float ChainReactionRadius; 
	UPROPERTY(BlueprintReadWrite) UHealthComponentBase* TargetHealthComponent; 
	UPROPERTY(BlueprintReadWrite) float ErruptionDelay; 
	UPROPERTY(BlueprintReadWrite) float OverallErruptionCycleLength; 
	UPROPERTY(BlueprintReadWrite) float IdleLength; 
	UPROPERTY(BlueprintReadWrite) int32_t ErruptionDelayMin; 
	UPROPERTY(BlueprintReadWrite) int32_t ErruptionDelayMax; 
	UPROPERTY(BlueprintReadWrite) int32_t ErruptionDelayMultiplier; 
	UPROPERTY(BlueprintReadWrite) float TellLength; 
	UPROPERTY(BlueprintReadWrite) int32_t NumLoopsInErruptionCycle; 
	UPROPERTY(BlueprintReadWrite) int32_t NumLoops; 
	UPROPERTY(BlueprintReadWrite) float TimeBetweenCycles; 
	UPROPERTY(BlueprintReadWrite) float ErruptionDelayVariation; 
	UPROPERTY(BlueprintReadWrite) FVector2D ErruptionVariationDellayMinMax; 

	UFUNCTION(BlueprintCallable) void LightIntensity__FinishedFunc();
	UFUNCTION(BlueprintCallable) void LightIntensity__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__ErruptState_K2Node_ComponentBoundEvent_0_StateDelegate__DelegateSignature(UActorStateComponent* State);
	UFUNCTION(BlueprintCallable) void PlayErruptionAudio();
	UFUNCTION(BlueprintCallable) void ShowErruptionGFX();
	UFUNCTION(BlueprintCallable) void HideErruptionGFX();
	UFUNCTION(BlueprintCallable) void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void BndEvt__EndErruptionState_K2Node_ComponentBoundEvent_1_StateDelegate__DelegateSignature(UActorStateComponent* State);
	UFUNCTION(BlueprintCallable) void ErruptionCycleLoop();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SmallLavaGeyser(int32_t EntryPoint);
};

