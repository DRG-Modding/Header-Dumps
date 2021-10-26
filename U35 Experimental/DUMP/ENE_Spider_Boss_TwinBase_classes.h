// BlueprintGeneratedClass ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C
// Size: 0x5ba (Inherited: 0x544)
struct AENE_Spider_Boss_TwinBase_C : AENE_Spider_Boss_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* TwinBurrow_Cue; 
	UPROPERTY(BlueprintReadWrite) UBP_Meet_Attack_C* BP_Meet_Attack; 
	UPROPERTY(BlueprintReadWrite) UBP_BurrowComponent_C* BP_BurrowComponent; 
	UPROPERTY(BlueprintReadWrite) UArmorHealthDamageComponent* ArmorHealthDamage; 
	UPROPERTY(BlueprintReadWrite) UAlignEnemyComponent* AlignEnemy; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; 
	UPROPERTY(BlueprintReadWrite) UHealthDamageTracker* HealthDamageTracker; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_BackBody; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnArmorDestroyed; 
	UPROPERTY(BlueprintReadWrite) AENE_Spider_Boss_TwinBase_C* Twin; 
	UPROPERTY(BlueprintReadWrite) bool WaitingToMeet; 
	UPROPERTY(BlueprintReadWrite) float MeetHealthChange; 
	UPROPERTY(BlueprintReadWrite) bool HasMetSecondTime; 
	UPROPERTY(BlueprintReadWrite) bool HasMetThirdTime; 

	UFUNCTION(BlueprintCallable) void AddDamageDoneToTwinMap();
	UFUNCTION(BlueprintCallable) void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation);
	UFUNCTION(BlueprintCallable) bool ShouldExplode();
	UFUNCTION(BlueprintCallable) float GetEnemyDamageResistance();
	UFUNCTION(BlueprintCallable) void MeetAndGreet();
	UFUNCTION(BlueprintCallable) void Grieve(FVector GreeveLocation);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void MatchHealth();
	UFUNCTION(BlueprintCallable) void ApplyDR();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void RemoveDR();
	UFUNCTION(BlueprintCallable) void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature();
	UFUNCTION(BlueprintCallable) void GoInvulnerable();
	UFUNCTION(BlueprintCallable) void GoVulnerable();
	UFUNCTION(BlueprintCallable) void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
	UFUNCTION(BlueprintCallable) void PlayAnimatedDeath(int32_t AnimationIndex);
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void MatchHealthToMe(float HealthChange);
	UFUNCTION(BlueprintCallable) void RegrowArmor();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Boss_TwinBase(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};

