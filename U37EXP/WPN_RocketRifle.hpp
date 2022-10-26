#ifndef UE4SS_SDK_WPN_RocketRifle_HPP
#define UE4SS_SDK_WPN_RocketRifle_HPP

class AWPN_RocketRifle_C : public AAmmoDrivenWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget_Ammo;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* projectileLauncher;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void CustomEvent1(const class UItemUpgrade* Event);
    void ExecuteUbergraph_WPN_RocketRifle(int32 EntryPoint);
};

#endif
