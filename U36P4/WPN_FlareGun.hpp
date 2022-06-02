#ifndef UE4SS_SDK_WPN_FlareGun_HPP
#define UE4SS_SDK_WPN_FlareGun_HPP

class AWPN_FlareGun_C : public AFlareGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* projectileLauncher;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WPN_FlareGun(int32 EntryPoint);
};

#endif
