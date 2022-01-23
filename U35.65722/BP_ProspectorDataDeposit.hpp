#ifndef UE4SS_SDK_BP_ProspectorDataDeposit_HPP
#define UE4SS_SDK_BP_ProspectorDataDeposit_HPP

class ABP_ProspectorDataDeposit_C : public ABP_Facility_PowerStation_GeneratorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* ProspectingDataDepositIdle;
    class UNiagaraComponent* NS_DoorOpenSteam;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class USceneComponent* LaunchPoint;
    class USingleUsableComponent* EjectCoreUsable;
    class UEnemyWaveController* ActiveWave;
    bool OverChargerCalled;

    void SpawnDataCell(FName CallFunc_MakeLiteralName_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DataCell_C* CallFunc_FinishSpawningActor_ReturnValue);
    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    void OnLoaded_B91065F0477C87A6C355AF868F6F6BB2(UClass* Loaded);
    void ReceiveBeginPlay();
    void OnOverChargerCalled_Event_0(FVector Location, int32 roomIndex);
    void FirstConnect_Event(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherlineStart);
    void OnHackingComplete();
    void ExecuteUbergraph_BP_ProspectorDataDeposit(int32 EntryPoint, UClass* K2Node_CustomEvent_Loaded, UClass* Temp_class_Variable, TSubclassOf<class ARessuplyPod> K2Node_ClassDynamicCast_AsRessuply_Pod, bool K2Node_ClassDynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_BP_ProspectorDataDepositK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, FExecuteUbergraph_BP_ProspectorDataDepositK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, FVector K2Node_CustomEvent_Location, int32 K2Node_CustomEvent_RoomIndex, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FExecuteUbergraph_BP_ProspectorDataDepositK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_1, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, class UTetherComponent* K2Node_CustomEvent_tetherlineStart, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, class UEWC_HackBuilding_C* CallFunc_TriggerWave_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue);
};

#endif
