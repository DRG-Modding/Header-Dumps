// BlueprintGeneratedClass ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C
// Size: 0x5e0 (Inherited: 0x544)
struct AENE_Spider_Boss_Heavy_C : AENE_Spider_Boss_Base_C {
	char UnknownData_544[0x4]; // 0x544(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UCapsuleComponent* Capsule; // 0x550(0x08)
	struct UMeleeAttackComponent* CarveAttack; // 0x558(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow_Ass; // 0x560(0x08)
	struct UCapsuleComponent* Weakspot_C; // 0x568(0x08)
	struct UCapsuleComponent* Weakspot_L; // 0x570(0x08)
	struct UCapsuleComponent* Weakspot_R; // 0x578(0x08)
	struct UProjectileAttackComponent* ProjectileFireball; // 0x580(0x08)
	struct UMeleeAttackComponent* MeleeAttack1; // 0x588(0x08)
	struct UDamageComponent* SpecialAttackAoE; // 0x590(0x08)
	struct UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; // 0x598(0x08)
	struct UHealthDamageTracker* HealthDamageTracker; // 0x5a0(0x08)
	struct UDestructibleSubHealthComponent* WeakspotHealth_L; // 0x5a8(0x08)
	struct USpawnActorWithDebrisPosComponent* SpecialAttackSpawn; // 0x5b0(0x08)
	struct UDestructibleSubHealthComponent* WeakspotHealth_C; // 0x5b8(0x08)
	struct UDestructibleSubHealthComponent* WeakspotHealth_R; // 0x5c0(0x08)
	struct UAlignEnemyComponent* AlignEnemy; // 0x5c8(0x08)
	char HeavyTankState; // 0x5d0(0x01)
	char UnknownData_5D1[0x7]; // 0x5d1(0x07)
	struct UNiagaraComponent* WhirlwindParticles; // 0x5d8(0x08)

	bool GetIsTargetable(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.GetIsTargetable
	void SetupWeakspotGlow(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.SetupWeakspotGlow
	void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.TrySelectDeathAnimation
	void SetArmorMeshState(bool ArmorOpen); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.SetArmorMeshState
	bool ShouldExplode(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.ShouldExplode
	void OnRep_HeavyTankState(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.OnRep_HeavyTankState
	bool IsArmorIntact(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.IsArmorIntact
	void SetWeakpointVisibility(bool Visible, struct UDestructibleSubHealthComponent* Health); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.SetWeakpointVisibility
	void ReceiveBeginPlay(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.ReceiveBeginPlay
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(struct UDestructibleSubHealthComponent* subHealth); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature
	void BndEvt__DestructibleSubHealth1_K2Node_ComponentBoundEvent_1_SubHealthDestroyed__DelegateSignature(struct UDestructibleSubHealthComponent* subHealth); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.BndEvt__DestructibleSubHealth1_K2Node_ComponentBoundEvent_1_SubHealthDestroyed__DelegateSignature
	void StartSpecialAttack(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.StartSpecialAttack
	void ForceVulnerable(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.ForceVulnerable
	void BndEvt__DestructibleSubHealth2_K2Node_ComponentBoundEvent_2_SubHealthDestroyed__DelegateSignature(struct UDestructibleSubHealthComponent* subHealth); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.BndEvt__DestructibleSubHealth2_K2Node_ComponentBoundEvent_2_SubHealthDestroyed__DelegateSignature
	void OnMessageAI(struct FName TriggerName); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.OnMessageAI
	void OnRagdoll(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.OnRagdoll
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature
	void GrowWeakpoints(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.GrowWeakpoints
	void PlayAnimatedDeath(int32_t AnimationIndex); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.PlayAnimatedDeath
	void ForceEnraged(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.ForceEnraged
	void OnDeathBase(); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.OnDeathBase
	void ExecuteUbergraph_ENE_Spider_Boss_Heavy(int32_t EntryPoint); // Function ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C.ExecuteUbergraph_ENE_Spider_Boss_Heavy
};

