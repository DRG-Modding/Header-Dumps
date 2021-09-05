// BlueprintGeneratedClass ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C
// Size: 0x3e9 (Inherited: 0x350)
struct AENE_ShootingPlant_Small_C : AHydraWeedShooter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	UProjectileAttackComponent* ProjectileAttack; // 0x358(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x360(0x08)
	UPointLightComponent* PointLight; // 0x368(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x370(0x08)
	UPawnSensingComponent* PawnSensing; // 0x378(0x08)
	UOutlineComponent* outline; // 0x380(0x08)
	UCapsuleComponent* Capsule; // 0x388(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x390(0x08)
	USceneComponent* DefaultSceneRoot; // 0x398(0x08)
	float Growth_Size_F8D1ED0F47A0109E69BA949410BBFBDF; // 0x3a0(0x04)
	enum class ETimelineDirection Growth__Direction_F8D1ED0F47A0109E69BA949410BBFBDF; // 0x3a4(0x01)
	UTimelineComponent* Growth; // 0x3a8(0x08)
	float Timeline_0_NewTrack_0_B7C1F10347624A87CE535C859B0970CF; // 0x3b0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B7C1F10347624A87CE535C859B0970CF; // 0x3b4(0x01)
	UTimelineComponent* Timeline_1; // 0x3b8(0x08)
	int32_t NumSpawned; // 0x3c0(0x04)
	int32_t MaxSpawns; // 0x3c4(0x04)
	float MaxSpawnDistance; // 0x3c8(0x04)
	bool IsPupating; // 0x3cc(0x01)
	float PupationDuration; // 0x3d0(0x04)
	enum class Spider_DeathType DeathType; // 0x3d4(0x01)
	float MaxLightIntensity; // 0x3d8(0x04)
	int32_t NumHitsToWakeUp; // 0x3dc(0x04)
	float AggressiveSightRadius; // 0x3e0(0x04)
	float PassiveSightRadius; // 0x3e4(0x04)
	bool IsPassive; // 0x3e8(0x01)

	bool GetIsTargetable();
	UMeshComponent* Receive_GetMeshComponent();
	void OnRep_DeathType();
	USkeletalMeshComponent* GetMesh();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Growth__FinishedFunc();
	void Growth__UpdateFunc();
	void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void ReceiveBeginPlay();
	void WakeUp();
	void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void NormalDeath();
	void WeakpointDeath();
	void OnRep_Target();
	void ToggleAggressionLevel(bool BePassive);
	void ExecuteUbergraph_ENE_ShootingPlant_Small(int32_t EntryPoint);
};

