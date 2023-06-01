#ifndef UE4SS_SDK_WPN_Gatling_HPP
#define UE4SS_SDK_WPN_Gatling_HPP

class AWPN_Gatling_C : public AGatlingGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* ParticleSystem;
    class UWeaponImpactComponent* WeaponImpact;
    class UDamageComponent* CritcalOverheatDamage;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystem;
    class UFirstPersonPointLightComponent* Light_MuzzleFlash;
    class UFirstPersonWidgetComponent* Widget_Overheat;
    class UHeatMaterialComponent* HeatMaterial;
    class UFirstPersonWidgetComponent* Widget_Ammo;
    class UCrosshairAggregator* CrosshairAggregator;
    class UHitscanComponent* HitScan;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void Receive_Overheated();
    void Receive_IsFiringChanged(bool NewValue);
    void RecieveEquipped();
    void RecieveUnequipped();
    void All_SpawnHeatBurst();
    void TriggerCriticalOverheat();
    void OnTemperatureChanged(float Temperature, bool overHeated);
    void ReceiveBeginPlay();
    void OnSkinChanged(class USkinEffect* Skin);
    void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
    void CustomEvent1(const class UItemUpgrade* Event);
    void ExecuteUbergraph_WPN_Gatling(int32 EntryPoint);
};

#endif
