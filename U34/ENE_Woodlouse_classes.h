// BlueprintGeneratedClass ENE_Woodlouse.ENE_Woodlouse_C
// Size: 0x5e0 (Inherited: 0x580)
struct AENE_Woodlouse_C : AWoodLouse {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct USphereComponent* ProjectileHit; // 0x588(0x08)
	struct UOutlineComponent* outline; // 0x590(0x08)
	struct UEnemyComponent* enemy; // 0x598(0x08)
	struct UPawnStatsComponent* PawnStats; // 0x5a0(0x08)
	struct UArmorHealthDamageComponent* ArmorHealthDamage; // 0x5a8(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x5b0(0x08)
	struct FVector_NetQuantize RagdollImpact; // 0x5b8(0x0c)
	char UnknownData_5C4[0x4]; // 0x5c4(0x04)
	struct USoundCue* deathSound; // 0x5c8(0x08)
	struct USoundCue* FoldSound; // 0x5d0(0x08)
	struct USoundCue* UnfoldSound; // 0x5d8(0x08)

	void OnRep_RagdollImpact(); // Function ENE_Woodlouse.ENE_Woodlouse_C.OnRep_RagdollImpact
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Woodlouse.ENE_Woodlouse_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnMessageAI(struct FName TriggerName); // Function ENE_Woodlouse.ENE_Woodlouse_C.OnMessageAI
	void Fizzle(); // Function ENE_Woodlouse.ENE_Woodlouse_C.Fizzle
	void SwitchedState(enum class EWoodLouseState CurrentState); // Function ENE_Woodlouse.ENE_Woodlouse_C.SwitchedState
	void BumpedTarget(); // Function ENE_Woodlouse.ENE_Woodlouse_C.BumpedTarget
	void ChangePhysicsAsset(); // Function ENE_Woodlouse.ENE_Woodlouse_C.ChangePhysicsAsset
	void IncrementCommunityGoal(); // Function ENE_Woodlouse.ENE_Woodlouse_C.IncrementCommunityGoal
	void ExecuteUbergraph_ENE_Woodlouse(int32_t EntryPoint); // Function ENE_Woodlouse.ENE_Woodlouse_C.ExecuteUbergraph_ENE_Woodlouse
};

