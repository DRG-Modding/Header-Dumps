// BlueprintGeneratedClass ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C
// Size: 0x518 (Inherited: 0x4d8)
struct AENE_Spider_Amber_Shooter_C : AENE_Spider_Shooter_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Infestation03; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Infestation02; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Infestation01; 
	UPROPERTY(BlueprintReadWrite) AGameEvent* Event; 

	UFUNCTION(BlueprintCallable) bool AddEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) bool AdvanceOneObjective();
	UFUNCTION(BlueprintCallable) bool SetupEvent(AGameEvent* GameEvent);
	UFUNCTION(BlueprintCallable) void OnEventOpened();
	UFUNCTION(BlueprintCallable) void OnEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) void OnEventTriggered();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnEventFinished(bool eventSuccess);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Amber_Shooter(int32_t EntryPoint);
};

