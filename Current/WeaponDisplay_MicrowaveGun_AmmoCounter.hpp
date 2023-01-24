#ifndef UE4SS_SDK_WeaponDisplay_MicrowaveGun_AmmoCounter_HPP
#define UE4SS_SDK_WeaponDisplay_MicrowaveGun_AmmoCounter_HPP

class UWeaponDisplay_MicrowaveGun_AmmoCounter_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* firing;
    class UWidgetAnimation* AmmoCritical;
    class UTextBlock* DATA_AmmoCount;
    class UImage* Image_88;
    class UImage* Line1L;
    class UImage* Line1U;
    class UImage* Line2L;
    class UImage* Line2U;
    class UImage* Line3L;
    class UImage* Line3U;
    class UImage* Line4L;
    class UImage* Line4U;
    class UImage* WarningOverlay;

    void UpdateAmount(int32 Value);
    void SetTotalCount(int32 Value);
    void Construct();
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_MicrowaveGun_AmmoCounter(int32 EntryPoint);
};

#endif
