// BlueprintGeneratedClass ENE_Jelly_Swarmer.ENE_Jelly_Swarmer_C
// Size: 0x3e0 (Inherited: 0x398)
struct AENE_Jelly_Swarmer_C : AEnemyDeepPathfinderCharacter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPawnAlertComponent* PawnAlert; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Trail; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* JellySwarmerIdle; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UPawnSensingComponent* PawnSensing; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* Deathpaticles; 

	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Jelly_Swarmer(int32_t EntryPoint);
};

