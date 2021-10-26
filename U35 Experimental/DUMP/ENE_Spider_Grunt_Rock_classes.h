// BlueprintGeneratedClass ENE_Spider_Grunt_Rock.ENE_Spider_Grunt_Rock_C
// Size: 0x4e0 (Inherited: 0x4d8)
struct AENE_Spider_Grunt_Rock_C : AENE_Spider_Grunt_Normal_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void Play Body Death Effects();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Grunt_Rock(int32_t EntryPoint);
};

