// BlueprintGeneratedClass BP_BurrowAttackComponent.BP_BurrowAttackComponent_C
// Size: 0x138 (Inherited: 0xf8)
struct UBP_BurrowAttackComponent_C : UDamageAttackComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	float BurrowDuration; // 0x100(0x04)
	struct FVector TargetLocation; // 0x104(0x0c)
	float TargetingDelay; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
	struct UParticleSystem* ParticlesOnTarget; // 0x118(0x08)
	struct USoundBase* SoundOnTarget; // 0x120(0x08)
	struct UParticleSystem* ParticlesOnDamage; // 0x128(0x08)
	struct USoundBase* SoundOnDamage; // 0x130(0x08)

	void ReceiveAttackTarget(struct AActor* Target); // Function BP_BurrowAttackComponent.BP_BurrowAttackComponent_C.ReceiveAttackTarget
	void ShowTargetEffects(struct FVector_NetQuantize Location); // Function BP_BurrowAttackComponent.BP_BurrowAttackComponent_C.ShowTargetEffects
	void ShowDamageEffects(struct FVector_NetQuantize Location); // Function BP_BurrowAttackComponent.BP_BurrowAttackComponent_C.ShowDamageEffects
	void ExecuteUbergraph_BP_BurrowAttackComponent(int32_t EntryPoint); // Function BP_BurrowAttackComponent.BP_BurrowAttackComponent_C.ExecuteUbergraph_BP_BurrowAttackComponent
};

