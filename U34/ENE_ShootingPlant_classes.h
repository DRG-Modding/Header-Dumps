// BlueprintGeneratedClass ENE_ShootingPlant.ENE_ShootingPlant_C
// Size: 0x398 (Inherited: 0x348)
struct AENE_ShootingPlant_C : AShootingPlant {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UProjectileAttackComponent* ProjectileAttack; // 0x350(0x08)
	struct UStaticMeshComponent* WEakspot2; // 0x358(0x08)
	struct UStaticMeshComponent* Weakspot; // 0x360(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x368(0x08)
	struct UPawnSensingComponent* PawnSensing; // 0x370(0x08)
	struct UOutlineComponent* outline; // 0x378(0x08)
	struct UCapsuleComponent* Capsule; // 0x380(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x388(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x390(0x08)

	struct USkeletalMeshComponent* GetMesh(); // Function ENE_ShootingPlant.ENE_ShootingPlant_C.GetMesh
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_ShootingPlant.ENE_ShootingPlant_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health); // Function ENE_ShootingPlant.ENE_ShootingPlant_C.BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // Function ENE_ShootingPlant.ENE_ShootingPlant_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
	void OnFrozen(struct AActor* Source); // Function ENE_ShootingPlant.ENE_ShootingPlant_C.OnFrozen
	void OnUnFrozen(); // Function ENE_ShootingPlant.ENE_ShootingPlant_C.OnUnFrozen
	void OnRep_Target(); // Function ENE_ShootingPlant.ENE_ShootingPlant_C.OnRep_Target
	void ExecuteUbergraph_ENE_ShootingPlant(int32_t EntryPoint); // Function ENE_ShootingPlant.ENE_ShootingPlant_C.ExecuteUbergraph_ENE_ShootingPlant
};

