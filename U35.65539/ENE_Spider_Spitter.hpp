#ifndef UE4SS_SDK_ENE_Spider_Spitter_HPP
#define UE4SS_SDK_ENE_Spider_Spitter_HPP

class AENE_Spider_Spitter_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProjectileAttackComponent* ProjectileAttack;
    UAudioComponent* SpiderSpitterIdle_Cue;
    USimpleArmorDamageComponent* SimpleArmorDamage;
    USphereComponent* Sphere;

    void GetEnemySpawnedCount(int32& SpawnCount);
    void OnRagdoll();
    void OnDeathBase();
    void ExecuteUbergraph_ENE_Spider_Spitter(int32 EntryPoint);
}

#endif
