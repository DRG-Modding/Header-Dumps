#ifndef UE4SS_SDK_Options_Mouse_SeparateAxis_HPP
#define UE4SS_SDK_Options_Mouse_SeparateAxis_HPP

class UOptions_Mouse_SeparateAxis_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_Mouse_SeparateAxis(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_Not_PreBool_ReturnValue, FExecuteUbergraph_Options_Mouse_SeparateAxisK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_GetUseSeparateSensitivity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
};

#endif
