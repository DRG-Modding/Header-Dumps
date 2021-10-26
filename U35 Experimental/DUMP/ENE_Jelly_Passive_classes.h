// BlueprintGeneratedClass ENE_Jelly_Passive.ENE_Jelly_Passive_C
// Size: 0x3b0 (Inherited: 0x378)
struct AENE_Jelly_Passive_C : ADeepPathfinderCharacter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UPawnStatsComponent* PawnStats; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* DeathParticle; 
	UPROPERTY(BlueprintReadWrite) USoundBase* DeathScream; 

	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnDeath();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Jelly_Passive(int32_t EntryPoint);
};

