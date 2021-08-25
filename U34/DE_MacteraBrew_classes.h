// BlueprintGeneratedClass DE_MacteraBrew.DE_MacteraBrew_C
// Size: 0xe0 (Inherited: 0xc0)
struct UDE_MacteraBrew_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool PEffect; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
	struct UParticleSystemComponent* Particle Effect; // 0xd0(0x08)
	struct UAudioComponent* soundComp; // 0xd8(0x08)

	void OnStopEffect(); // Function DE_MacteraBrew.DE_MacteraBrew_C.OnStopEffect
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_MacteraBrew.DE_MacteraBrew_C.OnStartEffect
	void ExecuteUbergraph_DE_MacteraBrew(int32_t EntryPoint); // Function DE_MacteraBrew.DE_MacteraBrew_C.ExecuteUbergraph_DE_MacteraBrew
};

