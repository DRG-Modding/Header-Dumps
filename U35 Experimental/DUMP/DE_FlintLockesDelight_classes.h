// BlueprintGeneratedClass DE_FlintLockesDelight.DE_FlintLockesDelight_C
// Size: 0x100 (Inherited: 0xc0)
struct UDE_FlintLockesDelight_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)
	float NextJump; // 0xd0(0x04)
	FVector ImpulseStrength; // 0xd4(0x0c)
	UParticleSystemComponent* SmokeParticles; // 0xe0(0x08)
	UAudioComponent* Fuse Sound; // 0xe8(0x08)
	UParticleSystemComponent* ExplosionParticles; // 0xf0(0x08)
	UAudioComponent* ExplosionSound; // 0xf8(0x08)

	void OnRep_Trigger Explosion();
	void ReceiveTick(float DeltaSeconds);
	void OnStartEffect(APlayerCharacter* Character);
	void Trigger Explosion();
	void OnStopEffect();
	void Stop Effects();
	void ExecuteUbergraph_DE_FlintLockesDelight(int32_t EntryPoint);
};

