#ifndef UE4SS_SDK_WPN_AssaultRifle_HPP
#define UE4SS_SDK_WPN_AssaultRifle_HPP

class AWPN_AssaultRifle_C : public AAssaultRifle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TP_AnimationMag;
    class UFirstPersonStaticMeshComponent* FP_AnimationMag;
    class UDamageComponent* Damage;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UStaticMeshComponent* TP_Mag;
    class UFirstPersonStaticMeshComponent* FP_Mag;
    class UPointLightComponent* MuzzleLight;
    class UHitscanComponent* HitScan;
    class UCrosshairAggregator* CrosshairAggregator;

    class UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
    class UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void RecieveEquipped();
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void ReceiveBeginPlay();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void OnSkinChanged(class USkinEffect* Skin);
    void ExecuteUbergraph_WPN_AssaultRifle(int32 EntryPoint);
};

#endif
