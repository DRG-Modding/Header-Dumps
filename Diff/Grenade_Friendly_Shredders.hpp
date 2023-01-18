#ifndef UE4SS_SDK_Grenade_Friendly_Shredders_HPP
#define UE4SS_SDK_Grenade_Friendly_Shredders_HPP

class AGrenade_Friendly_Shredders_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* GrenadeParasiteSpawn;
    class UFSDAudioComponent* GrenadeParasiteHit;
    class UNiagaraComponent* NS_ExplosionParticles;
    int32 ParticleRandomSeed;
    int32 SpawnedDrones;
    TSubclassOf<class ABP_FriendlyShredder_C> friendlyShredderSpawnedActorClass;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnRep_ParticleRandomSeed();
    void UserConstructionScript();
    void OnExploded();
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
    void ReceiveBeginPlay();
    void OnDeathShredder(class UHealthComponentBase* HealthComponent);
    void KillOtherGrenades();
    void ExecuteUbergraph_Grenade_Friendly_Shredders(int32 EntryPoint);
};

#endif
