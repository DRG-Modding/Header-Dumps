// BlueprintGeneratedClass ENE_Jelly_Passive.ENE_Jelly_Passive_C
// Size: 0x3b0 (Inherited: 0x378)
struct AENE_Jelly_Passive_C : ADeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UEnemyComponent* enemy; // 0x380(0x08)
	struct UAudioComponent* Audio; // 0x388(0x08)
	struct UPawnStatsComponent* PawnStats; // 0x390(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x398(0x08)
	struct UParticleSystem* DeathParticle; // 0x3a0(0x08)
	struct USoundBase* DeathScream; // 0x3a8(0x08)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Jelly_Passive.ENE_Jelly_Passive_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnDeath(); // Function ENE_Jelly_Passive.ENE_Jelly_Passive_C.OnDeath
	void ExecuteUbergraph_ENE_Jelly_Passive(int32_t EntryPoint); // Function ENE_Jelly_Passive.ENE_Jelly_Passive_C.ExecuteUbergraph_ENE_Jelly_Passive
};

