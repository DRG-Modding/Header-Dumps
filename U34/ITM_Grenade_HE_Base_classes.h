// BlueprintGeneratedClass ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C
// Size: 0x340 (Inherited: 0x314)
struct AITM_Grenade_HE_Base_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UDamageComponent* Damage; // 0x320(0x08)
	struct UExplosionComponent* Explosion; // 0x328(0x08)
	struct UParticleSystem* ExplosionParticles; // 0x330(0x08)
	struct USoundBase* ExplosionSound; // 0x338(0x08)

	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.AddGearStateEntries
	void OnExploded(); // Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.OnExploded
	void ExecuteUbergraph_ITM_Grenade_HE_Base(int32_t EntryPoint); // Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.ExecuteUbergraph_ITM_Grenade_HE_Base
};

