// BlueprintGeneratedClass ENE_Spider_Buffer.ENE_Spider_Buffer_C
// Size: 0x510 (Inherited: 0x4b4)
struct AENE_Spider_Buffer_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* BuffingLoop; 
	UPROPERTY(BlueprintReadWrite) UEnemyBufferComponent* EnemyBuffer; 
	UPROPERTY(BlueprintReadWrite) USimpleArmorDamageComponent* SimpleArmorDamage; 
	UPROPERTY(BlueprintReadWrite) float Emission_Time_7C918F0146C07DC2E610CBA4AA96FFB2; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Emission__Direction_7C918F0146C07DC2E610CBA4AA96FFB2; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Emission; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic Material; 
	UPROPERTY(BlueprintReadWrite) float Emission Multiplier; 
	UPROPERTY(BlueprintReadWrite) float Emission Flash; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Emission__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Emission__UpdateFunc();
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void BndEvt__EnemyBuffer_K2Node_ComponentBoundEvent_1_BuffingChangedDelegate__DelegateSignature(bool isBuffing);
	UFUNCTION(BlueprintCallable) void HandleWeapointDeath(UFSDPhysicalMaterial* Material, UDamageClass* DamageClass);
	UFUNCTION(BlueprintCallable) void Spawn Headshot Gibs(enum class Spider_DeathType DeathType);
	UFUNCTION(BlueprintCallable) void TriggerWeakpointGlow();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Buffer(int32_t EntryPoint);
};

