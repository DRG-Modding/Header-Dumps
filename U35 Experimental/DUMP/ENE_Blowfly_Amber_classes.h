// BlueprintGeneratedClass ENE_Blowfly_Amber.ENE_Blowfly_Amber_C
// Size: 0x4e0 (Inherited: 0x4b0)
struct AENE_Blowfly_Amber_C : AENE_Mactera_Shooter_Normal_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Infestation02; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Infestation01; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) AGameEvent* GameEvent; 

	UFUNCTION(BlueprintCallable) bool AddEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) bool AdvanceOneObjective();
	UFUNCTION(BlueprintCallable) bool SetupEvent(AGameEvent* GameEvent);
	UFUNCTION(BlueprintCallable) void OnEventOpened();
	UFUNCTION(BlueprintCallable) void OnEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) void OnEventTriggered();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnEventFinished(bool eventSuccess);
	UFUNCTION(BlueprintCallable) void StartFizzle();
	UFUNCTION(BlueprintCallable) void BP_FreezeImpact();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Blowfly_Amber(int32_t EntryPoint);
};

