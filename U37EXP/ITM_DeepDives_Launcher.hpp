#ifndef UE4SS_SDK_ITM_DeepDives_Launcher_HPP
#define UE4SS_SDK_ITM_DeepDives_Launcher_HPP

class UITM_DeepDives_Launcher_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* BackgroundButton;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_106;
    class UBasic_Label_C* Data_CodeName;
    class UTextBlock* DATA_Quote;
    class UBasic_Label_C* Data_Region;
    class UImage* Image_103;
    class UImage* Image_210;
    class UImage* Image_227;
    class UImage* Image_465;
    class UImage* Image_612;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UITM_DeepDives_LaunchButton_C* ITM_DeepDives_LaunchButton;
    class UITM_DeepDives_RejoinButton_C* ITM_DeepDives_RejoinButton;
    class UITM_Gear_Bar_C* ITM_Gear_Bar;
    class UImage* MovieCanvas;
    class UOverlay* PersonalBestOverlay;
    class UBasic_Label_C* PersonalBestText;
    class UShadowBG_C* ShadowBG;
    class UShadowBG_C* ShadowBG_216;
    class UShadowBG_C* ShadowBG_C_0;
    class UShadowBG_C* ShadowBG_C_1;
    class UImage* StaticOverlay;
    class UMediaPlayer* MediaPlayer;
    class UMediaTexture* MediaTexture;
    class UMediaSource* Movie;
    bool ShowHardDeepDive;
    bool IsHovering;
    FITM_DeepDives_Launcher_COnStartMission OnStartMission;
    void OnStartMission(class UDeepDive* DeepDive);
    FITM_DeepDives_Launcher_COnJoinMission OnJoinMission;
    void OnJoinMission(bool EliteDeepDive);
    FITM_DeepDives_Launcher_COnRefresh OnRefresh;
    void OnRefresh(bool success);
    class UAudioComponent* HoverAudioComponent;

    void OnMovieLoaded();
    void SetBestTime();
    void SetPersonalBest(int32 TotalSeconds);
    void UpdateBiomeQuote(class UDeepDive* InDeepDive);
    void SetButtonsEnabled(bool bInIsEnabled, FText DisabledExplanation);
    void Refresh();
    class UDeepDive* GetDeepDive();
    void SetMovie(class UMediaSource* InMovie);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void SetHovered(bool InHovered);
    void BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature(FString OpenedUrl);
    void BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_ITM_DeepDives_Launcher(int32 EntryPoint);
    void OnRefresh__DelegateSignature(bool success);
    void OnJoinMission__DelegateSignature(bool EliteDeepDive);
    void OnStartMission__DelegateSignature(class UDeepDive* DeepDive);
};

#endif
