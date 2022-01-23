#ifndef UE4SS_SDK_Options_ProfanityFilter_HPP
#define UE4SS_SDK_Options_ProfanityFilter_HPP

class UOptions_ProfanityFilter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnGameUserSettingsChanged();
    void ExecuteUbergraph_Options_ProfanityFilter(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, FExecuteUbergraph_Options_ProfanityFilterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_3, bool CallFunc_GetUseProfanityFilter_ReturnValue);
};

#endif
