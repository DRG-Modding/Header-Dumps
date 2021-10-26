// BlueprintGeneratedClass ENE_Spider_Grunt_Attacker.ENE_Spider_Grunt_Attacker_C
// Size: 0x4e0 (Inherited: 0x4c8)
struct AENE_Spider_Grunt_Attacker_C : AENE_Spider_Grunt_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack; 
	UPROPERTY(BlueprintReadWrite) USimpleArmorDamageComponent* SimpleArmorDamage; 

	UFUNCTION(BlueprintCallable) void MakeElite();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Grunt_Attacker(int32_t EntryPoint);
};

