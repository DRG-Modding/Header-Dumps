#ifndef UE4SS_SDK_Options_HDR_HPP
#define UE4SS_SDK_Options_HDR_HPP

class UOptions_HDR_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_HDR(int32 EntryPoint, FExecuteUbergraph_Options_HDRK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, int32 CallFunc_GetCurrentHDRDisplayNits_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_IsHDREnabled_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue);
};

#endif
