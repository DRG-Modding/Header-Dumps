#ifndef UE4SS_SDK_ENE_Spider_Tank_Boss_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Boss_HPP

class AENE_Spider_Tank_Boss_C : public AENE_Spider_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UCapsuleComponent* Capsule;
    class UMeleeAttackComponent* CarveAttack;
    class UBP_Boss_AoEAttack_C* SlamAttackk;
    class UMeleeAttackComponent* MeleeAttack;
    class UProjectileAttackComponent* EggProjectile;
    class UProjectileAttackComponent* fireball;
    class UAlignEnemyComponent* AlignEnemy;
    class UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator;
    class UHealthDamageTracker* HealthDamageTracker;
    class UDestructibleSubHealthComponent* DestructibleSubHealth;
    class UStaticMeshComponent* Armor_Back_TankBoss;
    class UPointLightComponent* Light_BackBody;
    float Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F;
    TEnumAsByte<ETimelineDirection::Type> Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F;
    class UTimelineComponent* Butt FadeOut;
    float Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF;
    class UTimelineComponent* Timeline_0;
    float LightIntensityCache;
    bool TankArmorIntact;
    class UMaterialInstanceDynamic* ArmorBackDynamicMaterial;
    float HitGlow;
    FENE_Spider_Tank_Boss_COnArmorDestroyed OnArmorDestroyed;
    void OnArmorDestroyed(float EnrageDuration);
    bool FaceTargetWhenStationary;
    float BaseGlowFrequency;
    float BaseGlowStrength;
    class UFSDAchievement* DreadnaughtAchievement;
    TMap<APlayerCharacter*, float> PlayerToDamageMap;
    class UFSDAchievement* DesignatedDecoyAchievement;
    class UFSDAchievement* PestControlAchievement;
    class UFSDAchievement* JustAnotherBugHuntAchievement;
    class UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor Butt Initial Color;
    FLinearColor Butt Final Color;
    FTimerHandle RegrowShieldTimer;

    void CheckIfOnlyOnePlayerAlive();
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation);
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    void Set achievement from server to all(class UFSDAchievement* achievement to set, float Progress);
    void CheckForPlayersAliveWithNoAmmo();
    void OnRep_FaceTargetWhenStationary();
    float GetEnemyDamageResistance();
    void OnRep_TankArmorIntact();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Butt FadeOut__FinishedFunc();
    void Butt FadeOut__UpdateFunc();
    void OnRagdoll();
    void RegrowShield();
    void RegrowShieldFX();
    void PlayAnimatedDeath(int32 AnimationIndex);
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void OnDeathBase();
    void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void CheckForLastPlayerStanding();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void ReceiveBeginPlay();
    void FractureArmor(FVector HitPoint);
    void PlayEnragedAnimation();
    void WaitForHit();
    void ExecuteUbergraph_ENE_Spider_Tank_Boss(int32 EntryPoint);
    void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};

#endif
