#ifndef UE4SS_SDK_WeaponDisplay_SentryGun_Generic_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_SentryGun_Generic_AmmoCount_HPP

class UWeaponDisplay_SentryGun_Generic_AmmoCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AmmoCount;
    class UImage* Image_88;
    class UItemAggregator* Aggregator;

    void SetSentry(class ASentryGun* SentryGun);
    void OnAmmoCountChanged(int32 AmmoCount, int32 Change);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_SentryGun_Generic_AmmoCount(int32 EntryPoint);
};

#endif
