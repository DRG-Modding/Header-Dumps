// BlueprintGeneratedClass BP_CombatShotgun_PoisonPlatforms.BP_CombatShotgun_PoisonPlatforms_C
// Size: 0x24c (Inherited: 0x220)
struct ABP_CombatShotgun_PoisonPlatforms_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UNiagaraComponent* Niagara; // 0x228(0x08)
	UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x230(0x08)
	USphereComponent* Sphere; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float LifeTime; // 0x248(0x04)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms(int32_t EntryPoint);
};

