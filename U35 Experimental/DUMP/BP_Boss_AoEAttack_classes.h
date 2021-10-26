// BlueprintGeneratedClass BP_Boss_AoEAttack.BP_Boss_AoEAttack_C
// Size: 0x140 (Inherited: 0x128)
struct UBP_Boss_AoEAttack_C : USpecialDamageAttackComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) TArray<UAnimMontage*> SPMontages; 

	UFUNCTION(BlueprintCallable) UAnimMontage* SelectMontage();
	UFUNCTION(BlueprintCallable) void Receive_OnPerformAttack();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Boss_AoEAttack(int32_t EntryPoint);
};

