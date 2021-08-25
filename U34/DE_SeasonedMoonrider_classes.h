// BlueprintGeneratedClass DE_SeasonedMoonrider.DE_SeasonedMoonrider_C
// Size: 0xe0 (Inherited: 0xc0)
struct UDE_SeasonedMoonrider_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)
	struct UAudioComponent* MoonriderSound; // 0xd0(0x08)
	struct UParticleSystemComponent* ParticleEffect; // 0xd8(0x08)

	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.OnStartEffect
	void OnStopEffect(); // Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.OnStopEffect
	void ExecuteUbergraph_DE_SeasonedMoonrider(int32_t EntryPoint); // Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.ExecuteUbergraph_DE_SeasonedMoonrider
};

