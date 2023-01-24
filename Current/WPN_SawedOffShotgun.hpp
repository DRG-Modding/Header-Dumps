#ifndef UE4SS_SDK_WPN_SawedOffShotgun_HPP
#define UE4SS_SDK_WPN_SawedOffShotgun_HPP

class AWPN_SawedOffShotgun_C : public ASawedOffShotgun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UPointLightComponent* MuzzleLight;
    class UCrosshairAggregator* CrosshairAggregator;
    class UMultiHitscanComponent* MultiHitscan;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WPN_SawedOffShotgun(int32 EntryPoint);
};

#endif
