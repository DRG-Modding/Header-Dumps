// BlueprintGeneratedClass ENE_Spider_Grunt_Guard.ENE_Spider_Grunt_Guard_C
// Size: 0x4e8 (Inherited: 0x4c8)
struct AENE_Spider_Grunt_Guard_C : AENE_Spider_Grunt_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack; 
	UPROPERTY(BlueprintReadWrite) UArmorHealthDamageComponent* ArmorHealthDamage; 
	UPROPERTY(BlueprintReadWrite) UInDangerComponent* InDanger; 

	UFUNCTION(BlueprintCallable) void PlayGuardAnimation(USpiderAnimInstance* AnimInstance, float Duration, float outDuration);
	UFUNCTION(BlueprintCallable) void BndEvt__InDanger_K2Node_ComponentBoundEvent_0_IsInDangerSig__DelegateSignature();
	UFUNCTION(BlueprintCallable) void MakeElite();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Grunt_Guard(int32_t EntryPoint);
};

