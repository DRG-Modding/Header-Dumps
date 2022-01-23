#ifndef UE4SS_SDK_Options_FullScreen_UWP_HPP
#define UE4SS_SDK_Options_FullScreen_UWP_HPP

class UOptions_FullScreen_UWP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    class UBasic_CheckBox_C* LockMouseCheckbox;
    bool FromWindowToFullscreen;

    void Construct();
    void UINeedsUpdate();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void BndEvt__LockMouseCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_FullScreen_UWP(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, TEnumAsByte<EWindowMode::Type> Temp_byte_Variable, TEnumAsByte<EWindowMode::Type> Temp_byte_Variable_1, TEnumAsByte<EWindowMode::Type> Temp_byte_Variable_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, TEnumAsByte<EWindowMode::Type> CallFunc_GetFullscreenModeToBeApplied_ReturnValue, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, bool K2Node_Select_Default, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, TEnumAsByte<EWindowMode::Type> K2Node_Select_Default_1, TEnumAsByte<EWindowMode::Type> CallFunc_GetFullscreenModeToBeApplied_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TEnumAsByte<EWindowMode::Type> CallFunc_GetFullscreenMode_ReturnValue, int32 Temp_int_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TEnumAsByte<EWindowMode::Type> Temp_byte_Variable_3, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetCheckForOutOfBounds_ReturnValue, int32 K2Node_Select_Default_2, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, FExecuteUbergraph_Options_FullScreen_UWPK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
