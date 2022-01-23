#ifndef UE4SS_SDK_Options_ShowSubtitles_HPP
#define UE4SS_SDK_Options_ShowSubtitles_HPP

class UOptions_ShowSubtitles_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnGameUserSettingsChanged();
    void ExecuteUbergraph_Options_ShowSubtitles(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, bool K2Node_ComponentBoundEvent_IsChecked, FExecuteUbergraph_Options_ShowSubtitlesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_3, bool CallFunc_GetShowSubtitles_ReturnValue);
};

#endif
