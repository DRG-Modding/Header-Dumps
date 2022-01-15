#ifndef UE4SS_SDK_ENE_Spider_Tank_Base_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Base_HPP

class AENE_Spider_Tank_Base_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UArmorHealthDamageComponent* ArmorHealthDamage;
    UPointLightComponent* Light_BackBody;
    float ButtTurnOff_TurnOffTime_F69DC0FD4B3F86895DBCE39304B9A3BA;
    TEnumAsByte<ETimelineDirection::Type> ButtTurnOff__Direction_F69DC0FD4B3F86895DBCE39304B9A3BA;
    UTimelineComponent* ButtTurnOff;
    TSubclassOf<AActor> AcidCloudClass;
    UStatusEffectsComponent* NewLocalVar_0;
    UMaterialInstanceDynamic* ButtMaterial;
    FLinearColor ButtInitialColor;
    FLinearColor ButtFinalColor;
    int32 SelectedSpecialAttack;

    void CreateButtDynamicMaterial(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void IsWeakPointDeath(UFSDPhysicalMaterial* Material, bool& IsWeakPoint, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void GetEnemySpawnedCount(int32& SpawnCount);
    void ButtTurnOff__FinishedFunc();
    void ButtTurnOff__UpdateFunc();
    void OnRagdoll();
    void OnDeathBase();
    void StartFadeBody();
    void DeathDetailedBase(float Amount, UDamageClass* DamageClass, AActor* Causer, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
    void ExecuteUbergraph_ENE_Spider_Tank_Base(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UCommunityGoal* CallFunc_GetGoal_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_amount, UDamageClass* K2Node_Event_DamageClass, AActor* K2Node_Event_Causer, AController* K2Node_Event_Instigator, UFSDPhysicalMaterial* K2Node_Event_PhysicalMaterial, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif
