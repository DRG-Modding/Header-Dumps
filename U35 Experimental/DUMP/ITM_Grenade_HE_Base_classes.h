// BlueprintGeneratedClass ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C
// Size: 0x340 (Inherited: 0x314)
struct AITM_Grenade_HE_Base_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	UDamageComponent* Damage; // 0x320(0x08)
	UExplosionComponent* Explosion; // 0x328(0x08)
	UParticleSystem* ExplosionParticles; // 0x330(0x08)
	USoundBase* ExplosionSound; // 0x338(0x08)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnExploded();
	void ExecuteUbergraph_ITM_Grenade_HE_Base(int32_t EntryPoint);
};

