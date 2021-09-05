// BlueprintGeneratedClass ENE_LootBug_Gold.ENE_LootBug_Gold_C
// Size: 0x498 (Inherited: 0x480)
struct AENE_LootBug_Gold_C : AENE_LootBug_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	UPointLightComponent* PointLight; // 0x488(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x490(0x08)

	void OnLootBugDeath();
	void ExecuteUbergraph_ENE_LootBug_Gold(int32_t EntryPoint);
};

