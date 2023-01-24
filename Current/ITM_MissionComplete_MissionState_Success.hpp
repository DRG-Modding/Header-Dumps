#ifndef UE4SS_SDK_ITM_MissionComplete_MissionState_Success_HPP
#define UE4SS_SDK_ITM_MissionComplete_MissionState_Success_HPP

class UITM_MissionComplete_MissionState_Success_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimReward;
    class UWidgetAnimation* StateTextAppear;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UOverlay* CompletedOverlay;
    class UTextBlock* DATA_MissionState;
    class UTextBlock* DATA_MissionState_Shadow;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_5;
    class UImage* Image_6;
    class UImage* Image_7;
    class UImage* Image_8;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UITM_MatrixCore_C* ITM_MatrixCore;
    class UTextBlock* MatrixCoreCategory;
    class UBorder* MatrixCoreInfoBox;
    class UTextBlock* MatrixCoreName;
    class UOverlay* MatrixCoreOverlay;
    class UImage* MissionState_BGglow;
    class UImage* MissionState_BGshadow;
    class UImage* NoiseImage;
    class UVerticalBox* OverclockOwnerBox;
    class UOverlay* Overlay_3;
    class UUI_Forge_Schematic_OwnerIcon_C* UI_Forge_Schematic_OwnerIcon;
    class UUI_RunningText_C* UI_RunningText;
    bool MissionFailed;
    FText StatusText;
    float StartDelay;
    FITM_MissionComplete_MissionState_Success_COnAnnouncementFinished OnAnnouncementFinished;
    void OnAnnouncementFinished();
    class USchematic* Reward;
    float RewardProgress;

    void ClearPreview();
    void UpdateRewardsGFX();
    void SetRewardProgress(float InRewardProgress);
    void SetStatusText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnimFinishedEvent();
    void BndEvt__UI_RunningText_K2Node_ComponentBoundEvent_0_OnFinished__DelegateSignature();
    void ExecuteUbergraph_ITM_MissionComplete_MissionState_Success(int32 EntryPoint);
    void OnAnnouncementFinished__DelegateSignature();
};

#endif
