// BlueprintGeneratedClass BP_SpiderEgg_Base.BP_SpiderEgg_Base_C
// Size: 0x2a5 (Inherited: 0x220)
struct ABP_SpiderEgg_Base_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Egg Whole; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Egg Broken; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* Spider Spawn Point; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UEnemyDescriptor* EnemyToSpawn; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* EggBreakParticles; 
	UPROPERTY(BlueprintReadWrite) UMaterialInterface* EggGooDecal; 
	UPROPERTY(BlueprintReadWrite) bool OpenEgg; 
	UPROPERTY(BlueprintReadWrite) bool OpenOnPlayerProximity; 
	UPROPERTY(BlueprintReadWrite) float ProximityOpenRange; 
	UPROPERTY(BlueprintReadWrite) float ProximityOpenDelayMax; 
	UPROPERTY(BlueprintReadWrite) float ProximityOpenDelayMin; 
	UPROPERTY(BlueprintReadWrite) float ProximityOpenProbability; 
	UPROPERTY(BlueprintReadWrite) float ChainReactionDistance; 
	UPROPERTY(BlueprintReadWrite) float ChainReactionProbability; 
	UPROPERTY(BlueprintReadWrite) float ChainReactionDelayMin; 
	UPROPERTY(BlueprintReadWrite) float ChainReactionDelayMax; 
	UPROPERTY(BlueprintReadWrite) bool ListenForDeath; 

	UFUNCTION(BlueprintCallable) void GetEnemyToSpawn(UEnemyDescriptor* enemy);
	UFUNCTION(BlueprintCallable) void GetEliminationObjective(UEliminationObjective* AsElimination Objective);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnEggBroken();
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void OnPlayerProximityChanged(APlayerCharacter* Player, bool enteredTrigger);
	UFUNCTION(BlueprintCallable) void CrackEgg();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ChainReaction();
	UFUNCTION(BlueprintCallable) void SpawnCustom();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SpiderEgg_Base(int32_t EntryPoint);
};

