#ifndef UE4SS_SDK_Options_ProfanityFilter_HPP
#define UE4SS_SDK_Options_ProfanityFilter_HPP

class UOptions_ProfanityFilter_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnGameUserSettingsChanged();
    void ExecuteUbergraph_Options_ProfanityFilter(int32 EntryPoint, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, OnGameUserSettingsUINeedsUpdate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_ComponentBoundEvent_IsChecked, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_3, bool CallFunc_GetUseProfanityFilter_ReturnValue);
}

#endif
