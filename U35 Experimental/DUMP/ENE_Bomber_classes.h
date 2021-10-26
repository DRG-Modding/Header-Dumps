// BlueprintGeneratedClass ENE_Bomber.ENE_Bomber_C
// Size: 0x581 (Inherited: 0x540)
struct AENE_Bomber_C : ABomber {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDashPoints* DashPoints; 
	UPROPERTY(BlueprintReadWrite) UWeakpointGlowComponent* WeakpointGlow; 
	UPROPERTY(BlueprintReadWrite) UArmorHealthDamageComponent* ArmorHealthDamage; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) int32_t Dashes; 
	UPROPERTY(BlueprintReadWrite) float Projectile Velocity Multiplier; 
	UPROPERTY(BlueprintReadWrite) float Initial Projectile Speed; 
	UPROPERTY(BlueprintReadWrite) FVector Projectile Goal Offset; 
	UPROPERTY(BlueprintReadWrite) bool TripleProjectile; 

	UFUNCTION(BlueprintCallable) void InitCharge();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void StartFizzle();
	UFUNCTION(BlueprintCallable) void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
	UFUNCTION(BlueprintCallable) void OnStartDeathPanic();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Bomber(int32_t EntryPoint);
};

