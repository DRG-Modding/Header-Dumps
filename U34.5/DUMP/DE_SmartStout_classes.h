// BlueprintGeneratedClass DE_SmartStout.DE_SmartStout_C
// Size: 0xe0 (Inherited: 0xc0)
struct UDE_SmartStout_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)
	UAudioComponent* MoonriderSound; // 0xd0(0x08)
	UParticleSystemComponent* ParticleEffect; // 0xd8(0x08)

	void OnStartEffect(APlayerCharacter* Character);
	void ExecuteUbergraph_DE_SmartStout(int32_t EntryPoint);
};

