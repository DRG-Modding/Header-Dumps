// BlueprintGeneratedClass ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C
// Size: 0x5ba (Inherited: 0x544)
struct AENE_Spider_Boss_TwinBase_C : AENE_Spider_Boss_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	UAudioComponent* TwinBurrow_Cue; // 0x550(0x08)
	UBP_Meet_Attack_C* BP_Meet_Attack; // 0x558(0x08)
	UBP_BurrowComponent_C* BP_BurrowComponent; // 0x560(0x08)
	UArmorHealthDamageComponent* ArmorHealthDamage; // 0x568(0x08)
	UAlignEnemyComponent* AlignEnemy; // 0x570(0x08)
	UCapsuleComponent* Capsule; // 0x578(0x08)
	UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; // 0x580(0x08)
	UHealthDamageTracker* HealthDamageTracker; // 0x588(0x08)
	UPointLightComponent* Light_BackBody; // 0x590(0x08)
	FMulticastInlineDelegate OnArmorDestroyed; // 0x598(0x10)
	AENE_Spider_Boss_TwinBase_C* Twin; // 0x5a8(0x08)
	bool WaitingToMeet; // 0x5b0(0x01)
	float MeetHealthChange; // 0x5b4(0x04)
	bool HasMetSecondTime; // 0x5b8(0x01)
	bool HasMetThirdTime; // 0x5b9(0x01)

	void AddDamageDoneToTwinMap();
	void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation);
	bool ShouldExplode();
	float GetEnemyDamageResistance();
	void MeetAndGreet();
	void Grieve(FVector GreeveLocation);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void MatchHealth();
	void ApplyDR();
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount);
	void RemoveDR();
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature();
	void GoInvulnerable();
	void GoVulnerable();
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
	void PlayAnimatedDeath(int32_t AnimationIndex);
	void OnRagdoll();
	void MatchHealthToMe(float HealthChange);
	void RegrowArmor();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ENE_Spider_Boss_TwinBase(int32_t EntryPoint);
	void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};

