// BlueprintGeneratedClass DE_MacteraBrew.DE_MacteraBrew_C
// Size: 0xe0 (Inherited: 0xc0)
struct UDE_MacteraBrew_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool PEffect; // 0xc8(0x01)
	UParticleSystemComponent* Particle Effect; // 0xd0(0x08)
	UAudioComponent* soundComp; // 0xd8(0x08)

	void OnStopEffect();
	void OnStartEffect(APlayerCharacter* Character);
	void ExecuteUbergraph_DE_MacteraBrew(int32_t EntryPoint);
};

