// BlueprintGeneratedClass DE_BlacklockLager.DE_BlacklockLager_C
// Size: 0xf8 (Inherited: 0xc0)
struct UDE_BlacklockLager_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	FName Effect ID; // 0xc8(0x08)
	UMaterialInstanceDynamic* BlackLock Effect; // 0xd0(0x08)
	APlayerCharacter* Character; // 0xd8(0x08)
	float Effect Power; // 0xe0(0x04)
	UParticleSystemComponent* FogParticles; // 0xe8(0x08)
	UAudioComponent* SoundEffect; // 0xf0(0x08)

	void ReceiveTick(float DeltaSeconds);
	void OnStartEffect(APlayerCharacter* Character);
	void Activate Effects();
	void OnStopEffect();
	void ExecuteUbergraph_DE_BlacklockLager(int32_t EntryPoint);
};

