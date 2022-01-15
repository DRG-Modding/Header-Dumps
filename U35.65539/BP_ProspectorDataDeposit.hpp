#ifndef UE4SS_SDK_BP_ProspectorDataDeposit_HPP
#define UE4SS_SDK_BP_ProspectorDataDeposit_HPP

class ABP_ProspectorDataDeposit_C : UBP_Facility_PowerStation_GeneratorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* ProspectingDataDepositIdle;
    UNiagaraComponent* NS_DoorOpenSteam;
    UPointLightComponent* PointLight;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    USceneComponent* LaunchPoint;
    USingleUsableComponent* EjectCoreUsable;
    UEnemyWaveController* ActiveWave;
    bool OverChargerCalled;

    void SpawnDataCell(FName CallFunc_MakeLiteralName_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_DataCell_C* CallFunc_FinishSpawningActor_ReturnValue);
    TSubclassOf<UBossFightWidget> GetWidgetClass();
    void OnLoaded_B91065F0477C87A6C355AF868F6F6BB2(TSubclassOf<UObject> Loaded);
    void ReceiveBeginPlay();
    void OnOverChargerCalled_Event_0(FVector Location, int32 roomIndex);
    void FirstConnect_Event(UBP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherlineStart);
    void OnHackingComplete();
    void ExecuteUbergraph_BP_ProspectorDataDeposit(int32 EntryPoint, TSubclassOf<UObject> K2Node_CustomEvent_Loaded, TSubclassOf<UObject> Temp_class_Variable, TSubclassOf<ARessuplyPod> K2Node_ClassDynamicCast_AsRessuply_Pod, bool K2Node_ClassDynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, FirstConnect__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, OnOverChargerCalled__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, FVector K2Node_CustomEvent_Location, int32 K2Node_CustomEvent_RoomIndex, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, OnAssetClassLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_1, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, UTetherComponent* K2Node_CustomEvent_tetherlineStart, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, UEWC_HackBuilding_C* CallFunc_TriggerWave_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue);
}

#endif
