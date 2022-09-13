#ifndef UE4SS_SDK_MissionControl_MainDialogue_HPP
#define UE4SS_SDK_MissionControl_MainDialogue_HPP

class UMissionControl_MainDialogue_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIn;
    class UImage* BorderInner;
    class UImage* BorderOuter;
    class UUI_MaskedImage_C* CharacterIcon;
    class UTextBlock* ClassLabel;
    class UImage* Image_108;
    class UImage* Image_109;
    class UMissionControl_TextAnimator_C* MissionControl_TextAnimator;
    class UDialogDataAsset* PreviewShout;
    bool ManuallyControlled;
    FText Text;
    float Duration;
    float StartTime;
    FTimerHandle TickHandle;
    class UAudioComponent* ManualSpeakComponent;
    FTimerHandle HideHandle;

    void SetPreview(class UDialogDataAsset* PreviewShout);
    void Reset();
    void SetProgress(float Progress, bool& Finished);
    void TickRunningText();
    void StopRunningText();
    void SpeakEntryManually(FDialogStruct Entry, float& Duration, class UAudioComponent*& AudioComponent);
    void SpeakManually(class UDialogDataAsset* MissionShout, float& Duration, class UAudioComponent*& AudioComponent);
    void Start Running Text(FText Text, float Duration);
    void OnMissionShout(const FText& Text, float Duration);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnMissionShoutEnd();
    void HideMissionShout();
    void ExecuteUbergraph_MissionControl_MainDialogue(int32 EntryPoint);
};

#endif
