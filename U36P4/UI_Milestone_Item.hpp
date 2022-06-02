#ifndef UE4SS_SDK_UI_Milestone_Item_HPP
#define UE4SS_SDK_UI_Milestone_Item_HPP

class UUI_Milestone_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ClaimIdle;
    class UWidgetAnimation* AnimHover;
    class UWidgetAnimation* ClaimableAnim;
    class UWidgetAnimation* CompletedAnim;
    class UWidgetAnimation* ClaimAnim;
    class UImage* BGgradient;
    class UHorizontalBox* BigStarRewardBar;
    class UBlurBackground_C* BlurBackground;
    class UCanvasPanel* ClaimPanel;
    class UTextBlock* ClaimText;
    class UImage* Image;
    class UImage* Image_491;
    class UBorder* ItemBorder;
    class UImage* KPI_CategoryImage;
    class UImage* KPI_Image;
    class UProgressBar* KPI_Progress;
    class UTextBlock* KPI_TextProgress;
    class UTextBlock* KPI_Title;
    class UTextBlock* PerkPointsReward;
    class UHorizontalBox* SmallStarRewardBar;
    class UUI_Milestone_Tier_C* UI_Milestone_Tier;
    class UMilestoneAsset* Milestone;
    int32 TierPreview;
    bool ItemClaimable;
    bool ItemHovered;
    bool ButtonDown;
    FUI_Milestone_Item_COnItemClaimableChanged OnItemClaimableChanged;
    void OnItemClaimableChanged(class UUI_Milestone_Item_C* Milestone Item);
    FSlateBrush NoImageBrush;
    float AnimClaimProgress;

    void UpdateRewardStar(int32 Index);
    void GetIsClaimable(bool& ItemClaimable);
    void GetIcon(class UTexture2D*& Icon);
    void SetCategoryFilter(TArray<class UTexture2D*>& Filter);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetHovered(bool Hovered);
    void SetProgress(int32 Tier, float Progress, float CurrentCount, float TargetCount, bool IsClaimable);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateItem();
    void OnCountChanged_Event(class UObject* WorldContext, class UMissionStat* MissionStat, float Value);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Claim KPI();
    void CreateRewardStars(int32 StarCount);
    void SetAnimClaimProgress(float Progress);
    void OnClaimAnimFinished();
    void OnCompletedAnimFinished();
    void OnCompletedAnimStarted();
    void ExecuteUbergraph_UI_Milestone_Item(int32 EntryPoint);
    void OnItemClaimableChanged__DelegateSignature(class UUI_Milestone_Item_C* Milestone Item);
};

#endif
