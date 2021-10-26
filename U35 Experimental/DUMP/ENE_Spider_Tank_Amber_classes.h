// BlueprintGeneratedClass ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C
// Size: 0x590 (Inherited: 0x53c)
struct AENE_Spider_Tank_Amber_C : AENE_Spider_Tank_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* BiteAttack; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* StabAttack; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Infestation03; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Infestation02; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Infestation01; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) AGameEvent* Event; 

	UFUNCTION(BlueprintCallable) bool AddEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) bool AdvanceOneObjective();
	UFUNCTION(BlueprintCallable) bool SetupEvent(AGameEvent* GameEvent);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void OnEventOpened();
	UFUNCTION(BlueprintCallable) void OnEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) void OnEventTriggered();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnEventFinished(bool eventSuccess);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Tank_Amber(int32_t EntryPoint);
};

