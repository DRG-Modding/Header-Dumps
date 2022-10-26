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

    void SpawnDataCell();
    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    void OnLoaded_B91065F0477C87A6C355AF868F6F6BB2(UClass* Loaded);
    void ReceiveBeginPlay();
    void OnOverChargerCalled_Event_0(FVector Location, int32 roomIndex);
    void FirstConnect_Event(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherlineStart);
    void OnHackingComplete();
    void ExecuteUbergraph_BP_ProspectorDataDeposit(int32 EntryPoint);
};

#endif
