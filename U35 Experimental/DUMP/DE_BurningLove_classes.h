// BlueprintGeneratedClass DE_BurningLove.DE_BurningLove_C
// Size: 0xe0 (Inherited: 0xc0)
struct UDE_BurningLove_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)
	UParticleSystemComponent* FireEffect; // 0xd0(0x08)
	UAudioComponent* BurningSoundEffect; // 0xd8(0x08)

	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void ExecuteUbergraph_DE_BurningLove(int32_t EntryPoint);
};

