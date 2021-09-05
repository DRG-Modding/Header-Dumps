// BlueprintGeneratedClass ENE_Jelly_Passive.ENE_Jelly_Passive_C
// Size: 0x3b0 (Inherited: 0x378)
struct AENE_Jelly_Passive_C : ADeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	UEnemyComponent* enemy; // 0x380(0x08)
	UAudioComponent* Audio; // 0x388(0x08)
	UPawnStatsComponent* PawnStats; // 0x390(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x398(0x08)
	UParticleSystem* DeathParticle; // 0x3a0(0x08)
	USoundBase* DeathScream; // 0x3a8(0x08)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnDeath();
	void ExecuteUbergraph_ENE_Jelly_Passive(int32_t EntryPoint);
};

