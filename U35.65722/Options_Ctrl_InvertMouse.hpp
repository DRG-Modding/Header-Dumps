#ifndef UE4SS_SDK_Options_Ctrl_InvertMouse_HPP
#define UE4SS_SDK_Options_Ctrl_InvertMouse_HPP

class UOptions_Ctrl_InvertMouse_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_Ctrl_InvertMouse(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, FExecuteUbergraph_Options_Ctrl_InvertMouseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_GetInvertMouse_ReturnValue);
};

#endif
