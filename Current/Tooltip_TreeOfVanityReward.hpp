#ifndef UE4SS_SDK_Tooltip_TreeOfVanityReward_HPP
#define UE4SS_SDK_Tooltip_TreeOfVanityReward_HPP

class UTooltip_TreeOfVanityReward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TurnRed;
    class UProgressBar* Claim_Progress;
    class UImage* Image_NotEnoughTokens;
    class URichTextSizable* RichTextSizable_280;
    class UTOOLTIP_Season_Reward_C* TOOLTIP_Season_Reward;
    class UVerticalBox* VBox_ToV_Info;
    ESeasonVisibilityState State;

    void PreConstruct(bool IsDesignTime);
    void SetState(ESeasonVisibilityState State);
    void UpdateHoldTime(float InPercent);
    void PlayNotEnoughTokens();
    void ExecuteUbergraph_Tooltip_TreeOfVanityReward(int32 EntryPoint);
};

#endif
