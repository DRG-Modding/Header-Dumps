#ifndef UE4SS_SDK_WPN_PlatformGun_HPP
#define UE4SS_SDK_WPN_PlatformGun_HPP

class AWPN_PlatformGun_C : public AAmmoDrivenWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonPointLightComponent* FirstPersonPointLight;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* projectileLauncher;
    bool UsingBigPlatform;
    bool UsingLessFallDamage;
    bool UsingBugRepellant;
    int32 Material;
    bool UsingCubePlatform;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature(const FVector& Location);
    void Upgraded_Blueprint_Implementation(const TArray<class UItemUpgrade*>& upgrades);
    void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(class AProjectileBase* Projectile);
    void ExecuteUbergraph_WPN_PlatformGun(int32 EntryPoint);
};

#endif
