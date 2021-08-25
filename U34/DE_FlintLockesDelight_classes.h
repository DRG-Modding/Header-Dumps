// BlueprintGeneratedClass DE_FlintLockesDelight.DE_FlintLockesDelight_C
// Size: 0x100 (Inherited: 0xc0)
struct UDE_FlintLockesDelight_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)
	float NextJump; // 0xd0(0x04)
	struct FVector ImpulseStrength; // 0xd4(0x0c)
	struct UParticleSystemComponent* SmokeParticles; // 0xe0(0x08)
	struct UAudioComponent* Fuse Sound; // 0xe8(0x08)
	struct UParticleSystemComponent* ExplosionParticles; // 0xf0(0x08)
	struct UAudioComponent* ExplosionSound; // 0xf8(0x08)

	void OnRep_Trigger Explosion(); // Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnRep_Trigger Explosion
	void ReceiveTick(float DeltaSeconds); // Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ReceiveTick
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStartEffect
	void Trigger Explosion(); // Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Trigger Explosion
	void OnStopEffect(); // Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStopEffect
	void Stop Effects(); // Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Stop Effects
	void ExecuteUbergraph_DE_FlintLockesDelight(int32_t EntryPoint); // Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ExecuteUbergraph_DE_FlintLockesDelight
};

