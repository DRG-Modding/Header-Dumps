#ifndef UE4SS_SDK_ENE_Woodlouse_HPP
#define UE4SS_SDK_ENE_Woodlouse_HPP

class AENE_Woodlouse_C : public AWoodLouse
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* ProjectileHit;
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    class UPawnStatsComponent* PawnStats;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UParticleSystemComponent* ParticleSystem;
    FVector_NetQuantize RagdollImpact;
    class USoundCue* deathSound;
    class USoundCue* FoldSound;
    class USoundCue* UnfoldSound;
    TEnumAsByte<Spider_DeathType::Type> DeathType;
    class UFXSystemAsset* ChemExplosionParticles;
    float DecalSize;
    class UStaticMeshComponent* HeadGoreMesh;

    void SetBurnMaterialSettings();
    void GetFXMeshScale(float& NewParam);
    void SetCookMaterialSettings();
    void OnRep_DeathType();
    void SetDeathType(TEnumAsByte<Spider_DeathType::Type> NewParam);
    void OnRep_RagdollImpact();
    void Fizzle();
    void SwitchedState(EWoodLouseState CurrentState);
    void BumpedTarget();
    void ChangePhysicsAsset();
    void IncrementCommunityGoal();
    void BndEvt__ENE_SpiderBase_Large_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void DeathDetailedBase(const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void NormalDeath();
    void ChemicalExplosionDeath();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void Cooked Death();
    void CorrosiveDeath();
    void OnMessageAI(FName TriggerName);
    void StartCorrosiveDissovle();
    void Play Burn Death();
    void StartBurn();
    void ExecuteUbergraph_ENE_Woodlouse(int32 EntryPoint);
};

#endif
