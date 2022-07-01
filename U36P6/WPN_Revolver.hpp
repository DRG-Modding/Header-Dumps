#ifndef UE4SS_SDK_WPN_Revolver_HPP
#define UE4SS_SDK_WPN_Revolver_HPP

class AWPN_Revolver_C : public ARevoler
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* FP_AnimationMag;
    class UStaticMeshComponent* TP_AnimationMag;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UStaticMeshComponent* TP_Drum;
    class UFirstPersonStaticMeshComponent* FP_Drum;
    class UDamageComponent* Damage;
    class UPointLightComponent* MuzzlePointLight;
    class UFirstPersonStaticMeshComponent* Mesh_AmmoCounter;
    class UHitscanComponent* HitScan;
    class UCrosshairAggregator* CrosshairAggregator;
    float LastSpread;

    class UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
    class UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void ReceiveBeginPlay();
    void OnSpreadChanged_Event_0(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void OnSkinChanged(class USkinEffect* Skin);
    void ExecuteUbergraph_WPN_Revolver(int32 EntryPoint);
};

#endif
