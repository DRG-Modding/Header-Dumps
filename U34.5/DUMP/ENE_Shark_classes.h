// BlueprintGeneratedClass ENE_Shark.ENE_Shark_C
// Size: 0x558 (Inherited: 0x4e8)
struct AENE_Shark_C : ASharkEnemy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	UCapsuleComponent* ProjectileCollision; // 0x4f0(0x08)
	UAudioComponent* Audio; // 0x4f8(0x08)
	UParticleSystemComponent* VulnerableParticles; // 0x500(0x08)
	UAudioComponent* SharkAttack; // 0x508(0x08)
	UAudioComponent* SharkDive; // 0x510(0x08)
	UAudioComponent* SharkCircling; // 0x518(0x08)
	UOutlineComponent* outline; // 0x520(0x08)
	FMulticastInlineDelegate OnDamagedTarget; // 0x528(0x10)
	bool DiedbyCritical; // 0x538(0x01)
	TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x540(0x10)
	UParticleSystemComponent* Dirt particles; // 0x550(0x08)

	void SoundHandling(bool IdleSound, bool CirclingSound, bool AttackSound, bool DiveSound, bool Vulnerable);
	void OnRep_DiedbyCritical();
	void TryDamage(AActor* self2);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void OnStateChangedEvent(enum class ESharkEnemyState CurrentState);
	void OnLandedEvent();
	void ExecuteUbergraph_ENE_Shark(int32_t EntryPoint);
	void OnDamagedTarget__DelegateSignature();
};

