// BlueprintGeneratedClass ENE_FlyingCritterBase.ENE_FlyingCritterBase_C
// Size: 0x448 (Inherited: 0x3c8)
struct AENE_FlyingCritterBase_C : AFlyingEnemyDeepPathfinderCharacter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Trail; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio Flying; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio Idle; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Wings; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UInDangerComponent* InDanger; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UGroundToAirComponent* GroundToAir; 
	UPROPERTY(BlueprintReadWrite) float FleeFromplayerRange; 
	UPROPERTY(BlueprintReadWrite) float MinWalkTIme; 
	UPROPERTY(BlueprintReadWrite) float MaxWalkTime; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) UFXSystemAsset* deathParticles; 

	UFUNCTION(BlueprintCallable) void SetWantstoFly(bool Fly);
	UFUNCTION(BlueprintCallable) void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void LookforPlayers();
	UFUNCTION(BlueprintCallable) void RandomFlight();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_FlyingCritterBase(int32_t EntryPoint);
};

