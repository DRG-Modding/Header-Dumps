// BlueprintGeneratedClass ENE_ShootingPlant.ENE_ShootingPlant_C
// Size: 0x398 (Inherited: 0x348)
struct AENE_ShootingPlant_C : AShootingPlant {
	FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	UProjectileAttackComponent* ProjectileAttack; // 0x350(0x08)
	UStaticMeshComponent* WEakspot2; // 0x358(0x08)
	UStaticMeshComponent* Weakspot; // 0x360(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x368(0x08)
	UPawnSensingComponent* PawnSensing; // 0x370(0x08)
	UOutlineComponent* outline; // 0x378(0x08)
	UCapsuleComponent* Capsule; // 0x380(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x388(0x08)
	USceneComponent* DefaultSceneRoot; // 0x390(0x08)

	USkeletalMeshComponent* GetMesh();
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void OnRep_Target();
	void ExecuteUbergraph_ENE_ShootingPlant(int32_t EntryPoint);
};

