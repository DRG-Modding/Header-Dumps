// BlueprintGeneratedClass ENE_StabberVines.ENE_StabberVines_C
// Size: 0x400 (Inherited: 0x338)
struct AENE_StabberVines_C : AEnemyPawn {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* AttackPosition; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* U33_BiomPlant_ThornBlob_003; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* HeadSpawnPosition1; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* HeadSpawnPosition3; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* HeadSpawnPosition2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Body; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float HeadMovementDuration; 
	UPROPERTY(BlueprintReadWrite) TArray<ABP_StabberVine_Tentacle_C*> TentaclesCPP; 
	UPROPERTY(BlueprintReadWrite) bool IsBusy; 
	UPROPERTY(BlueprintReadWrite) TArray<FTransform> HydraHeadsSpawnRelativeTransforms; 
	UPROPERTY(BlueprintReadWrite) FName MaterialColourParamString; 
	UPROPERTY(BlueprintReadWrite) FLinearColor IdleColor; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial; 
	UPROPERTY(BlueprintReadWrite) float NormalHeadMovementDurration; 
	UPROPERTY(BlueprintReadWrite) float AttackTimer; 
	UPROPERTY(BlueprintReadWrite) float AttackDistance; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle AttackTimerHandle; 

	UFUNCTION(BlueprintCallable) void TryStartMeleeAttack();
	UFUNCTION(BlueprintCallable) void AreAllTentaclesDead(bool OutAllDead);
	UFUNCTION(BlueprintCallable) void GenerateRandomSpikePositions(int32_t SpikeIndex, FVector SpikeLocation, FRotator SpikeRotation);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void RemoveHead(ABP_StabberVine_Tentacle_C* HeadRef);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void SetupTargetDetection();
	UFUNCTION(BlueprintCallable) void SetupTentacles();
	UFUNCTION(BlueprintCallable) void Kill Root();
	UFUNCTION(BlueprintCallable) void BndEvt__Outline_K2Node_ComponentBoundEvent_1_OutlineChanged__DelegateSignature(enum class EOutline InOutline);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_StabberVines(int32_t EntryPoint);
};

