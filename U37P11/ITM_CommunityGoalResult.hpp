#ifndef UE4SS_SDK_ITM_CommunityGoalResult_HPP
#define UE4SS_SDK_ITM_CommunityGoalResult_HPP

class UITM_CommunityGoalResult_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* BronzeImage;
    class USizeBox* CurrentSizebox;
    class UTextBlock* CurrentTextBlock;
    class UButton* FactionIconToolTip;
    class UTextBlock* GoalText;
    class UOverlay* GoldImage;
    class UImage* Icon;
    class UImage* ImageB;
    class UImage* ImageG;
    class UImage* ImageNT;
    class UImage* Images;
    class UOverlay* NoTierImage;
    class UOverlay* SilverImage;
    class UTextBlock* TierTextBlock;
    class UTextBlock* TitleTextBlock;
    class UTextBlock* TotalPointsTextBlock;
    class UTextBlock* TotalScoreTextBlock;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    class UCommunityGoalFaction* Faction;
    FVector2D TierIconSize;
    class UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip();
    void UpdateTitle();
    void UpdateIcon();
    void SetFaction(class UCommunityGoalFaction* Faction);
    void PreConstruct(bool IsDesignTime);
    void SetResult(int32 Score, int32 Tier, const FText& GoalName);
    void CheckFaction();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_CommunityGoalResult(int32 EntryPoint);
};

#endif
