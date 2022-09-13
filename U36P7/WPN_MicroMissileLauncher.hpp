#ifndef UE4SS_SDK_WPN_MicroMissileLauncher_HPP
#define UE4SS_SDK_WPN_MicroMissileLauncher_HPP

class AWPN_MicroMissileLauncher_C : public AMicroMissileLauncher
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChargedProjectileLauncherComponent* ChargedProjectileLauncher;
    class USceneComponent* HomingTarget;
    class UFirstPersonWidgetComponent* FirstPersonWidget_Ammo;
    class UCrosshairAggregator* CrosshairAggregator;
    TArray<TEnumAsByte<EObjectTypeQuery>> LineTraceTargets;
    float TraceDistance;
    FVector TargetLocation;
    bool NoHoming;
    bool JetFuelChosen;
    TArray<class AActor*> HomingTargetIgnoreList;
    float LongestLifetime;
    class APRJ_MicroMissile_C* OldestMissile;

    void SetUpgradeModifiers(class UItemUpgrade* ItemUpgrade);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void CustomEvent1(const class UItemUpgrade* Event);
    void SetHomingTarget();
    void OnProjectileSpawned_Event_0(class AProjectileBase* Projectile);
    void ReceiveTick(float DeltaSeconds);
    void Server_SetHomingLocation(FVector_NetQuantize HomingLocation);
    void All_SetHomingLocation(FVector_NetQuantize HomingLocation);
    void ExecuteUbergraph_WPN_MicroMissileLauncher(int32 EntryPoint);
};

#endif
