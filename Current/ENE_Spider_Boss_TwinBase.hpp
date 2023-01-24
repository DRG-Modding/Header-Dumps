#ifndef UE4SS_SDK_ENE_Spider_Boss_TwinBase_HPP
#define UE4SS_SDK_ENE_Spider_Boss_TwinBase_HPP

class AENE_Spider_Boss_TwinBase_C : public AENE_Spider_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* TwinBurrow_Cue;
    class UBP_Meet_Attack_C* BP_Meet_Attack;
    class UBP_BurrowComponent_C* BP_BurrowComponent;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UAlignEnemyComponent* AlignEnemy;
    class UCapsuleComponent* Capsule;
    class UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator;
    class UHealthDamageTracker* HealthDamageTracker;
    class UPointLightComponent* Light_BackBody;
    FENE_Spider_Boss_TwinBase_COnArmorDestroyed OnArmorDestroyed;
    void OnArmorDestroyed(float EnrageDuration);
    class AENE_Spider_Boss_TwinBase_C* Twin;
    bool WaitingToMeet;
    float MeetHealthChange;
    bool HasMetSecondTime;
    bool HasMetThirdTime;
    FTimerHandle VulnerableSafetyCheckTimer;
    FTimerHandle FallbackCheckTimer;
    bool IsInvulnerableOrHidden;

    bool IsTwinAlive();
    void AddDamageDoneToTwinMap();
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation);
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    float GetEnemyDamageResistance();
    void OnRagdoll();
    void PlayAnimatedDeath(int32 AnimationIndex);
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature();
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void MeetAndGreet();
    void Grieve(FVector GreeveLocation);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void MatchHealth();
    void ApplyDR();
    void RemoveDR();
    void ReceiveBeginPlay();
    void GoInvulnerable();
    void GoVulnerable();
    void MatchHealthToMe(float HealthChange);
    void RegrowArmor();
    void VulnerableCheck();
    void Start_VulnerableSafeChecks();
    void FallbackMakeVulnerable();
    void ExecuteUbergraph_ENE_Spider_Boss_TwinBase(int32 EntryPoint);
    void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};

#endif
