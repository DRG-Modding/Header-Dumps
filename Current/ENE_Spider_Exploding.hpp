#ifndef UE4SS_SDK_ENE_Spider_Exploding_HPP
#define UE4SS_SDK_ENE_Spider_Exploding_HPP

class AENE_Spider_Exploding_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    class UPointLightComponent* Light_BackBody;
    bool Exploded;
    bool IsFleeing_0;
    class UParticleSystem* ExplosionParticles;
    bool ExplodeOnDeath;
    bool NearbyExplodersFlee;

    void SetRagdollImpulse(FDamageData& DamageData, TArray<class UDamageTag*>& Tags);
    bool GetIsTargetable();
    float GetDistanceToLocalPlayer();
    void DamageAndCarve();
    void PlayRumbeAndShake();
    void MakeNearbyExplodersFlee();
    void OnRep_Exploded();
    void Explode();
    void OnExploded();
    void OnMessageAI(FName TriggerName);
    void Play Burn Death();
    void Play Body Death Effects();
    void Spawn Headshot Gibs(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void Play Frozen Death();
    void DisableExplosion();
    void StopMontagesOnDeath();
    void CorrosiveDeath();
    void ChemicalExplosionDeath();
    void Cooked Death();
    void ExplodedDeath();
    void OnExplosionFinished();
    void ExecuteUbergraph_ENE_Spider_Exploding(int32 EntryPoint);
};

#endif
