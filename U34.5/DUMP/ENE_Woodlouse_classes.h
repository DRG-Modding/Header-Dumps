// BlueprintGeneratedClass ENE_Woodlouse.ENE_Woodlouse_C
// Size: 0x5e0 (Inherited: 0x580)
struct AENE_Woodlouse_C : AWoodLouse {
	FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	USphereComponent* ProjectileHit; // 0x588(0x08)
	UOutlineComponent* outline; // 0x590(0x08)
	UEnemyComponent* enemy; // 0x598(0x08)
	UPawnStatsComponent* PawnStats; // 0x5a0(0x08)
	UArmorHealthDamageComponent* ArmorHealthDamage; // 0x5a8(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x5b0(0x08)
	FVector_NetQuantize RagdollImpact; // 0x5b8(0x0c)
	USoundCue* deathSound; // 0x5c8(0x08)
	USoundCue* FoldSound; // 0x5d0(0x08)
	USoundCue* UnfoldSound; // 0x5d8(0x08)

	void OnRep_RagdollImpact();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnMessageAI(FName TriggerName);
	void Fizzle();
	void SwitchedState(enum class EWoodLouseState CurrentState);
	void BumpedTarget();
	void ChangePhysicsAsset();
	void IncrementCommunityGoal();
	void ExecuteUbergraph_ENE_Woodlouse(int32_t EntryPoint);
};

