// BlueprintGeneratedClass ENE_Mactera_Shooter_HeavyVeteran.ENE_Mactera_Shooter_HeavyVeteran_C
// Size: 0x4b9 (Inherited: 0x4a0)
struct AENE_Mactera_Shooter_HeavyVeteran_C : AENE_Mactera_Shooter_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBP_Mactera_Heavy_ProjectileAttack_C* Mactera_Heavy_ProjectileAttack; 
	UPROPERTY(BlueprintReadWrite) UArmorHealthDamageComponent* ArmorHealthDamage; 
	UPROPERTY(BlueprintReadWrite) bool DoEliteExplosion; 

	UFUNCTION(BlueprintCallable) void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
	UFUNCTION(BlueprintCallable) void MakeElite();
	UFUNCTION(BlueprintCallable) void Death_Normal();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Mactera_Shooter_HeavyVeteran(int32_t EntryPoint);
};

