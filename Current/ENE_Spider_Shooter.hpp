#ifndef UE4SS_SDK_ENE_Spider_Shooter_HPP
#define UE4SS_SDK_ENE_Spider_Shooter_HPP

class AENE_Spider_Shooter_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleArmorDamageComponent* SimpleArmorDamage;
    class USphereComponent* Sphere;

    void GetEnemySpawnedCount(int32& SpawnCount);
    void OnRagdoll();
    void OnDeathBase();
    void ExecuteUbergraph_ENE_Spider_Shooter(int32 EntryPoint);
};

#endif
