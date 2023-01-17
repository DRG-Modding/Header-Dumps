#ifndef UE4SS_SDK_WPN_BurstPistol_HPP
#define UE4SS_SDK_WPN_BurstPistol_HPP

class AWPN_BurstPistol_C : public ABurstWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UStaticMeshComponent* TP_Mag;
    class UFirstPersonStaticMeshComponent* FP_Mag;
    class UHitscanComponent* HitScan;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void ExecuteUbergraph_WPN_BurstPistol(int32 EntryPoint);
};

#endif
