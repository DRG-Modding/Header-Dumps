// BlueprintGeneratedClass DE_BlackoutStout.DE_BlackoutStout_C
// Size: 0xe8 (Inherited: 0xc0)
struct UDE_BlackoutStout_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool PEffect; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
	struct UParticleSystemComponent* Particle Effect; // 0xd0(0x08)
	struct UAudioComponent* soundComp; // 0xd8(0x08)
	struct UAudioComponent* soundCompDown; // 0xe0(0x08)

	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_BlackoutStout.DE_BlackoutStout_C.OnStartEffect
	void OnStopEffect(); // Function DE_BlackoutStout.DE_BlackoutStout_C.OnStopEffect
	void ExecuteUbergraph_DE_BlackoutStout(int32_t EntryPoint); // Function DE_BlackoutStout.DE_BlackoutStout_C.ExecuteUbergraph_DE_BlackoutStout
};

