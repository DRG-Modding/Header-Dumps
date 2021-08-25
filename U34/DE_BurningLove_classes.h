// BlueprintGeneratedClass DE_BurningLove.DE_BurningLove_C
// Size: 0xe0 (Inherited: 0xc0)
struct UDE_BurningLove_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)
	struct UParticleSystemComponent* FireEffect; // 0xd0(0x08)
	struct UAudioComponent* BurningSoundEffect; // 0xd8(0x08)

	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_BurningLove.DE_BurningLove_C.OnStartEffect
	void OnStopEffect(); // Function DE_BurningLove.DE_BurningLove_C.OnStopEffect
	void ExecuteUbergraph_DE_BurningLove(int32_t EntryPoint); // Function DE_BurningLove.DE_BurningLove_C.ExecuteUbergraph_DE_BurningLove
};

