#ifndef UE4SS_SDK_WeaponDisplay_MicroMissileLauncher_HPP
#define UE4SS_SDK_WeaponDisplay_MicroMissileLauncher_HPP

class UWeaponDisplay_MicroMissileLauncher_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AmmoCount;
    class UHorizontalBox* ChargeBox;
    class UImage* Image_88;
    class UTextBlock* MaxAmmo;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_1;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_2;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_3;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_4;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_5;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_6;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_7;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_8;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_9;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_10;
    class UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_11;
    class AMicroMissileLauncher* MissileLauncherItem;
    TArray<class UUI_MicroMissileLauncher_Charge_C*> ChargeIcons;
    FTimerHandle ChargingHandle;
    int32 CurrentCharge;
    int32 ClipCount;
    bool Charging;
    class UAudioComponent* PingAudio;

    void SetCurrentChargeWithAudio(int32 InCharge);
    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void InitializeAmmoWidget(class AItem* OwningItem, class UWidgetComponent* WidgetComp);
    void OnStartCharging();
    void OnEndCharging();
    void OnUpdateCharging();
    void Construct();
    void ResetChargingUI(bool InHideIcons);
    void ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher(int32 EntryPoint);
};

#endif
