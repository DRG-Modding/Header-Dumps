#ifndef UE4SS_SDK_WPN_CoilGun_HPP
#define UE4SS_SDK_WPN_CoilGun_HPP

class AWPN_CoilGun_C : public ACoilGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* CoilGunChargeGlow;
    class UFSDAudioComponent* CoilGunCharge;
    class UFirstPersonWidgetComponent* Widget_ChargeNew;
    class USceneComponent* Scene;
    class UDamageComponent* FireExplosionDamage;
    class UAllPiercingHitscanComponent* AllPiercingHitscan;
    class UAudioComponent* AC_ChargeLevel;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;
    float FadeTimeline_ChargeFade_C49992004992D09AEFEFFF997C5FEA5C;
    float FadeTimeline_SoundFade_C49992004992D09AEFEFFF997C5FEA5C;
    float FadeTimeline_LightFade_C49992004992D09AEFEFFF997C5FEA5C;
    TEnumAsByte<ETimelineDirection::Type> FadeTimeline__Direction_C49992004992D09AEFEFFF997C5FEA5C;
    class UTimelineComponent* FadeTimeline;
    class UWeaponDisplay_Coilgun_Charge_C* ChargeUI;
    class UWeaponDisplay_ChargeBlaster_Heat_C* OverheatUI;
    class UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI;
    int32 ChargeLevel;
    class UAudioComponent* AC_Heat;
    class USoundBase* TemperatureAudio;
    class USoundBase* OverheatedAudio;
    class UAudioComponent* AC_ChargeSpinUp;
    class UParticleSystemComponent* OverheatEmitterInstance;
    float ChargeReached;
    class UParticleSystemComponent* BrokeShieldBoostParticles;
    class UAudioComponent* BrokeShieldBoostSound;
    FRuntimeFloatCurve HeatMaterialCurve;
    class UAudioComponent* AC_Heat_0;
    bool HasFearTrail;

    void FadeOutIfValid(class UAudioComponent*& AC);
    void HandleHeatAudio();
    void HandleChargeAudio(float charge);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void FadeTimeline__FinishedFunc();
    void FadeTimeline__UpdateFunc();
    void RecieveUnequipped();
    void ReceiveOverheatedChanged(bool isOverheated);
    void OnSkinChanged(class USkinEffect* Skin);
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void OnFireKill(class AActor* Target);
    void RecieveStartedCharging();
    void RecieveStoppedCharging(float ChargeProgress);
    void ReceiveBeginPlay();
    void OnChargeChanged_Event_0(float charge);
    void OnShieldBrokeBoostStopped();
    void OnShieldBrokenBoost();
    void Receive_Overheated();
    void ExecuteUbergraph_WPN_CoilGun(int32 EntryPoint);
};

#endif
