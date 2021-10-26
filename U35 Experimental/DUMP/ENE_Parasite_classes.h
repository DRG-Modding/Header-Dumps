// BlueprintGeneratedClass ENE_Parasite.ENE_Parasite_C
// Size: 0x3c0 (Inherited: 0x390)
struct AENE_Parasite_C : AParasiteEnemy {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWeakpointGlowComponent* WeakpointGlow; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic Material; 
	UPROPERTY(BlueprintReadWrite) float Emission Multiplier; 
	UPROPERTY(BlueprintReadWrite) float Emission Flash; 
	UPROPERTY(BlueprintReadWrite) float Displacement Intensity; 
	UPROPERTY(BlueprintReadWrite) float Displacement Burst; 

	UFUNCTION(BlueprintCallable) void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Parasite(int32_t EntryPoint);
};

