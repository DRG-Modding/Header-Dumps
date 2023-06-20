#ifndef UE4SS_SDK_ENE_Spider_Lobber_Base_HPP
#define UE4SS_SDK_ENE_Spider_Lobber_Base_HPP

class AENE_Spider_Lobber_Base_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* ButtLight1;
    class UPointLightComponent* Headlight;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UCapsuleComponent* Capsule;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class USimpleArmorDamageComponent* SimpleArmorDamage;
    float Timeline_1_NewTrack_0_F9A07C5C4BD90F40E985E7ADEBA28A31;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_F9A07C5C4BD90F40E985E7ADEBA28A31;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewTrack_0_25573A6F4B8E0DEA40A47FAC76CADD3B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_25573A6F4B8E0DEA40A47FAC76CADD3B;
    class UTimelineComponent* Timeline_0;
    float PlacementRadius;
    int32 FragmentCount;
    class UMaterialInstanceDynamic* LobberButtMat;
    float ButtGlowStart;
    class UMaterialInstanceDynamic* LobberButtPointsMat;
    float ButtPointsGlowStart;
    float CurrentButtEmissive;
    float CurrentButtPointsEmissive;
    float LastButtEmissive;
    float LastButtPointsEmissive;
    int32 AttackIndex;

    void OnRep_AttackIndex();
    void IsFirstAttack(bool& IsFirst);
    void InitDynamicMaterials();
    void SpawnFragments();
    void GetEnemySpawnedCount(int32& SpawnCount);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void DeathDetailedBase(float Amount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ReceiveBeginPlay();
    void OnRangedAttackNotify_Event_0();
    void StartFadeBody();
    void SetParametersFromFloat(float Param);
    void OnRagdoll();
    void OnMessageAI(FName TriggerName);
    void ExecuteUbergraph_ENE_Spider_Lobber_Base(int32 EntryPoint);
};

#endif
