#ifndef UE4SS_SDK_WPN_GooCannon_HPP
#define UE4SS_SDK_WPN_GooCannon_HPP

class AWPN_GooCannon_C : public AGooGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GooCannon_FullyCharged_Cue;
    class UFirstPersonWidgetComponent* Widget_Ammo;
    class UAudioComponent* GooCannonCharge_Cue;
    class UChargedProjectileLauncherComponent* ChargedProjectileLauncher;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;
    class UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI;
    class UAudioComponent* AC_ChargeLevel_0;
    class UAudioComponent* AC_ChargeSpinUp;
    class UParticleSystemComponent* OverheatEmitterInstance;
    bool BurstFireActive;
    bool HasChargeUpgrade;
    bool HasVacuum;
    float PuddleAmmoPool;

    void ApplyUpgradeModifiers(class UItemUpgrade* ItemUpgrade);
    void GetNearbyPuddles();
    void FadeOutIfValid(class UAudioComponent*& AC);
    void Handle Charge Audio(float charge);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void RecieveUnequipped();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void OnChargeChanged_Event_0(float charge);
    void CustomEvent1(const class UItemUpgrade* Event);
    void ReloadEvent();
    void SuckInPuddle(class ABP_GooCannon_GooPuddle_C* puddle);
    void ServerSuckInPuddle(class ABP_GooCannon_GooPuddle_C* puddle);
    void ReceiveBeginPlay();
    void OnPuddleSuckedIn();
    void ExecuteUbergraph_WPN_GooCannon(int32 EntryPoint);
};

#endif
