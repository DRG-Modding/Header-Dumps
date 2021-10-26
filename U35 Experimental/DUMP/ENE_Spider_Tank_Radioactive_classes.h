// BlueprintGeneratedClass ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C
// Size: 0x5b5 (Inherited: 0x558)
struct AENE_Spider_Tank_Radioactive_C : AENE_Spider_Tank_Generic_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBP_ConeAttackBase_C* RadiationAttack; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* RadiationSphere; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* RadiationSound; 
	UPROPERTY(BlueprintReadWrite) float Radiation_Intensity_491FF937435DBE6C1B8926899616FADE; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Radiation__Direction_491FF937435DBE6C1B8926899616FADE; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Radiation; 
	UPROPERTY(BlueprintReadWrite) float BaseLightIntensity; 
	UPROPERTY(BlueprintReadWrite) FName ScalarParam_Emissive; 
	UPROPERTY(BlueprintReadWrite) float BaseEmissive; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicGlowbuttMat; 
	UPROPERTY(BlueprintReadWrite) float BaseLightRadius; 
	UPROPERTY(BlueprintReadWrite) bool RadiationAttackActive; 

	UFUNCTION(BlueprintCallable) void OnRep_RadiationAttackActive();
	UFUNCTION(BlueprintCallable) void Radiation__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Radiation__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void DoRadiationGlow();
	UFUNCTION(BlueprintCallable) void CancelSpecialAttack();
	UFUNCTION(BlueprintCallable) void CancelRadionGlow();
	UFUNCTION(BlueprintCallable) void BndEvt__RadiationAttack_K2Node_ComponentBoundEvent_0_NameDelegate__DelegateSignature(FName nameValue);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void SpecialAttackFlow_2();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Tank_Radioactive(int32_t EntryPoint);
};

