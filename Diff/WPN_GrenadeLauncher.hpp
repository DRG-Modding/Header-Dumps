#ifndef UE4SS_SDK_WPN_GrenadeLauncher_HPP
#define UE4SS_SDK_WPN_GrenadeLauncher_HPP

class AWPN_GrenadeLauncher_C : public AAmmoDrivenWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* projectileLauncher;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void CustomEvent1(const class UItemUpgrade* Event);
    void ExecuteUbergraph_WPN_GrenadeLauncher(int32 EntryPoint);
};

#endif
