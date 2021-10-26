// BlueprintGeneratedClass BP_RockEnemiesEvent.BP_RockEnemiesEvent_C
// Size: 0x460 (Inherited: 0x3d8)
struct ABP_RockEnemiesEvent_C : ARockEnemiesEvent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* SprinklerMiscG_1_Cue; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box1; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) URoomCarverComponent* RoomCarver; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Sparks; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Starter4; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Starter6; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Starter5; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Starter3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 

	UFUNCTION(BlueprintCallable) void OnShoot();
	UFUNCTION(BlueprintCallable) void OnEventFinished(bool eventSuccess);
	UFUNCTION(BlueprintCallable) void Spawn Enemies();
	UFUNCTION(BlueprintCallable) void OnEventTriggered();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void EnemySpawnedAfterComplete(APawn* spawnedEnemy);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_RockEnemiesEvent(int32_t EntryPoint);
};

