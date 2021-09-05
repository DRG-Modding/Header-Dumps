// BlueprintGeneratedClass ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C
// Size: 0x6b0 (Inherited: 0x544)
struct AENE_Spider_Tank_Boss_C : AENE_Spider_Boss_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x550(0x08)
	UCapsuleComponent* Capsule; // 0x558(0x08)
	UMeleeAttackComponent* CarveAttack; // 0x560(0x08)
	UBP_Boss_AoEAttack_C* SlamAttackk; // 0x568(0x08)
	UMeleeAttackComponent* MeleeAttack; // 0x570(0x08)
	UProjectileAttackComponent* EggProjectile; // 0x578(0x08)
	UProjectileAttackComponent* fireball; // 0x580(0x08)
	UAlignEnemyComponent* AlignEnemy; // 0x588(0x08)
	UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; // 0x590(0x08)
	UHealthDamageTracker* HealthDamageTracker; // 0x598(0x08)
	UDestructibleSubHealthComponent* DestructibleSubHealth; // 0x5a0(0x08)
	UStaticMeshComponent* Armor_Back_TankBoss; // 0x5a8(0x08)
	UPointLightComponent* Light_BackBody; // 0x5b0(0x08)
	float Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F; // 0x5b8(0x04)
	enum class ETimelineDirection Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F; // 0x5bc(0x01)
	UTimelineComponent* Butt FadeOut; // 0x5c0(0x08)
	float Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF; // 0x5c8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF; // 0x5cc(0x01)
	UTimelineComponent* Timeline_1; // 0x5d0(0x08)
	float LightIntensityCache; // 0x5d8(0x04)
	bool TankArmorIntact; // 0x5dc(0x01)
	UMaterialInstanceDynamic* ArmorBackDynamicMaterial; // 0x5e0(0x08)
	float HitGlow; // 0x5e8(0x04)
	FMulticastInlineDelegate OnArmorDestroyed; // 0x5f0(0x10)
	bool FaceTargetWhenStationary; // 0x600(0x01)
	float BaseGlowFrequency; // 0x604(0x04)
	float BaseGlowStrength; // 0x608(0x04)
	UFSDAchievement* DreadnaughtAchievement; // 0x610(0x08)
	TMap<APlayerCharacter*, float> PlayerToDamageMap; // 0x618(0x50)
	UFSDAchievement* DesignatedDecoyAchievement; // 0x668(0x08)
	UFSDAchievement* PestControlAchievement; // 0x670(0x08)
	UFSDAchievement* JustAnotherBugHuntAchievement; // 0x678(0x08)
	UMaterialInstanceDynamic* Dynamic Material; // 0x680(0x08)
	FLinearColor Butt Initial Color; // 0x688(0x10)
	FLinearColor Butt Final Color; // 0x698(0x10)
	FTimerHandle RegrowShieldTimer; // 0x6a8(0x08)

	void CheckIfOnlyOnePlayerAlive();
	void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation);
	bool ShouldExplode();
	void Set achievement from server to all(UFSDAchievement* achievement to set, float Progress);
	void CheckForPlayersAliveWithNoAmmo();
	void OnRep_FaceTargetWhenStationary();
	float GetEnemyDamageResistance();
	void OnRep_TankArmorIntact();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Butt FadeOut__FinishedFunc();
	void Butt FadeOut__UpdateFunc();
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	void OnRagdoll();
	void RegrowShield();
	void RegrowShieldFX();
	void PlayAnimatedDeath(int32_t AnimationIndex);
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount);
	void OnDeathBase();
	void CheckForLastPlayerStanding();
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void PlayEnragedAnimation();
	void WaitForHit();
	void ReceiveBeginPlay();
	void FractureArmor(FVector HitPoint);
	void ExecuteUbergraph_ENE_Spider_Tank_Boss(int32_t EntryPoint);
	void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};

