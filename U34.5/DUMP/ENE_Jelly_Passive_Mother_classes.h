// BlueprintGeneratedClass ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C
// Size: 0x3c8 (Inherited: 0x3b0)
struct AENE_Jelly_Passive_Mother_C : AENE_Jelly_Passive_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x3b8(0x08)
	UBoxComponent* Box1; // 0x3c0(0x08)

	void OnDeath();
	void ExecuteUbergraph_ENE_Jelly_Passive_Mother(int32_t EntryPoint);
};

