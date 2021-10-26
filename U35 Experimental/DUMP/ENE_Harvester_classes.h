// BlueprintGeneratedClass ENE_Harvester.ENE_Harvester_C
// Size: 0x3d8 (Inherited: 0x378)
struct AENE_Harvester_C : ADeepPathfinderCharacter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* PlayerRideCollision; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Harvesting_A; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* DeathParticle; 
	UPROPERTY(BlueprintReadWrite) float PlayerBeginRideTime; 
	UPROPERTY(BlueprintReadWrite) int32_t EnemiesKilled; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* FarmerAchievement; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* CarPoolAchievement; 

	UFUNCTION(BlueprintCallable) void OnRep_Moving();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void OnDamagedEnemy(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Harvester(int32_t EntryPoint);
};

