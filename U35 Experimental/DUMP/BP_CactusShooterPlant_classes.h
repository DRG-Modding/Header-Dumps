// BlueprintGeneratedClass BP_CactusShooterPlant.BP_CactusShooterPlant_C
// Size: 0x2c4 (Inherited: 0x220)
struct ABP_CactusShooterPlant_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* ShootSpinesTrigger; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* CapsuleCollision; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) bool CanTrigger; 
	UPROPERTY(BlueprintReadWrite) float ResetTime; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnChangeState; 
	UPROPERTY(BlueprintReadWrite) FRotator SpikeDirection; 
	UPROPERTY(BlueprintReadWrite) FRandomStream RandomSeedStream; 
	UPROPERTY(BlueprintReadWrite) FVector SpikeOrigin; 
	UPROPERTY(BlueprintReadWrite) float SpikeOriginHeight; 
	UPROPERTY(BlueprintReadWrite) int32_t NumSpikes; 
	UPROPERTY(BlueprintReadWrite) float SpikeDistributionAngle; 
	UPROPERTY(BlueprintReadWrite) FVector2D SpikeOriginHeightMinMax; 
	UPROPERTY(BlueprintReadWrite) bool AnyPlayerNearby; 
	UPROPERTY(BlueprintReadWrite) float MinPlayerDistance; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__ShootSpinesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void ShootTheSpikes();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void PlayerNearby(APlayerCharacter* Player, bool enteredTrigger);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_CactusShooterPlant(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnChangeState__DelegateSignature(bool IsIdle);
};

