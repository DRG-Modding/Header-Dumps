#ifndef UE4SS_SDK_ENE_Spider_Shooter_Rockpox_Plague_HPP
#define UE4SS_SDK_ENE_Spider_Shooter_Rockpox_Plague_HPP

class AENE_Spider_Shooter_Rockpox_Plague_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileAttackComponent* ProjectileAttack;
    class UStaticMeshComponent* InfectionPoint3;
    class UStaticMeshComponent* InfectionPoint1;
    class UStaticMeshComponent* InfectionPoint8;
    class UStaticMeshComponent* InfectionPoint9;
    class UStaticMeshComponent* InfectionPoint7;
    class UStaticMeshComponent* InfectionPoint6;
    class UStaticMeshComponent* InfectionPoint5;
    class UStaticMeshComponent* InfectionPoint2;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UInfectionMasterComponent* InfectionMaster;
    class USphereComponent* Sphere;
    int32 InfectionPoints;
    TSubclassOf<class UStatusEffect> InfectionSTE;
    int32 InfectionPointsDestroyed;
    TSubclassOf<class AActor> AcidCloudClass;

    void GetEnemySpawnedCount(int32& SpawnCount);
    void OnRagdoll();
    void OnDeathBase();
    void ReceiveBeginPlay();
    void PopAllWeakPoints(class UHealthComponentBase* HealthComponent);
    void BndEvt__ENE_Spider_Grunt_TentacleInfection_ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void DeathDetailedBase(float Amount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_Spider_Shooter_Rockpox_Plague(int32 EntryPoint);
};

#endif
