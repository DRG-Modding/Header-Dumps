// BlueprintGeneratedClass ENE_FacilityTurret_Barrier.ENE_FacilityTurret_Barrier_C
// Size: 0x518 (Inherited: 0x4f0)
struct AENE_FacilityTurret_Barrier_C : AENE_FacilityTurret_Spinning_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	UBoxComponent* AoECollision; // 0x4f8(0x08)
	UStaticMeshComponent* Base; // 0x500(0x08)
	UAudioComponent* BarrierTurretFire_Cue; // 0x508(0x08)
	UProjectileAttackComponent* ProjectileAttack; // 0x510(0x08)

	void OnAttack();
	void BndEvt__ProjectileAttack_K2Node_ComponentBoundEvent_0_ProjectileAttackDelegate__DelegateSignature();
	void ExecuteUbergraph_ENE_FacilityTurret_Barrier(int32_t EntryPoint);
};

