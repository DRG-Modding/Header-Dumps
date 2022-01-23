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
    class UOptions_CameraShake_C* Options_CameraShake;
    class UOptions_FOV_C* Options_FOV;
    class UOptions_Headbob_C* Options_Headbob;
    class UOptions_Language_C* Options_Language;
    class UOptions_LocalizationDebug_C* Options_LocalizationDebug;
    class UOptions_PhotosensitivityMode_C* Options_PhotosensitivityMode;
    class UOptions_PreventLatejoinCharacterDuplication_C* Options_PreventLatejoinCharacterDuplication;
    class UOptions_ShowSubtitles_C* Options_ShowSubtitles;
    class UOptions_TutorialHints_C* Options_TutorialHints;
    class UOptions_UseStreamerProgram_C* Options_UseStreamerProgram;
    class UOptions_GameServerName_C* UI_GameServerName;
    FOptions_Tab_Gameplay_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature(FLocalizedLanguageInfo Selected Language);
    void ExecuteUbergraph_Options_Tab_Gameplay(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, EFSDTargetPlatform Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, EFSDTargetPlatform Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, ESlateVisibility Temp_byte_Variable_18, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_19, ESlateVisibility Temp_byte_Variable_20, bool Temp_bool_Variable_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_HasContentCreatorEdition_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, ESlateVisibility Temp_byte_Variable_21, ESlateVisibility K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3, FLocalizedLanguageInfo K2Node_ComponentBoundEvent_Selected_Language, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Less_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default_4, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default_5);
    void SettingsChanged__DelegateSignature();
};

#endif
