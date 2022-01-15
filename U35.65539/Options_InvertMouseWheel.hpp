#ifndef UE4SS_SDK_Options_InvertMouseWheel_HPP
#define UE4SS_SDK_Options_InvertMouseWheel_HPP

class UOptions_InvertMouseWheel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_InvertMouseWheel(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_GetInvertMouseWheel_ReturnValue);
}

#endif
