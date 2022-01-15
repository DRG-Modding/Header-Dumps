#ifndef UE4SS_SDK_Options_ShowFPS_HPP
#define UE4SS_SDK_Options_ShowFPS_HPP

class UOptions_ShowFPS_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void OnShowFPSChanged(bool NewValue);
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_ShowFPS(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, bool K2Node_CustomEvent_NewValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool CallFunc_GetShowFPS_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_GetShowFPS_ReturnValue_1, BoolConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
