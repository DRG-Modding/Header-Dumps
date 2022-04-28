#ifndef UE4SS_SDK_WPN_Cryospray_HPP
#define UE4SS_SDK_WPN_Cryospray_HPP

class AWPN_Cryospray_C : public ACryosprayItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* AudioPressurerising;
    class UFirstPersonPointLightComponent* GaugeLight;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonStaticMeshComponent* FP_Widget_Shooting_Gauge;
    class UFirstPersonParticleSystemComponent* PressureVent_Particle;
    class UFirstPersonWidgetComponent* FPwidget_Ammo;
    class UCrosshairAggregator* CrosshairAggregator;
    class UPointLightComponent* MuzzleLight;
    class UWeaponDisplay_CryoSpray_Ammo_C* UI_Ammo;
    class UParticleSystemComponent* ChargeInstance;
    class UParticleSystem* LaunchProjectileParticlesFP;
    class UParticleSystem* LaunchProjectileParticlesTP;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32 Amount);
    void Update Ammo Display();
    void ReceiveRepressurisingChanged(bool Value);
    void RecieveEquipped();
    void RecieveUnequipped();
    void Toggle RepressurerisingFX(bool On);
    void OnProjectileLaunched(const FVector& Location);
    void ReceiveBeginPlay();
    void OnPreProjectileLaunch();
    void ExecuteUbergraph_WPN_Cryospray(int32 EntryPoint);
};

#endif
