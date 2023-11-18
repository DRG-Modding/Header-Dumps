#ifndef UE4SS_SDK_Options_Tab_Gameplay_HPP
#define UE4SS_SDK_Options_Tab_Gameplay_HPP

class UOptions_Tab_Gameplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option_C_0;
    class UBasic_Option_C* Basic_Option_CameraShakes;
    class UBasic_Option_C* Basic_Option_Photosensitivity;
    class UUI_AdvancedLabel_C* CommunityLabel;
    class UBasic_Option_C* OPT_FOV;
    class UBasic_Option_C* OPT_HeadBOB;
    class UBasic_Option_C* OPT_Language;
    class UBasic_Option_C* OPT_LanguageDebug;
    class UBasic_Option_C* OPT_PreventLatejoinCharacterDuplication;
    class UBasic_Option_C* OPT_Servername;
    class UBasic_Option_C* OPT_StreamerTag;
    class UBasic_Option_C* OPT_TutorialHiints;
    class UBasic_Option_C* OPT_WeaponSway;
    class UOption_ColorDeficieny_C* Option_ColorDeficieny;
    class UOptions_CameraShake_C* Options_CameraShake;
    class UOptions_FOV_C* Options_FOV;
    class UOptions_Headbob_C* Options_Headbob;
    class UOptions_HoldToBreakImmobilization_C* Options_HoldToBreakImmobilization;
    class UOptions_HoldToFire_C* Options_HoldToFire;
    class UOptions_Language_C* Options_Language;
    class UOptions_LocalizationDebug_C* Options_LocalizationDebug;
    class UOptions_PhotosensitivityMode_C* Options_PhotosensitivityMode;
    class UOptions_PreventLatejoinCharacterDuplication_C* Options_PreventLatejoinCharacterDuplication;
    class UOptions_ShowSubtitles_C* Options_ShowSubtitles;
    class UOptions_TutorialHints_C* Options_TutorialHints;
    class UOptions_UseStreamerProgram_C* Options_UseStreamerProgram;
    class UOptions_WeaponSway_C* Options_WeaponSway;
    class UOptions_GameServerName_C* UI_GameServerName;
    FOptions_Tab_Gameplay_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature(FLocalizedLanguageInfo Selected Language);
    void ExecuteUbergraph_Options_Tab_Gameplay(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
