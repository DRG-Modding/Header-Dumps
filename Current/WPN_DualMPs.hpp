#ifndef UE4SS_SDK_WPN_DualMPs_HPP
#define UE4SS_SDK_WPN_DualMPs_HPP

class AWPN_DualMPs_C : public ADualMachinePistols
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidgetLeft;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UHitscanComponent* HitScan;
    class UCrosshairAggregator* CrosshairAggregator;
    class UDamageComponent* Damage;
    class UPointLightComponent* MuzzleFlash;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WPN_DualMPs(int32 EntryPoint);
};

#endif
