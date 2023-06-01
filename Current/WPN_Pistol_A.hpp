#ifndef UE4SS_SDK_WPN_Pistol_A_HPP
#define UE4SS_SDK_WPN_Pistol_A_HPP

class AWPN_Pistol_A_C : public ABasicPistol
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TP_Animation_Mag;
    class UFirstPersonStaticMeshComponent* FP_Animation_Mag;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonStaticMeshComponent* FP_Mag;
    class UStaticMeshComponent* TP_Mag;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;
    class UHitscanComponent* HitScan;

    class UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
    class UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void OnSkinChanged(class USkinEffect* Skin);
    void ExecuteUbergraph_WPN_Pistol_A(int32 EntryPoint);
};

#endif
