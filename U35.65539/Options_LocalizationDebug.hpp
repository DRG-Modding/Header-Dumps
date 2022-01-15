#ifndef UE4SS_SDK_Options_LocalizationDebug_HPP
#define UE4SS_SDK_Options_LocalizationDebug_HPP

class UOptions_LocalizationDebug_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;
    int32 PreviousStatus;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_LocalizationDebug(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_IsDebugLocalizerModeEnabled_ReturnValue);
}

#endif
