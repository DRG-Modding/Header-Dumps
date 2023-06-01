#ifndef UE4SS_SDK_WPN_Autocannon_HPP
#define UE4SS_SDK_WPN_Autocannon_HPP

class AWPN_Autocannon_C : public AAutoCannon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* ParticleSystem;
    class UWeaponImpactComponent* WeaponImpact;
    class UDamageComponent* Damage;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem;
    class UFirstPersonPointLightComponent* Light_MuzzleFlash;
    class UFirstPersonWidgetComponent* Widget_Ammo;
    class UCrosshairAggregator* CrosshairAggregator;
    class UHitscanComponent* HitScan;
    float SplashDamage;
    float SplashRadius;
    float StartTime;

    FText RoundStatValue(const FText& InText, FString Suffix, bool KeepSign);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ShowCurentFireTime();
    void ReceiveBeginPlay();
    void RecieveUnequipped();
    void RecieveEquipped();
    void Receive_IsFiringChanged(bool NewValue);
    void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
    void RecieveFiredWeapon();
    void ExecuteUbergraph_WPN_Autocannon(int32 EntryPoint);
};

#endif
