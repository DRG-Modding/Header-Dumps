// BlueprintGeneratedClass ENE_InsectSwarm.ENE_InsectSwarm_C
// Size: 0x3e0 (Inherited: 0x3a0)
struct AENE_InsectSwarm_C : AInsectSwarmEnemy {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStatusEffectTriggerComponent* StatusEffectTrigger1; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* DamageReceiveCollider; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* DamageInflictCollider; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_InsectSwarm01_Death; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_InsectSwarm; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_InsectSwarm(int32_t EntryPoint);
};

