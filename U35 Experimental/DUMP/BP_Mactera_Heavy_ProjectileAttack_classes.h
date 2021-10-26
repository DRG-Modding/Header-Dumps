// BlueprintGeneratedClass BP_Mactera_Heavy_ProjectileAttack.BP_Mactera_Heavy_ProjectileAttack_C
// Size: 0x191 (Inherited: 0x180)
struct UBP_Mactera_Heavy_ProjectileAttack_C : UProjectileAttackComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAnimMontage* BrokenAmorMontage; 
	UPROPERTY(BlueprintReadWrite) bool ArmorBroken; 

	UFUNCTION(BlueprintCallable) void SetArmorBroken(bool Broken);
	UFUNCTION(BlueprintCallable) UAnimMontage* SelectMontage();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Mactera_Heavy_ProjectileAttack(int32_t EntryPoint);
};

