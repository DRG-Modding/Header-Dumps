#ifndef UE4SS_SDK_Options_UseStreamerProgram_HPP
#define UE4SS_SDK_Options_UseStreamerProgram_HPP

class UOptions_UseStreamerProgram_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void SettingsChanged();
    void ExecuteUbergraph_Options_UseStreamerProgram(int32 EntryPoint, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool CallFunc_GetUseStreamerProgram_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_BoolBool_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_GetUseStreamerProgram_ReturnValue_1);
}

#endif
