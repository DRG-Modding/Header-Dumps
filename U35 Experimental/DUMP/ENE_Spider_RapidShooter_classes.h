// BlueprintGeneratedClass ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C
// Size: 0x4f0 (Inherited: 0x4b4)
struct AENE_Spider_RapidShooter_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* ProjectileAttack; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UArmorHealthDamageComponent* ArmorHealthDamage; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UBP_BurrowComponent_C* BP_BurrowComponent; 
	UPROPERTY(BlueprintReadWrite) AActor* Target; 

	UFUNCTION(BlueprintCallable) void OnRep_Target();
	UFUNCTION(BlueprintCallable) void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_RapidShooter(int32_t EntryPoint);
};

