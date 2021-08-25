// BlueprintGeneratedClass ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C
// Size: 0x3e9 (Inherited: 0x350)
struct AENE_ShootingPlant_Small_C : AHydraWeedShooter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UProjectileAttackComponent* ProjectileAttack; // 0x358(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x360(0x08)
	struct UPointLightComponent* PointLight; // 0x368(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x370(0x08)
	struct UPawnSensingComponent* PawnSensing; // 0x378(0x08)
	struct UOutlineComponent* outline; // 0x380(0x08)
	struct UCapsuleComponent* Capsule; // 0x388(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x390(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x398(0x08)
	float Growth_Size_F8D1ED0F47A0109E69BA949410BBFBDF; // 0x3a0(0x04)
	char Growth__Direction_F8D1ED0F47A0109E69BA949410BBFBDF; // 0x3a4(0x01)
	char UnknownData_3A5[0x3]; // 0x3a5(0x03)
	struct UTimelineComponent* Growth; // 0x3a8(0x08)
	float Timeline_0_NewTrack_0_B7C1F10347624A87CE535C859B0970CF; // 0x3b0(0x04)
	char Timeline_0__Direction_B7C1F10347624A87CE535C859B0970CF; // 0x3b4(0x01)
	char UnknownData_3B5[0x3]; // 0x3b5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3b8(0x08)
	int32_t NumSpawned; // 0x3c0(0x04)
	int32_t MaxSpawns; // 0x3c4(0x04)
	float MaxSpawnDistance; // 0x3c8(0x04)
	bool IsPupating; // 0x3cc(0x01)
	char UnknownData_3CD[0x3]; // 0x3cd(0x03)
	float PupationDuration; // 0x3d0(0x04)
	char DeathType; // 0x3d4(0x01)
	char UnknownData_3D5[0x3]; // 0x3d5(0x03)
	float MaxLightIntensity; // 0x3d8(0x04)
	int32_t NumHitsToWakeUp; // 0x3dc(0x04)
	float AggressiveSightRadius; // 0x3e0(0x04)
	float PassiveSightRadius; // 0x3e4(0x04)
	bool IsPassive; // 0x3e8(0x01)

	bool GetIsTargetable(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.GetIsTargetable
	struct UMeshComponent* Receive_GetMeshComponent(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.Receive_GetMeshComponent
	void OnRep_DeathType(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.OnRep_DeathType
	struct USkeletalMeshComponent* GetMesh(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.GetMesh
	void Timeline_0__FinishedFunc(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.Timeline_0__UpdateFunc
	void Growth__FinishedFunc(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.Growth__FinishedFunc
	void Growth__UpdateFunc(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.Growth__UpdateFunc
	void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
	void OnFrozen(struct AActor* Source); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.OnFrozen
	void OnUnFrozen(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.OnUnFrozen
	void ReceiveBeginPlay(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.ReceiveBeginPlay
	void WakeUp(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.WakeUp
	void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(struct UHealthComponent* HealthComponent, float damageAmount, struct UDamageClass* DamageClass, struct AActor* damageCause, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature
	void NormalDeath(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.NormalDeath
	void WeakpointDeath(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.WeakpointDeath
	void OnRep_Target(); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.OnRep_Target
	void ToggleAggressionLevel(bool BePassive); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.ToggleAggressionLevel
	void ExecuteUbergraph_ENE_ShootingPlant_Small(int32_t EntryPoint); // Function ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C.ExecuteUbergraph_ENE_ShootingPlant_Small
};

