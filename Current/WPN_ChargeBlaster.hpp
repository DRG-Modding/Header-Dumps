#ifndef UE4SS_SDK_WPN_ChargeBlaster_HPP
#define UE4SS_SDK_WPN_ChargeBlaster_HPP

class AWPN_ChargeBlaster_C : public AChargedWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* ChargeBlaster_Overheat_Cue;
    class UAudioComponent* ChargeBlaster_SpinUp_Cue;
    class UAudioComponent* AC_ChargeLevel;
    class UFirstPersonWidgetComponent* Widget_ChargeNew;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh2;
    class UFirstPersonWidgetComponent* Widget_Ammo;
    class UFirstPersonWidgetComponent* Widget_HeatNew;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Arc;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Right;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Left;
    class UChargedProjectileLauncherComponent* ChargedProjectileLauncher;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;
    class UWeaponDisplay_ChargeBlaster_Charge_C* ChargeUI;
    class UWeaponDisplay_ChargeBlaster_Heat_C* OverheatUI;
    class UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI;
    int32 ChargeLevel;
    class UAudioComponent* AC_Heat;
    class USoundBase* TemperatureAudio;
    class USoundBase* OverheatedAudio;
    class UAudioComponent* AC_ChargeLevel_0;
    class UAudioComponent* AC_ChargeSpinUp;
    class UParticleSystemComponent* OverheatEmitterInstance;
    class UMaterialInstanceDynamic* SlideParameter;

    void Fade Out if Valid(class UAudioComponent*& AC);
    void HandleHeatAudio();
    void HandleChargeAudio(float charge);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void OnHeatChanged_Event_0(float charge);
    void ChargeChanged(float charge);
    void RecieveUnequipped();
    void ReceiveOverheatedChanged(bool isOverheated);
    void OnSkinChanged(class USkinEffect* Skin);
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void RecieveFiredWeapon();
    void ExecuteUbergraph_WPN_ChargeBlaster(int32 EntryPoint);
};

#endif
