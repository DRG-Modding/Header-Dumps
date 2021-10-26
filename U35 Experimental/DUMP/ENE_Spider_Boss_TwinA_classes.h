// BlueprintGeneratedClass ENE_Spider_Boss_TwinA.ENE_Spider_Boss_TwinA_C
// Size: 0x5e8 (Inherited: 0x5ba)
struct AENE_Spider_Boss_TwinA_C : AENE_Spider_Boss_TwinBase_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* Projectile_MinesBarrage; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* Projectile_Mines; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* Projectile_Fireball; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__Projectile_MinesBarrage_K2Node_ComponentBoundEvent_1_ProjectileAttackDelegate__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Boss_TwinA(int32_t EntryPoint);
};

