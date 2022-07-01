#ifndef UE4SS_SDK_Options_Tab_UI_HPP
#define UE4SS_SDK_Options_Tab_UI_HPP

class UOptions_Tab_UI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option_C_0;
    class UBasic_Option_C* Basic_Option_C_1;
    class UBasic_Option_C* OPT_FPScounter;
    class UBasic_Option_C* OPT_NetInfo;
    class UBasic_Option_C* OPT_ProfanityFilter;
    class UBasic_Option_C* Opt_ShowInfoScreen;
    class UBasic_Option_C* OPT_ShowUIAnimations;
    class UBasic_Option_C* OPT_UIscale;
    class UOptions_Chat_FadeTime_C* Options_Chat_FadeTime;
    class UOptions_Chat_FontSize_C* Options_Chat_FontSize;
    class UOptions_HUD_ElementPresets_C* Options_HUD_ElementPresets;
    class UVerticalBox* Options_HudElements;
    class UOptions_ProfanityFilter_C* Options_ProfanityFilter;
    class UOptions_ShowFPS_C* Options_ShowFPS;
    class UOptions_ShowInfoScreen_C* Options_ShowInfoScreen;
    class UOptions_ShowNetInfo_C* Options_ShowNetInfo;
    class UOptions_ShowUIAnimations_C* Options_ShowUIAnimations;
    class UOptions_SoundOnChatMessage_C* Options_SoundOnChatMessage;
    class UOptions_UIScale_Slider_C* Options_UIScale_Slider;
    class UBasic_Option_C* PlaySoundOnChatMessage;
    FOptions_Tab_UI_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnIsUserGeneratedContentAllowed(const class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void ExecuteUbergraph_Options_Tab_UI(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
