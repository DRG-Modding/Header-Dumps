// BlueprintGeneratedClass ENE_Shark.ENE_Shark_C
// Size: 0x558 (Inherited: 0x4e8)
struct AENE_Shark_C : ASharkEnemy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UCapsuleComponent* ProjectileCollision; // 0x4f0(0x08)
	struct UAudioComponent* Audio; // 0x4f8(0x08)
	struct UParticleSystemComponent* VulnerableParticles; // 0x500(0x08)
	struct UAudioComponent* SharkAttack; // 0x508(0x08)
	struct UAudioComponent* SharkDive; // 0x510(0x08)
	struct UAudioComponent* SharkCircling; // 0x518(0x08)
	struct UOutlineComponent* outline; // 0x520(0x08)
	struct FMulticastInlineDelegate OnDamagedTarget; // 0x528(0x10)
	bool DiedbyCritical; // 0x538(0x01)
	char UnknownData_539[0x7]; // 0x539(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x540(0x10)
	struct UParticleSystemComponent* Dirt particles; // 0x550(0x08)

	void SoundHandling(bool IdleSound, bool CirclingSound, bool AttackSound, bool DiveSound, bool Vulnerable); // Function ENE_Shark.ENE_Shark_C.SoundHandling
	void OnRep_DiedbyCritical(); // Function ENE_Shark.ENE_Shark_C.OnRep_DiedbyCritical
	void TryDamage(struct AActor* self2); // Function ENE_Shark.ENE_Shark_C.TryDamage
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Shark.ENE_Shark_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSigDetailed__DelegateSignature(struct UHealthComponent* HealthComponent, float damageAmount, struct UDamageClass* DamageClass, struct AActor* damageCause, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_Shark.ENE_Shark_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSigDetailed__DelegateSignature
	void OnStateChangedEvent(enum class ESharkEnemyState CurrentState); // Function ENE_Shark.ENE_Shark_C.OnStateChangedEvent
	void OnLandedEvent(); // Function ENE_Shark.ENE_Shark_C.OnLandedEvent
	void ExecuteUbergraph_ENE_Shark(int32_t EntryPoint); // Function ENE_Shark.ENE_Shark_C.ExecuteUbergraph_ENE_Shark
	void OnDamagedTarget__DelegateSignature(); // Function ENE_Shark.ENE_Shark_C.OnDamagedTarget__DelegateSignature
};

