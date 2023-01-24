#ifndef UE4SS_SDK_WPN_M1000_HPP
#define UE4SS_SDK_WPN_M1000_HPP

class AWPN_M1000_C : public ABoltActionWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UDamageComponent* Damage;
    class UPointLightComponent* MuzzleLight;
    class UHitscanComponent* HitScan;
    class UCrosshairAggregator* CrosshairAggregator;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void RecieveEquipped();
    void ExecuteUbergraph_WPN_M1000(int32 EntryPoint);
};

#endif
