#ifndef UE4SS_SDK_WPN_DoubleDrills_HPP
#define UE4SS_SDK_WPN_DoubleDrills_HPP

class AWPN_DoubleDrills_C : public ADoubleDrillItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* Widget_Heat;
    class UFirstPersonWidgetComponent* Widget_Fuel;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class USceneComponent* OverheatingAudioScene;
    class UHeatMaterialComponent* HeatMaterial;
    class UCrosshairAggregator* CrosshairAggregator;
    float NextSplatTime;
    float DefaultFOV;
    class UWeaponDisplay_Overheat_C* OverheatWidget1;
    class UWeaponDisplay_Overheat_C* OverheaWidget2;
    class UWeaponDisplay_Drill_Heat_C* OverheatWidget;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    class USceneComponent* GetHeatingAudioSceneComponent();
    void OnTemperatureChanged(float Temperature, bool overHeated);
    void Increase FOV();
    void Decrease FOV();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void BP_OnDrillDamage();
    void OnStartDrilling();
    void OnStopDrilling();
    void Receive_Overheated();
    void ReceiveBeginPlay();
    void Gunsling();
    void RecieveCycledItem();
    void ExecuteUbergraph_WPN_DoubleDrills(int32 EntryPoint);
};

#endif
