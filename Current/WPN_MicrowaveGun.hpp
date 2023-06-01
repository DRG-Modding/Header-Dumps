#ifndef UE4SS_SDK_WPN_MicrowaveGun_HPP
#define UE4SS_SDK_WPN_MicrowaveGun_HPP

class AWPN_MicrowaveGun_C : public AMicrowaveWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonNiagaraComponent* HeatSmoke;
    class UProjectileLauncherComponent* projectileLauncher;
    class UFirstPersonWidgetComponent* Widget_HeatNew;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;
    class UWeaponDisplay_MicrowaveGun_Heat_C* OverheatUI;
    class UCurveFloat* Curve_HeatColor;
    class UAudioComponent* ParticleImpactSoundLoop;
    FVector LastClosestHit;
    bool LastHitEnemy;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void OnTemperatureChanged(float Temperature, bool overHeated);
    void CustomEvent1(const class UItemUpgrade* Event);
    void Receive_IsFiringChanged(bool NewValue);
    void HeatUpdated(float SmoothedTemperature);
    void RecieveStopUsing();
    void BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature(const FVector& Location, const FVector& Normal, bool bHitEnemy);
    void OnStartCharacterOverheat_Event();
    void RecieveUnequipped();
    void ExecuteUbergraph_WPN_MicrowaveGun(int32 EntryPoint);
};

#endif
