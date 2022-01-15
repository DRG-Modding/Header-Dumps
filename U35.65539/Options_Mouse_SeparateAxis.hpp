#ifndef UE4SS_SDK_Options_Mouse_SeparateAxis_HPP
#define UE4SS_SDK_Options_Mouse_SeparateAxis_HPP

class UOptions_Mouse_SeparateAxis_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_Mouse_SeparateAxis(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_Not_PreBool_ReturnValue, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_GetUseSeparateSensitivity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
}

#endif
