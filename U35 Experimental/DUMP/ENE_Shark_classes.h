// BlueprintGeneratedClass ENE_Shark.ENE_Shark_C
// Size: 0x558 (Inherited: 0x4e8)
struct AENE_Shark_C : ASharkEnemy {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* ProjectileCollision; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* VulnerableParticles; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* SharkAttack; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* SharkDive; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* SharkCircling; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnDamagedTarget; 
	UPROPERTY(BlueprintReadWrite) bool DiedbyCritical; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Dirt particles; 

	UFUNCTION(BlueprintCallable) void SoundHandling(bool IdleSound, bool CirclingSound, bool AttackSound, bool DiveSound, bool Vulnerable);
	UFUNCTION(BlueprintCallable) void OnRep_DiedbyCritical();
	UFUNCTION(BlueprintCallable) void TryDamage(AActor* self2);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void OnStateChangedEvent(enum class ESharkEnemyState CurrentState);
	UFUNCTION(BlueprintCallable) void OnLandedEvent();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Shark(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnDamagedTarget__DelegateSignature();
};

