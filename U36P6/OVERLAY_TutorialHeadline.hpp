#ifndef UE4SS_SDK_OVERLAY_TutorialHeadline_HPP
#define UE4SS_SDK_OVERLAY_TutorialHeadline_HPP

class UOVERLAY_TutorialHeadline_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* Enter;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_152;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_C_153;
    class UMissionControl_MainDialogue_C* MissionControl_MainDialogue;
    class UDialogDataAsset* Shout;
    FDialogStruct Entry;
    class USoundBase* ShoutAudio;
    bool AudioLoaded;

    void OnLoaded_B1D6AAFE42DA1884720435B25AC72781(class UObject* Loaded);
    void Construct();
    void OnAudioFinished_Event();
    void OnFadeInFinished();
    void OnFadeOutFinished();
    void ExecuteUbergraph_OVERLAY_TutorialHeadline(int32 EntryPoint);
};

#endif
