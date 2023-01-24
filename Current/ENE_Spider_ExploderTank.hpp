#ifndef UE4SS_SDK_ENE_Spider_ExploderTank_HPP
#define UE4SS_SDK_ENE_Spider_ExploderTank_HPP

class AENE_Spider_ExploderTank_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* Growl;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UMeleeAttackComponent* CarveAttack;
    class UAlignEnemyComponent* AlignEnemy;
    class UCapsuleComponent* Capsule;
    class UParticleSystemComponent* P_ExploderTank_CollectingEmbers;
    class UDamageComponent* DamageDeathExplosion;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UBillboardComponent* ExplosionOrigin;
    class UBillboardComponent* ClusterOrigin;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    class UPointLightComponent* Light_BackBody;
    class UParticleSystem* ExplosionParticles;
    float WeakspotDamageMult;
    int32 NumClusterBombs;
    int32 NumWeakspotsDestroyed;
    class UParticleSystem* AoeAttackParticles;
    bool IsSucking;
    class UFSDAchievement* CyaDetonatorAchievement;
    float PushForce;
    TSubclassOf<class AProjectileBase> ClusterProjectileType;
    class UTerrainMaterial* OvverideBurnedMaterial;
    float BurnThickness;
    float CarveDiameter;

    void SetRagdollImpulse(FDamageData& DamageData, TArray<class UDamageTag*>& Tags);
    void SetupWeakpointGlow();
    void MakeCrater();
    void Apply Force to Players in Range(TArray<class APlayerCharacter*>& Array of Players, float Directional Force to Apply);
    bool GetIsTargetable();
    void GetEnemySpawnedCount(int32& SpawnCount);
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    void SetAchievementFromServerToAll(class UFSDAchievement* AchievementToSet, float Progress);
    void OnRep_IsSucking();
    void DamageAndCarve();
    void PlayRumbeAndShake();
    void OnRep_Exploded();
    void OnMessageAI(FName TriggerName);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void Play Frozen Death();
    void ShootClusterBombs();
    void Play Body Death Effects();
    void Play Burn Death();
    void Spawn Headshot Gibs(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void Attack(FName nameValue);
    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void Frozen Explosion();
    void MakeElite();
    void CorrosiveDeath();
    void ChemicalExplosionDeath();
    void Cooked Death();
    void ExplodedDeath();
    void ExecuteUbergraph_ENE_Spider_ExploderTank(int32 EntryPoint);
};

#endif
