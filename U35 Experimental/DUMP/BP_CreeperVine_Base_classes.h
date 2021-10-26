// BlueprintGeneratedClass BP_CreeperVine_Base.BP_CreeperVine_Base_C
// Size: 0x4b8 (Inherited: 0x448)
struct ABP_CreeperVine_Base_C : ASplinePlant {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* HurtAudioComponent; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Trail; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_brokenFloor_01; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle CheckPlayersTimer; 
	UPROPERTY(BlueprintReadWrite) bool IsRetracted; 
	UPROPERTY(BlueprintReadWrite) float SplineNodeRandomOffset; 
	UPROPERTY(BlueprintReadWrite) USoundBase* HurtAudio; 
	UPROPERTY(BlueprintReadWrite) float SpeedRetraction; 
	UPROPERTY(BlueprintReadWrite) float SpeedExtending; 
	UPROPERTY(BlueprintReadWrite) float LengthRetracted; 
	UPROPERTY(BlueprintReadWrite) float LastPlayerHitTime; 

	UFUNCTION(BlueprintCallable) void HandleActorOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION(BlueprintCallable) void HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void PrepareSpline(USplineComponent* InSplineComponent, int32_t InSeed);
	UFUNCTION(BlueprintCallable) void OnRep_IsRetracted();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ReceivePrepareSpline(USplineComponent* InSplineComponent, int32_t InSeed);
	UFUNCTION(BlueprintCallable) void InitiateChainRetract();
	UFUNCTION(BlueprintCallable) void PlayHurtAudio(float InDamage);
	UFUNCTION(BlueprintCallable) void Retract();
	UFUNCTION(BlueprintCallable) void ReceiveMovementFinished(float InDistanceProgress);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_CreeperVine_Base(int32_t EntryPoint);
};

