#ifndef UE4SS_SDK_UI_Perks_View_HPP
#define UE4SS_SDK_UI_Perks_View_HPP

class UUI_Perks_View_C : public UUI_KPI_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimLoadoutHint;
    class UBasic_ButtonScalable2_C* ButtonOkHint;
    class UTextBlock* FirstPerkHeader;
    class UBackgroundBlur* HintBlur;
    class UBorder* PerkInfoBG;
    class UBorder* PerkInfoOutline;
    class UBorder* PerkPointsBG;
    class UBorder* PerkPointsOutline;
    class UBorder* PerksBG;
    class UBorder* PerksOutline;
    class UHorizontalBox* TierBox;
    class UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints;
    class UUI_Perks_Buy_C* UI_Perks_Buy;
    class UUI_Perks_Item_C* SelectedPerk;
    TArray<class UPerkAsset*> AllPerks;
    bool FirstPerkPurchase;

    void SetColors();
    void HandleMouseEvent(const FPointerEvent& InMouseEvent, bool InUp, bool& OutHandled);
    void HandleKeyEvent(FKeyEvent InKeyEvent, bool InUp, bool& OutHandled);
    void SelectPerkWidget(class UUI_Perks_Item_C* PerkWidget);
    void PreConstruct(bool IsDesignTime);
    void OnPerkClicked_Event(class UUI_Perks_Item_C* PerkWidget);
    void BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature();
    void BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Toggle Loadout Hint(bool Visible);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_UI_Perks_View(int32 EntryPoint);
};

#endif
