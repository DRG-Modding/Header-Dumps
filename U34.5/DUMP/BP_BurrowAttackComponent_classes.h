// BlueprintGeneratedClass BP_BurrowAttackComponent.BP_BurrowAttackComponent_C
// Size: 0x138 (Inherited: 0xf8)
struct UBP_BurrowAttackComponent_C : UDamageAttackComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	float BurrowDuration; // 0x100(0x04)
	FVector TargetLocation; // 0x104(0x0c)
	float TargetingDelay; // 0x110(0x04)
	UParticleSystem* ParticlesOnTarget; // 0x118(0x08)
	USoundBase* SoundOnTarget; // 0x120(0x08)
	UParticleSystem* ParticlesOnDamage; // 0x128(0x08)
	USoundBase* SoundOnDamage; // 0x130(0x08)

	void ReceiveAttackTarget(AActor* Target);
	void ShowTargetEffects(FVector_NetQuantize Location);
	void ShowDamageEffects(FVector_NetQuantize Location);
	void ExecuteUbergraph_BP_BurrowAttackComponent(int32_t EntryPoint);
};

