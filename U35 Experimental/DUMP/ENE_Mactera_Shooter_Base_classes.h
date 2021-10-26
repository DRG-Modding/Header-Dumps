// BlueprintGeneratedClass ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C
// Size: 0x4a0 (Inherited: 0x478)
struct AENE_Mactera_Shooter_Base_C : AAFlyingBug {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDashPoints* DashPoints; 
	UPROPERTY(BlueprintReadWrite) UWeakpointGlowComponent* WeakpointGlowComponent; 
	UPROPERTY(BlueprintReadWrite) enum class MacteraDeathTypes DeathType; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 

	UFUNCTION(BlueprintCallable) void Death_Explode();
	UFUNCTION(BlueprintCallable) bool ShouldExplode();
	UFUNCTION(BlueprintCallable) void Death_Normal();
	UFUNCTION(BlueprintCallable) void Death_Weakpoint();
	UFUNCTION(BlueprintCallable) void OnRep_DeathType();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void StartFizzle();
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void Receive_Alerted();
	UFUNCTION(BlueprintCallable) void All_PlayAlertedSound();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void MakeElite();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Mactera_Shooter_Base(int32_t EntryPoint);
};

