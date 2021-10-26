// BlueprintGeneratedClass ENE_Mactera_TripleShooter.ENE_Mactera_TripleShooter_C
// Size: 0x4b0 (Inherited: 0x4a0)
struct AENE_Mactera_TripleShooter_C : AENE_Mactera_Shooter_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* ProjectileAttack; 

	UFUNCTION(BlueprintCallable) void MakeElite();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Mactera_TripleShooter(int32_t EntryPoint);
};

