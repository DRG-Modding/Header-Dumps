// BlueprintGeneratedClass ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C
// Size: 0x5e0 (Inherited: 0x544)
struct AENE_Spider_Boss_Heavy_C : AENE_Spider_Boss_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	UCapsuleComponent* Capsule; // 0x550(0x08)
	UMeleeAttackComponent* CarveAttack; // 0x558(0x08)
	UWeakpointGlowComponent* WeakpointGlow_Ass; // 0x560(0x08)
	UCapsuleComponent* Weakspot_C; // 0x568(0x08)
	UCapsuleComponent* Weakspot_L; // 0x570(0x08)
	UCapsuleComponent* Weakspot_R; // 0x578(0x08)
	UProjectileAttackComponent* ProjectileFireball; // 0x580(0x08)
	UMeleeAttackComponent* MeleeAttack1; // 0x588(0x08)
	UDamageComponent* SpecialAttackAoE; // 0x590(0x08)
	UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; // 0x598(0x08)
	UHealthDamageTracker* HealthDamageTracker; // 0x5a0(0x08)
	UDestructibleSubHealthComponent* WeakspotHealth_L; // 0x5a8(0x08)
	USpawnActorWithDebrisPosComponent* SpecialAttackSpawn; // 0x5b0(0x08)
	UDestructibleSubHealthComponent* WeakspotHealth_C; // 0x5b8(0x08)
	UDestructibleSubHealthComponent* WeakspotHealth_R; // 0x5c0(0x08)
	UAlignEnemyComponent* AlignEnemy; // 0x5c8(0x08)
	enum class Spider_Boss_Heavy_State HeavyTankState; // 0x5d0(0x01)
	UNiagaraComponent* WhirlwindParticles; // 0x5d8(0x08)

	bool GetIsTargetable();
	void SetupWeakspotGlow();
	void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation);
	void SetArmorMeshState(bool ArmorOpen);
	bool ShouldExplode();
	void OnRep_HeavyTankState();
	bool IsArmorIntact();
	void SetWeakpointVisibility(bool Visible, UDestructibleSubHealthComponent* Health);
	void ReceiveBeginPlay();
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void BndEvt__DestructibleSubHealth1_K2Node_ComponentBoundEvent_1_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void StartSpecialAttack();
	void ForceVulnerable();
	void BndEvt__DestructibleSubHealth2_K2Node_ComponentBoundEvent_2_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void OnMessageAI(FName TriggerName);
	void OnRagdoll();
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount);
	void GrowWeakpoints();
	void PlayAnimatedDeath(int32_t AnimationIndex);
	void ForceEnraged();
	void OnDeathBase();
	void ExecuteUbergraph_ENE_Spider_Boss_Heavy(int32_t EntryPoint);
};

