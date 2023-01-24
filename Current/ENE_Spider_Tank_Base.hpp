#ifndef UE4SS_SDK_ENE_Spider_Tank_Base_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Base_HPP

class AENE_Spider_Tank_Base_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UPointLightComponent* Light_BackBody;
    float ButtTurnOff_TurnOffTime_F69DC0FD4B3F86895DBCE39304B9A3BA;
    TEnumAsByte<ETimelineDirection::Type> ButtTurnOff__Direction_F69DC0FD4B3F86895DBCE39304B9A3BA;
    class UTimelineComponent* ButtTurnOff;
    TSubclassOf<class AActor> AcidCloudClass;
    class UStatusEffectsComponent* NewLocalVar_0;
    class UMaterialInstanceDynamic* ButtMaterial;
    FLinearColor ButtInitialColor;
    FLinearColor ButtFinalColor;
    int32 SelectedSpecialAttack;

    void GetFXMeshScale(float& Scale);
    void CreateButtDynamicMaterial();
    void IsWeakPointDeath(class UFSDPhysicalMaterial* Material, bool& IsWeakPoint);
    void GetEnemySpawnedCount(int32& SpawnCount);
    void ButtTurnOff__FinishedFunc();
    void ButtTurnOff__UpdateFunc();
    void OnRagdoll();
    void OnDeathBase();
    void StartFadeBody();
    void DeathDetailedBase(float Amount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_Spider_Tank_Base(int32 EntryPoint);
};

#endif
