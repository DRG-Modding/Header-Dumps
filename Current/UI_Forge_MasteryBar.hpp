#ifndef UE4SS_SDK_UI_Forge_MasteryBar_HPP
#define UE4SS_SDK_UI_Forge_MasteryBar_HPP

class UUI_Forge_MasteryBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimToolTip;
    class UWidgetAnimation* AnimResetReward;
    class UWidgetAnimation* AnimRewardPopUp;
    class UWidgetAnimation* AnimCount;
    class UBorder* BorderProgressBarXP;
    class UBasic_Menu_MinimalWindow_C* Box_ToolTip;
    class UITM_BigButton_C* ClaimButton;
    class UITM_MatrixCore_C* ForgeLevelReward;
    class UProgressBar* GhostProgressBar;
    class UProgressBar* LevelProgressBar;
    class UUI_Forge_LevelIcon_C* PlayerForgeLevel;
    class URichTextBlock* RichTextBlock_30;
    ESchematicType Reward;
    float StartXP;
    float EndXP;
    float LerpProgress;
    bool LevelIncreased;
    FUI_Forge_MasteryBar_COnCountingFinished OnCountingFinished;
    void OnCountingFinished(uint8 Reward);
    FUI_Forge_MasteryBar_COnClaimClicked OnClaimClicked;
    void OnClaimClicked(int32 InLevel, int32 InSeed);
    bool ClaimButtonEnabled;
    bool MouseHovering;

    void SetClaimButtonEnabled(bool InEnabled);
    void SetRewardFromLevel(int32 InLevel);
    void StartCounting(int32 InStartLevel, float InStartXP);
    void SetLerpProgress(float Value);
    void SetFromSaveGame(bool animate);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PlayRewardAnim();
    void RewardPopUpStarted();
    void FinishedCounting();
    void ResetReward();
    void StartedCounting();
    void BndEvt__UI_Forge_MasteryBar_ClaimButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_Forge_MasteryBar(int32 EntryPoint);
    void OnClaimClicked__DelegateSignature(int32 InLevel, int32 InSeed);
    void OnCountingFinished__DelegateSignature(uint8 Reward);
};

#endif
