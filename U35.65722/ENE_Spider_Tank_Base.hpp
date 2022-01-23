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

    void CreateButtDynamicMaterial(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void IsWeakPointDeath(class UFSDPhysicalMaterial* Material, bool& IsWeakPoint, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void GetEnemySpawnedCount(int32& SpawnCount);
    void ButtTurnOff__FinishedFunc();
    void ButtTurnOff__UpdateFunc();
    void OnRagdoll();
    void OnDeathBase();
    void StartFadeBody();
    void DeathDetailedBase(float Amount, class UDamageClass* DamageClass, class AActor* Causer, class AController* Instigator, class UFSDPhysicalMaterial* PhysicalMaterial);
    void ExecuteUbergraph_ENE_Spider_Tank_Base(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UCommunityGoal* CallFunc_GetGoal_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_amount, class UDamageClass* K2Node_Event_DamageClass, class AActor* K2Node_Event_Causer, class AController* K2Node_Event_Instigator, class UFSDPhysicalMaterial* K2Node_Event_PhysicalMaterial, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

#endif
