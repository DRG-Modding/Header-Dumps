#ifndef UE4SS_SDK_ITM_TreeOfVanity_Node_HPP
#define UE4SS_SDK_ITM_TreeOfVanity_Node_HPP

class UITM_TreeOfVanity_Node_C : public UTreeOfVanityItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BoughtBigAnim;
    class UWidgetAnimation* BoughtAnim;
    class UWidgetAnimation* GlowAnim;
    class UWidgetAnimation* NodeUnlocked;
    class UButton* Button_Outer;
    class UImage* Image_Editor_CharClass;
    class UImage* Image_Empty_BG;
    class UImage* Image_Empty_Center;
    class UImage* Image_Glow;
    class UImage* Image_Glow_1;
    class UImage* Image_IsPlaceHolder;
    class UImage* Image_LockedShade;
    class UImage* Image_NormalCheckmark;
    class UImage* Image_TypeOutline;
    class UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle;
    class UOverlay* Overlay_Empty;
    class UOverlay* Overlay_Glow;
    class UScaleBox* ScaleBox_Glow;
    class UTextBlock* TextBlock_Details;
    FITM_TreeOfVanity_Node_CNodeClicked NodeClicked;
    void NodeClicked(class UITM_TreeOfVanity_Node_C* Node);
    FVector2D NormalNodeSize;
    FVector2D PrimaryNodeSize;
    FITM_TreeOfVanity_Node_COnHover OnHover;
    void OnHover(class UITM_TreeOfVanity_Node_C* Node);
    FITM_TreeOfVanity_Node_COnUnhover OnUnhover;
    void OnUnhover(class UITM_TreeOfVanity_Node_C* Node);
    bool IsEditing;
    bool IsPlaceholder;
    FText Title;
    class UPlayerCharacterID* OptionalCharacterID;
    ESeasonVisibilityState NodeState;
    float HoldTime;
    bool IsHolding;
    float TotalHoldDuration;
    class UTooltip_TreeOfVanityReward_C* CurrTooltip;
    class UAudioComponent* HoldSound;

    void UpdateBoughtLook();
    void SetInfo(FText Title, class UPlayerCharacterID* OptionalCharacterID);
    void AdjacentNodeBought();
    void Node Bought();
    class UWidget* Get_ToolTipWidget();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnDataUpdated();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetIsEditing();
    void SetSelectedEditor(bool IsSelected);
    void SetGlow(bool ShouldGlow);
    void ShowDetailsText(bool InShow);
    void SetUnknown();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ITM_TreeOfVanity_Node(int32 EntryPoint);
    void OnUnhover__DelegateSignature(class UITM_TreeOfVanity_Node_C* Node);
    void OnHover__DelegateSignature(class UITM_TreeOfVanity_Node_C* Node);
    void NodeClicked__DelegateSignature(class UITM_TreeOfVanity_Node_C* Node);
};

#endif
