#ifndef UE4SS_SDK_WeaponDisplay_SentryGun_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_SentryGun_AmmoCount_HPP

class UWeaponDisplay_SentryGun_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fire;
    class UTextBlock* AmmoCount;

    void SetSentry(class ASentryGun* SentryGun);
    void OnAmmoCountChanged(int32 AmmoCount, int32 Change);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount(int32 EntryPoint);
};

#endif
