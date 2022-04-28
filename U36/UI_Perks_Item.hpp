#ifndef UE4SS_SDK_UI_Perks_Item_HPP
#define UE4SS_SDK_UI_Perks_Item_HPP

class UUI_Perks_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UButton* ClickButton;
    class UBorder* SelectionBorder;
    class UUI_PerkBackground_C* UI_PerkBackground;
    class UUI_PerkIcon_C* UI_PerkIcon;
    class UPerkAsset* PerkAsset;
    int32 Tier;
    FUI_Perks_Item_COnHoverEnter OnHoverEnter;
    void OnHoverEnter(class UUI_Perks_Item_C* Widget);
    FUI_Perks_Item_COnHoverLeave OnHoverLeave;
    void OnHoverLeave(class UUI_Perks_Item_C* Widget);
    FUI_Perks_Item_COnClick OnClick;
    void OnClick(class UUI_Perks_Item_C* Widget);
    EPerkTierState PreviewState;
    bool PreviewHovered;
    bool PreviewSelected;
    bool ItemHovered;
    bool ItemSelected;
    bool ItemHighlighted;
    bool PreviewHighlighted;
    int32 Size;

    void SetIconSize(int32 InSize);
    void Set Selected(bool InSelected);
    void ShowAs(class UPerkAsset* InPerkAsset, int32 InRank, EPerkTierState InState, bool InHovered, bool InPerkHighlighted, bool InSelected);
    class UWidget* CreateToolTipWidget();
    void GetPerkAsset(class UPerkAsset*& PerkAsset, EPerkTierState& State, int32& Tier);
    void Refresh();
    void OnPerkClaimed(class UPerkAsset* Perk, int32 ClaimedTier);
    void Set Hovered(bool Hovered);
    void Construct();
    void OnPerkHighlighted_Event(class UPerkAsset* Perk, bool IsHighlighted);
    void PreConstruct(bool IsDesignTime);
    void OnPerkPointsChanged(int32 PerkPoints, int32 Change);
    void OnPingFinished();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Perks_Item(int32 EntryPoint);
    void OnClick__DelegateSignature(class UUI_Perks_Item_C* Widget);
    void OnHoverLeave__DelegateSignature(class UUI_Perks_Item_C* Widget);
    void OnHoverEnter__DelegateSignature(class UUI_Perks_Item_C* Widget);
};

#endif
