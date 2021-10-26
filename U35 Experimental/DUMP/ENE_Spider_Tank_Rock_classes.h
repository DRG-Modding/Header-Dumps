// BlueprintGeneratedClass ENE_Spider_Tank_Rock.ENE_Spider_Tank_Rock_C
// Size: 0x558 (Inherited: 0x53c)
struct AENE_Spider_Tank_Rock_C : AENE_Spider_Tank_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* BiteAttack; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* StabAttack; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void Play Body Death Effects();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Tank_Rock(int32_t EntryPoint);
};

