// BlueprintGeneratedClass DE_SmartStout.DE_SmartStout_C
// Size: 0xe0 (Inherited: 0xc0)
struct UDE_SmartStout_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)
	struct UAudioComponent* MoonriderSound; // 0xd0(0x08)
	struct UParticleSystemComponent* ParticleEffect; // 0xd8(0x08)

	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_SmartStout.DE_SmartStout_C.OnStartEffect
	void ExecuteUbergraph_DE_SmartStout(int32_t EntryPoint); // Function DE_SmartStout.DE_SmartStout_C.ExecuteUbergraph_DE_SmartStout
};

