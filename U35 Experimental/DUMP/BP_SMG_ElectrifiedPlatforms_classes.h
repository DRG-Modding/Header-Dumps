// BlueprintGeneratedClass BP_SMG_ElectrifiedPlatforms.BP_SMG_ElectrifiedPlatforms_C
// Size: 0x254 (Inherited: 0x220)
struct ABP_SMG_ElectrifiedPlatforms_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UParticleSystemComponent* PlaceholderParticle; // 0x228(0x08)
	UNiagaraComponent* Niagara; // 0x230(0x08)
	UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x238(0x08)
	USphereComponent* Sphere; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float LifeTime; // 0x250(0x04)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SMG_ElectrifiedPlatforms(int32_t EntryPoint);
};

