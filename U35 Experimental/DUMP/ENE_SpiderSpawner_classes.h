// BlueprintGeneratedClass ENE_SpiderSpawner.ENE_SpiderSpawner_C
// Size: 0x4a4 (Inherited: 0x39a)
struct AENE_SpiderSpawner_C : ABP_EnemySpawner_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere_Eye4; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere_Eye3; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere_Eye1; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere_Eye2; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* PlayerCollision; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UBP_SpawnerEyeComponent_C* Eye4; 
	UPROPERTY(BlueprintReadWrite) UBP_SpawnerEyeComponent_C* Eye3; 
	UPROPERTY(BlueprintReadWrite) UBP_SpawnerEyeComponent_C* Eye2; 
	UPROPERTY(BlueprintReadWrite) UBP_SpawnerEyeComponent_C* Eye1; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Spawner_Eye1_Rig; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Spawner_Eye4_Rig; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Spawner_Eye3_Rig; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Spawner_Eye2_Rig; 
	UPROPERTY(BlueprintReadWrite) UPawnSensingComponent* PawnSensing; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_Spawner; 
	UPROPERTY(BlueprintReadWrite) float NextSound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* DamageParticles; 
	UPROPERTY(BlueprintReadWrite) USoundCue* Damage Sound; 
	UPROPERTY(BlueprintReadWrite) USoundCue* Death Sound; 
	UPROPERTY(BlueprintReadWrite) USoundCue* LastSound; 
	UPROPERTY(BlueprintReadWrite) FLinearColor StartColor; 
	UPROPERTY(BlueprintReadWrite) FLinearColor DeadEyeColor; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* EyeMaterial; 
	UPROPERTY(BlueprintReadWrite) TArray<UBP_SpawnerEyeComponent_C*> Eyes; 
	UPROPERTY(BlueprintReadWrite) UEnemyDescriptor* DeathSpawn; 
	UPROPERTY(BlueprintReadWrite) int32_t DeathSpawnCount; 

	UFUNCTION(BlueprintCallable) USkeletalMeshComponent* GetMesh();
	UFUNCTION(BlueprintCallable) void SpawnDeathEffects();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Spawn Sound(USoundCue* Sound, float Volume);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	UFUNCTION(BlueprintCallable) void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void OnBodypartHit(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health);
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void PlayHitReact();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_SpiderSpawner(int32_t EntryPoint);
};

