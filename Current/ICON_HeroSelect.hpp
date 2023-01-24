#ifndef UE4SS_SDK_ICON_HeroSelect_HPP
#define UE4SS_SDK_ICON_HeroSelect_HPP

class UICON_HeroSelect_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* BTN_Retire;
    class UCanvasPanel* CanvasPanel_1;
    class UUI_MaskedImage_C* CharacterIcon;
    class UTextBlock* ClassName;
    class UBorder* ClassName_InnerBorder;
    class UBorder* ClassName_OuterBorder;
    class UImage* ExtensionBG;
    class UImage* ExtensionFiller;
    class UImage* ICON_BG;
    class UImage* Icon_Border;
    class UITM_SeasonChallengeIcon_C* Icon_Challenge;
    class UImage* Icon_Selection;
    class UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel;
    class UITM_RetirementBadge_C* ITM_RetirementBadge;
    class UOverlay* Overlay_0;
    class UCharSelect_HeroSelect_Dots_C* PlayerDots;
    class UWidgetSwitcher* PromotionSwitcher;
    class URichTextBlock* PromotionText;
    class UUI_RoundedImage_C* UI_RoundedImage;
    class UPlayerCharacterID* characterID;
    FICON_HeroSelect_COnCharacterSelected OnCharacterSelected;
    void OnCharacterSelected(class UPlayerCharacterID* Character);
    FICON_HeroSelect_COnHovered OnHovered;
    void OnHovered(class UPlayerCharacterID* Character);
    bool ShowRetirement;
    class UBasic_ToolTip_C* ToolTip;
    FICON_HeroSelect_COnUnhovered OnUnhovered;
    void OnUnhovered(class UPlayerCharacterID* characterID);
    FICON_HeroSelect_COnRetirementHovered OnRetirementHovered;
    void OnRetirementHovered(class UPlayerCharacterID* Character);
    FICON_HeroSelect_COnRetirementUnhovered OnRetirementUnhovered;
    void OnRetirementUnhovered(class UPlayerCharacterID* Character);
    FICON_HeroSelect_COnRetireClicked OnRetireClicked;
    void OnRetireClicked(class UPlayerCharacterID* Character);
    class AFSDPlayerState* PlayerState;
    bool OnlyShowCharacterNotInUse;
    bool ShouldBeEnabled;
    class APlayerState* MyState;
    TArray<class APlayerState*> States;
    class APlayerCharacter* PlayerCharacter;
    bool IsSelectable;
    bool CanPromote;
    bool Hovered;

    void InternalUpdateHovered();
    bool IsEligibleForPromotion();
    bool IsInteractable();
    void GetSelectedClass(class UPlayerCharacterID*& DesiredCharacterClass);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetScale(float Scale);
    void UpdateSelected();
    void IsSelected(bool& IsSelected);
    void SetCharacterClass(class UPlayerCharacterID* Class);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void On Click();
    void SelectedCharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
    void OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState);
    void Init(class UPlayerCharacterID* Character);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature();
    void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature();
    void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature();
    void Update Retirement Button();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetChallengeIcon(bool InHovered, class UTexture2D* Icon, FLinearColor Color);
    void testselectcharacter();
    void ExecuteUbergraph_ICON_HeroSelect(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UPlayerCharacterID* characterID);
    void OnRetireClicked__DelegateSignature(class UPlayerCharacterID* Character);
    void OnRetirementUnhovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnRetirementHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character);
};

#endif
