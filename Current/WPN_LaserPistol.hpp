#ifndef UE4SS_SDK_WPN_LaserPistol_HPP
#define UE4SS_SDK_WPN_LaserPistol_HPP

class AWPN_LaserPistol_C : public ABurstWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* Widget_HeatNew;
    class UParticleSystemComponent* P_LaserImpact;
    class UAudioComponent* LaserActivated;
    class USceneComponent* BeamRoot;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* Beam;
    class USceneComponent* holder;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UStaticMeshComponent* TP_Mag;
    class UFirstPersonStaticMeshComponent* FP_Mag;
    class UHitscanComponent* HitScan;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void BndEvt__Hitscan_K2Node_ComponentBoundEvent_0_HitDelegate__DelegateSignature(const FHitResult& Hit, bool alwaysPenetrate);
    void Receive_IsFiringChanged(bool NewValue);
    void ReceiveBeginPlay();
    void OnTemperatureChanged(float Temperature, bool overHeated);
    void ExecuteUbergraph_WPN_LaserPistol(int32 EntryPoint);
};

#endif
