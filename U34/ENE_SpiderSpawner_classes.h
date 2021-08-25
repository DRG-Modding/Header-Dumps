// BlueprintGeneratedClass ENE_SpiderSpawner.ENE_SpiderSpawner_C
// Size: 0x4a4 (Inherited: 0x39a)
struct AENE_SpiderSpawner_C : ABP_EnemySpawner_C {
	char UnknownData_39A[0x6]; // 0x39a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct USphereComponent* Sphere_Eye4; // 0x3a8(0x08)
	struct USphereComponent* Sphere_Eye3; // 0x3b0(0x08)
	struct USphereComponent* Sphere_Eye1; // 0x3b8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x3c0(0x08)
	struct USphereComponent* Sphere_Eye2; // 0x3c8(0x08)
	struct UCapsuleComponent* PlayerCollision; // 0x3d0(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x3d8(0x08)
	struct UOutlineComponent* outline; // 0x3e0(0x08)
	struct UBP_SpawnerEyeComponent_C* Eye4; // 0x3e8(0x08)
	struct UBP_SpawnerEyeComponent_C* Eye3; // 0x3f0(0x08)
	struct UBP_SpawnerEyeComponent_C* Eye2; // 0x3f8(0x08)
	struct UBP_SpawnerEyeComponent_C* Eye1; // 0x400(0x08)
	struct USkeletalMeshComponent* Spawner_Eye1_Rig; // 0x408(0x08)
	struct USkeletalMeshComponent* Spawner_Eye4_Rig; // 0x410(0x08)
	struct USkeletalMeshComponent* Spawner_Eye3_Rig; // 0x418(0x08)
	struct USkeletalMeshComponent* Spawner_Eye2_Rig; // 0x420(0x08)
	struct UPawnSensingComponent* PawnSensing; // 0x428(0x08)
	struct USkeletalMeshComponent* SK_Spawner; // 0x430(0x08)
	float NextSound; // 0x438(0x04)
	char UnknownData_43C[0x4]; // 0x43c(0x04)
	struct UParticleSystem* DamageParticles; // 0x440(0x08)
	struct USoundCue* Damage Sound; // 0x448(0x08)
	struct USoundCue* Death Sound; // 0x450(0x08)
	struct USoundCue* LastSound; // 0x458(0x08)
	struct FLinearColor StartColor; // 0x460(0x10)
	struct FLinearColor DeadEyeColor; // 0x470(0x10)
	struct UMaterialInstanceDynamic* EyeMaterial; // 0x480(0x08)
	struct TArray<struct UBP_SpawnerEyeComponent_C*> Eyes; // 0x488(0x10)
	struct UEnemyDescriptor* DeathSpawn; // 0x498(0x08)
	int32_t DeathSpawnCount; // 0x4a0(0x04)

	struct USkeletalMeshComponent* GetMesh(); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.GetMesh
	void SpawnDeathEffects(); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.SpawnDeathEffects
	void UserConstructionScript(); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.UserConstructionScript
	void Spawn Sound(struct USoundCue* Sound, float Volume); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.Spawn Sound
	void ReceiveBeginPlay(); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.ReceiveBeginPlay
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
	void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature
	void OnBodypartHit(float amount, float BaseAmount, struct UPrimitiveComponent* Component, struct UFSDPhysicalMaterial* PhysMat, struct FName BoneName); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.OnBodypartHit
	void OnFrozen(struct AActor* Source); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.OnFrozen
	void OnUnFrozen(); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.OnUnFrozen
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void PlayHitReact(); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.PlayHitReact
	void ExecuteUbergraph_ENE_SpiderSpawner(int32_t EntryPoint); // Function ENE_SpiderSpawner.ENE_SpiderSpawner_C.ExecuteUbergraph_ENE_SpiderSpawner
};

