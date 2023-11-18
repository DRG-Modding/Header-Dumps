#ifndef UE4SS_SDK_WPN_PlasmaCarbine_HPP
#define UE4SS_SDK_WPN_PlasmaCarbine_HPP

class AWPN_PlasmaCarbine_C : public APlasmaCarbine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHeatMaterialComponent* HeatMaterial;
    class UDamageComponent* AoEDamageComponent;
    class UAudioComponent* OverHeatSound;
    class UFirstPersonWidgetComponent* FirstPersonWidget_Ammo;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* projectileLauncher;
    float Overheat_Ammo_Regen_Effect_6788C26846C5EA00DB58E08FBF311673;
    TEnumAsByte<ETimelineDirection::Type> Overheat_Ammo_Regen__Direction_6788C26846C5EA00DB58E08FBF311673;
    class UTimelineComponent* Overheat Ammo Regen;
    float Overheat;
    bool HasOverheated;
    bool RegenAmmoOnOverheat;
    bool AoeOnOverheat;
    float AmmoResupplyProgress;
    bool SpeedBoostOnOverheat;
    TSubclassOf<class UStatusEffect> SpeedBoostOnOverheatSTE;
    float OverheatAoEMaxDMG;
    float OverheatAoEDamageRadius;
    float OldRoF;
    bool TermalFeedbackLoop;
    float HeatAtRegenTrigger;

    void GetAmmoWidget(class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C*& AsWeapon Display Plasma Carbine Ammo Counter);
    void SetUpgradesAndOverclocks(class UItemUpgrade* ItemUpgrade);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void Overheat Ammo Regen__FinishedFunc();
    void Overheat Ammo Regen__UpdateFunc();
    void ReceiveBeginPlay();
    void CustomEvent1(const class UItemUpgrade* Event);
    void OnTemperatureChanged(float Temperature, bool overHeated);
    void Receive_IsFiringChanged(bool NewValue);
    void Receive_Overheated();
    void RecieveStartUsing();
    void Server Trigger Aoe();
    void Trigger Aoe Effects();
    void ServerPushSpeedBoost();
    void OnSkinChanged(class USkinEffect* Skin);
    void ExecuteUbergraph_WPN_PlasmaCarbine(int32 EntryPoint);
};

#endif
