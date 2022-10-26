#ifndef UE4SS_SDK_WeaponDisplay_Autocannon_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Autocannon_AmmoCount_HPP

class UWeaponDisplay_Autocannon_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ReloadStart;
    class UWidgetAnimation* ReloadLoop;
    class UWidgetAnimation* ReloadEnd;
    class UBorder* Border_3;
    class UTextBlock* DATA_AmmoCurrent;
    class UTextBlock* DATA_AmmoTotal;
    class UTextBlock* TEXT_Reloading;

    void SetClipCount(int32 Value);
    void OnReloadStarted();
    void OnReloadComplete();
    void SetTotalCount(int32 Value);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount(int32 EntryPoint);
};

#endif
