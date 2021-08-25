// BlueprintGeneratedClass ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C
// Size: 0x5ba (Inherited: 0x544)
struct AENE_Spider_Boss_TwinBase_C : AENE_Spider_Boss_Base_C {
	char UnknownData_544[0x4]; // 0x544(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UAudioComponent* TwinBurrow_Cue; // 0x550(0x08)
	struct UBP_Meet_Attack_C* BP_Meet_Attack; // 0x558(0x08)
	struct UBP_BurrowComponent_C* BP_BurrowComponent; // 0x560(0x08)
	struct UArmorHealthDamageComponent* ArmorHealthDamage; // 0x568(0x08)
	struct UAlignEnemyComponent* AlignEnemy; // 0x570(0x08)
	struct UCapsuleComponent* Capsule; // 0x578(0x08)
	struct UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; // 0x580(0x08)
	struct UHealthDamageTracker* HealthDamageTracker; // 0x588(0x08)
	struct UPointLightComponent* Light_BackBody; // 0x590(0x08)
	struct FMulticastInlineDelegate OnArmorDestroyed; // 0x598(0x10)
	struct AENE_Spider_Boss_TwinBase_C* Twin; // 0x5a8(0x08)
	bool WaitingToMeet; // 0x5b0(0x01)
	char UnknownData_5B1[0x3]; // 0x5b1(0x03)
	float MeetHealthChange; // 0x5b4(0x04)
	bool HasMetSecondTime; // 0x5b8(0x01)
	bool HasMetThirdTime; // 0x5b9(0x01)

	void AddDamageDoneToTwinMap(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.AddDamageDoneToTwinMap
	void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.TrySelectDeathAnimation
	bool ShouldExplode(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.ShouldExplode
	float GetEnemyDamageResistance(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.GetEnemyDamageResistance
	void MeetAndGreet(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.MeetAndGreet
	void Grieve(struct FVector GreeveLocation); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.Grieve
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	void MatchHealth(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.MatchHealth
	void ApplyDR(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.ApplyDR
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature
	void RemoveDR(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.RemoveDR
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature
	void GoInvulnerable(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.GoInvulnerable
	void GoVulnerable(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.GoVulnerable
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature
	void PlayAnimatedDeath(int32_t AnimationIndex); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.PlayAnimatedDeath
	void OnRagdoll(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.OnRagdoll
	void MatchHealthToMe(float HealthChange); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.MatchHealthToMe
	void RegrowArmor(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.RegrowArmor
	void ReceiveBeginPlay(); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.ReceiveBeginPlay
	void ExecuteUbergraph_ENE_Spider_Boss_TwinBase(int32_t EntryPoint); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.ExecuteUbergraph_ENE_Spider_Boss_TwinBase
	void OnArmorDestroyed__DelegateSignature(float EnrageDuration); // Function ENE_Spider_Boss_TwinBase.ENE_Spider_Boss_TwinBase_C.OnArmorDestroyed__DelegateSignature
};

