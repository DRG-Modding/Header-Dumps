// BlueprintGeneratedClass ENE_SpiderSpawner.ENE_SpiderSpawner_C
// Size: 0x4a4 (Inherited: 0x39a)
struct AENE_SpiderSpawner_C : ABP_EnemySpawner_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	USphereComponent* Sphere_Eye4; // 0x3a8(0x08)
	USphereComponent* Sphere_Eye3; // 0x3b0(0x08)
	USphereComponent* Sphere_Eye1; // 0x3b8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x3c0(0x08)
	USphereComponent* Sphere_Eye2; // 0x3c8(0x08)
	UCapsuleComponent* PlayerCollision; // 0x3d0(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x3d8(0x08)
	UOutlineComponent* outline; // 0x3e0(0x08)
	UBP_SpawnerEyeComponent_C* Eye4; // 0x3e8(0x08)
	UBP_SpawnerEyeComponent_C* Eye3; // 0x3f0(0x08)
	UBP_SpawnerEyeComponent_C* Eye2; // 0x3f8(0x08)
	UBP_SpawnerEyeComponent_C* Eye1; // 0x400(0x08)
	USkeletalMeshComponent* Spawner_Eye1_Rig; // 0x408(0x08)
	USkeletalMeshComponent* Spawner_Eye4_Rig; // 0x410(0x08)
	USkeletalMeshComponent* Spawner_Eye3_Rig; // 0x418(0x08)
	USkeletalMeshComponent* Spawner_Eye2_Rig; // 0x420(0x08)
	UPawnSensingComponent* PawnSensing; // 0x428(0x08)
	USkeletalMeshComponent* SK_Spawner; // 0x430(0x08)
	float NextSound; // 0x438(0x04)
	UParticleSystem* DamageParticles; // 0x440(0x08)
	USoundCue* Damage Sound; // 0x448(0x08)
	USoundCue* Death Sound; // 0x450(0x08)
	USoundCue* LastSound; // 0x458(0x08)
	FLinearColor StartColor; // 0x460(0x10)
	FLinearColor DeadEyeColor; // 0x470(0x10)
	UMaterialInstanceDynamic* EyeMaterial; // 0x480(0x08)
	TArray<UBP_SpawnerEyeComponent_C*> Eyes; // 0x488(0x10)
	UEnemyDescriptor* DeathSpawn; // 0x498(0x08)
	int32_t DeathSpawnCount; // 0x4a0(0x04)

	USkeletalMeshComponent* GetMesh();
	void SpawnDeathEffects();
	void UserConstructionScript();
	void Spawn Sound(USoundCue* Sound, float Volume);
	void ReceiveBeginPlay();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount);
	void OnBodypartHit(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health);
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void PlayHitReact();
	void ExecuteUbergraph_ENE_SpiderSpawner(int32_t EntryPoint);
};

