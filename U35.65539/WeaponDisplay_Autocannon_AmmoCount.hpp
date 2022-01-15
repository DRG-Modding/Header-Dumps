#ifndef UE4SS_SDK_WeaponDisplay_Autocannon_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Autocannon_AmmoCount_HPP

class UWeaponDisplay_Autocannon_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ReloadStart;
    UWidgetAnimation* ReloadLoop;
    UWidgetAnimation* ReloadEnd;
    UBorder* Border_3;
    UTextBlock* DATA_AmmoCurrent;
    UTextBlock* DATA_AmmoTotal;
    UTextBlock* TEXT_Reloading;

    void SetClipCount(int32 Value);
    void OnReloadStarted();
    void OnReloadComplete();
    void SetTotalCount(int32 Value);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount(int32 EntryPoint, int32 K2Node_Event_value_1, FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_Event_value, FText CallFunc_Conv_IntToText_ReturnValue_1);
}

#endif
