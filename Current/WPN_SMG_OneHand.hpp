#ifndef UE4SS_SDK_WPN_SMG_OneHand_HPP
#define UE4SS_SDK_WPN_SMG_OneHand_HPP

class AWPN_SMG_OneHand_C : public AElectricalSMG
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* FP_AnimationMag;
    class UStaticMeshComponent* TP_AnimationMag;
    class UParticleSystemComponent* ParticleSystem;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem;
    class UStaticMeshComponent* TP_SMG_MAG;
    class UFirstPersonStaticMeshComponent* SMG_Mag_Full;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UDamageComponent* Damage;
    class UPointLightComponent* MuzzleLight;
    class UHitscanComponent* HitScan;
    class UCrosshairAggregator* CrosshairAggregator;
    FVector SalineConductorScale;
    TArray<class ABP_TurretEMPDischarge_Indicator_C*> EMPDischargeIndicators;
    FTimerHandle EMPIndicatorUpdateTimer;

    class UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
    class UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
    void GetElectrutionChance(float& Chance);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void ReceiveBeginPlay();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void CustomEvent1(const class UItemUpgrade* Event);
    void ElectriyPlatform(const FHitResult& Hit, bool alwaysPenetrate);
    void Server_OnHit(FVector Location);
    void OnSkinChanged(class USkinEffect* Skin);
    void RecieveUnequipped();
    void StopEMDischargeCheck();
    void ExecuteUbergraph_WPN_SMG_OneHand(int32 EntryPoint);
};

#endif
