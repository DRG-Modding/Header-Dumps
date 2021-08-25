// BlueprintGeneratedClass ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C
// Size: 0x6b0 (Inherited: 0x544)
struct AENE_Spider_Tank_Boss_C : AENE_Spider_Boss_Base_C {
	char UnknownData_544[0x4]; // 0x544(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow; // 0x550(0x08)
	struct UCapsuleComponent* Capsule; // 0x558(0x08)
	struct UMeleeAttackComponent* CarveAttack; // 0x560(0x08)
	struct UBP_Boss_AoEAttack_C* SlamAttackk; // 0x568(0x08)
	struct UMeleeAttackComponent* MeleeAttack; // 0x570(0x08)
	struct UProjectileAttackComponent* EggProjectile; // 0x578(0x08)
	struct UProjectileAttackComponent* fireball; // 0x580(0x08)
	struct UAlignEnemyComponent* AlignEnemy; // 0x588(0x08)
	struct UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; // 0x590(0x08)
	struct UHealthDamageTracker* HealthDamageTracker; // 0x598(0x08)
	struct UDestructibleSubHealthComponent* DestructibleSubHealth; // 0x5a0(0x08)
	struct UStaticMeshComponent* Armor_Back_TankBoss; // 0x5a8(0x08)
	struct UPointLightComponent* Light_BackBody; // 0x5b0(0x08)
	float Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F; // 0x5b8(0x04)
	char Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F; // 0x5bc(0x01)
	char UnknownData_5BD[0x3]; // 0x5bd(0x03)
	struct UTimelineComponent* Butt FadeOut; // 0x5c0(0x08)
	float Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF; // 0x5c8(0x04)
	char Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF; // 0x5cc(0x01)
	char UnknownData_5CD[0x3]; // 0x5cd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x5d0(0x08)
	float LightIntensityCache; // 0x5d8(0x04)
	bool TankArmorIntact; // 0x5dc(0x01)
	char UnknownData_5DD[0x3]; // 0x5dd(0x03)
	struct UMaterialInstanceDynamic* ArmorBackDynamicMaterial; // 0x5e0(0x08)
	float HitGlow; // 0x5e8(0x04)
	char UnknownData_5EC[0x4]; // 0x5ec(0x04)
	struct FMulticastInlineDelegate OnArmorDestroyed; // 0x5f0(0x10)
	bool FaceTargetWhenStationary; // 0x600(0x01)
	char UnknownData_601[0x3]; // 0x601(0x03)
	float BaseGlowFrequency; // 0x604(0x04)
	float BaseGlowStrength; // 0x608(0x04)
	char UnknownData_60C[0x4]; // 0x60c(0x04)
	struct UFSDAchievement* DreadnaughtAchievement; // 0x610(0x08)
	struct TMap<struct APlayerCharacter*, float> PlayerToDamageMap; // 0x618(0x50)
	struct UFSDAchievement* DesignatedDecoyAchievement; // 0x668(0x08)
	struct UFSDAchievement* PestControlAchievement; // 0x670(0x08)
	struct UFSDAchievement* JustAnotherBugHuntAchievement; // 0x678(0x08)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x680(0x08)
	struct FLinearColor Butt Initial Color; // 0x688(0x10)
	struct FLinearColor Butt Final Color; // 0x698(0x10)
	struct FTimerHandle RegrowShieldTimer; // 0x6a8(0x08)

	void CheckIfOnlyOnePlayerAlive(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.CheckIfOnlyOnePlayerAlive
	void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.TrySelectDeathAnimation
	bool ShouldExplode(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.ShouldExplode
	void Set achievement from server to all(struct UFSDAchievement* achievement to set, float Progress); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.Set achievement from server to all
	void CheckForPlayersAliveWithNoAmmo(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.CheckForPlayersAliveWithNoAmmo
	void OnRep_FaceTargetWhenStationary(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnRep_FaceTargetWhenStationary
	float GetEnemyDamageResistance(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.GetEnemyDamageResistance
	void OnRep_TankArmorIntact(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnRep_TankArmorIntact
	void UserConstructionScript(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.UserConstructionScript
	void Timeline_0__FinishedFunc(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.Timeline_0__UpdateFunc
	void Butt FadeOut__FinishedFunc(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.Butt FadeOut__FinishedFunc
	void Butt FadeOut__UpdateFunc(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.Butt FadeOut__UpdateFunc
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(struct UDestructibleSubHealthComponent* subHealth); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	void OnRagdoll(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnRagdoll
	void RegrowShield(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.RegrowShield
	void RegrowShieldFX(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.RegrowShieldFX
	void PlayAnimatedDeath(int32_t AnimationIndex); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.PlayAnimatedDeath
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature
	void OnDeathBase(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnDeathBase
	void CheckForLastPlayerStanding(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.CheckForLastPlayerStanding
	void OnFrozen(struct AActor* Source); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnFrozen
	void OnUnFrozen(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnUnFrozen
	void PlayEnragedAnimation(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.PlayEnragedAnimation
	void WaitForHit(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.WaitForHit
	void ReceiveBeginPlay(); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.ReceiveBeginPlay
	void FractureArmor(struct FVector HitPoint); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.FractureArmor
	void ExecuteUbergraph_ENE_Spider_Tank_Boss(int32_t EntryPoint); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.ExecuteUbergraph_ENE_Spider_Tank_Boss
	void OnArmorDestroyed__DelegateSignature(float EnrageDuration); // Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnArmorDestroyed__DelegateSignature
};

