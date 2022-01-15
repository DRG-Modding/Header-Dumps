#ifndef UE4SS_SDK_ENE_Spider_Shooter_HPP
#define UE4SS_SDK_ENE_Spider_Shooter_HPP

class AENE_Spider_Shooter_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleArmorDamageComponent* SimpleArmorDamage;
    USphereComponent* Sphere;
    AActor* Target;

    void GetEnemySpawnedCount(int32& SpawnCount);
    void OnRep_Target();
    void OnRagdoll();
    void OnDeathBase();
    void ExecuteUbergraph_ENE_Spider_Shooter(int32 EntryPoint);
}

#endif
