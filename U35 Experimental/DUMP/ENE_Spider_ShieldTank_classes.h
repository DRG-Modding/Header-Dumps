// BlueprintGeneratedClass ENE_Spider_ShieldTank.ENE_Spider_ShieldTank_C
// Size: 0x580 (Inherited: 0x53c)
struct AENE_Spider_ShieldTank_C : AENE_Spider_Tank_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* CarveAttack; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* GroundSlam; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* TremorParticles; 
	UPROPERTY(BlueprintReadWrite) UTremorAttackComponent* TremorAttack; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UAlignEnemyComponent* AlignEnemy; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void BndEvt__GroundSlamDamage_K2Node_ComponentBoundEvent_0_OnEnemyDamagedDelegate__DelegateSignature(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void All_PlayImpactSound(AActor* Actor);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_ShieldTank(int32_t EntryPoint);
};

