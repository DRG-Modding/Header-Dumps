#ifndef UE4SS_SDK_ENE_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_ENE_Spider_Boss_Heavy_HPP

class AENE_Spider_Boss_Heavy_C : public AENE_Spider_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UMeleeAttackComponent* CarveAttack;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UCapsuleComponent* Weakspot_C;
    class UCapsuleComponent* Weakspot_L;
    class UCapsuleComponent* Weakspot_R;
    class UProjectileAttackComponent* ProjectileFireball;
    class UMeleeAttackComponent* MeleeAttack1;
    class UDamageComponent* SpecialAttackAoE;
    class UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator;
    class UHealthDamageTracker* HealthDamageTracker;
    class UDestructibleSubHealthComponent* WeakspotHealth_L;
    class USpawnActorWithDebrisPosComponent* SpecialAttackSpawn;
    class UDestructibleSubHealthComponent* WeakspotHealth_C;
    class UDestructibleSubHealthComponent* WeakspotHealth_R;
    class UAlignEnemyComponent* AlignEnemy;
    TEnumAsByte<Spider_Boss_Heavy_State::Type> HeavyTankState;
    class UNiagaraComponent* WhirlwindParticles;
    FENE_Spider_Boss_Heavy_COnStateChanged OnStateChanged;
    void OnStateChanged(TEnumAsByte<Spider_Boss_Heavy_State::Type> State);

    bool GetIsTargetable();
    void SetupWeakspotGlow();
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation);
    void SetArmorMeshState(bool ArmorOpen);
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    void OnRep_HeavyTankState();
    bool IsArmorIntact();
    void SetWeakpointVisibility(bool Visible, class UDestructibleSubHealthComponent* Health);
    void ReceiveBeginPlay();
    void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void BndEvt__DestructibleSubHealth1_K2Node_ComponentBoundEvent_1_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void StartSpecialAttack();
    void ForceVulnerable();
    void BndEvt__DestructibleSubHealth2_K2Node_ComponentBoundEvent_2_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void OnMessageAI(FName TriggerName);
    void OnRagdoll();
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void GrowWeakpoints();
    void PlayAnimatedDeath(int32 AnimationIndex);
    void ForceEnraged();
    void OnDeathBase();
    void SpawnProjectile(TSubclassOf<class AActor> Actor, const FTransform& Transform);
    void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset);
    void ExecuteUbergraph_ENE_Spider_Boss_Heavy(int32 EntryPoint);
    void OnStateChanged__DelegateSignature(TEnumAsByte<Spider_Boss_Heavy_State::Type> State);
};

#endif
