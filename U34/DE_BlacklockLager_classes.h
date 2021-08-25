// BlueprintGeneratedClass DE_BlacklockLager.DE_BlacklockLager_C
// Size: 0xf8 (Inherited: 0xc0)
struct UDE_BlacklockLager_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct FName Effect ID; // 0xc8(0x08)
	struct UMaterialInstanceDynamic* BlackLock Effect; // 0xd0(0x08)
	struct APlayerCharacter* Character; // 0xd8(0x08)
	float Effect Power; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct UParticleSystemComponent* FogParticles; // 0xe8(0x08)
	struct UAudioComponent* SoundEffect; // 0xf0(0x08)

	void ReceiveTick(float DeltaSeconds); // Function DE_BlacklockLager.DE_BlacklockLager_C.ReceiveTick
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_BlacklockLager.DE_BlacklockLager_C.OnStartEffect
	void Activate Effects(); // Function DE_BlacklockLager.DE_BlacklockLager_C.Activate Effects
	void OnStopEffect(); // Function DE_BlacklockLager.DE_BlacklockLager_C.OnStopEffect
	void ExecuteUbergraph_DE_BlacklockLager(int32_t EntryPoint); // Function DE_BlacklockLager.DE_BlacklockLager_C.ExecuteUbergraph_DE_BlacklockLager
};

