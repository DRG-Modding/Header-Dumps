// BlueprintGeneratedClass ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C
// Size: 0x3a0 (Inherited: 0x358)
struct AENE_InsectSwarm_Spawner_C : AInsectSwarmSpawner {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_24041E04487F50C14665D9A721366BB3; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_24041E04487F50C14665D9A721366BB3; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 

	UFUNCTION(BlueprintCallable) UStaticMeshComponent* Receive_GetStaticMesh();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void OnSwarmSpawned(AInsectSwarmEnemy* Swarm);
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_InsectSwarm_Spawner(int32_t EntryPoint);
};

