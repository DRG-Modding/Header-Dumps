#ifndef UE4SS_SDK_Options_ShowSubtitles_HPP
#define UE4SS_SDK_Options_ShowSubtitles_HPP

class UOptions_ShowSubtitles_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnGameUserSettingsChanged();
    void ExecuteUbergraph_Options_ShowSubtitles(int32 EntryPoint, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, bool K2Node_ComponentBoundEvent_IsChecked, OnGameUserSettingsUINeedsUpdate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_3, bool CallFunc_GetShowSubtitles_ReturnValue);
}

#endif
