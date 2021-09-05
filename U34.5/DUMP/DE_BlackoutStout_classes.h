// BlueprintGeneratedClass DE_BlackoutStout.DE_BlackoutStout_C
// Size: 0xe8 (Inherited: 0xc0)
struct UDE_BlackoutStout_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool PEffect; // 0xc8(0x01)
	UParticleSystemComponent* Particle Effect; // 0xd0(0x08)
	UAudioComponent* soundComp; // 0xd8(0x08)
	UAudioComponent* soundCompDown; // 0xe0(0x08)

	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void ExecuteUbergraph_DE_BlackoutStout(int32_t EntryPoint);
};

