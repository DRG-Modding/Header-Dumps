#ifndef UE4SS_SDK_WeaponDisplay_SMG_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_SMG_AmmoCount_HPP

class UWeaponDisplay_SMG_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fire;
    class UTextBlock* DATA_AmmoCurrent;
    class UTextBlock* DATA_AmmoTotal;
    class UTextBlock* TXT_Loading;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount(int32 EntryPoint);
};

#endif
