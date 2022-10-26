#ifndef UE4SS_SDK_UI_Perks_Buy_HPP
#define UE4SS_SDK_UI_Perks_Buy_HPP

class UUI_Perks_Buy_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBuy;
    class UWidgetAnimation* ButtonPulse;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UBasic_FlatButton_C* BTN_Buy;
    class UBasic_FlatButton_C* BTN_CantAfford;
    class UBasic_FlatButton_C* BTN_Locked;
    class UBasic_FlatButton_C* BTN_Unlocked;
    class UWidgetSwitcher* ButtonSwitcher;
    class UHorizontalBox* CostBox;
    class UTextBlock* CostText;
    class URichTextSizable* DescriptionRichText;
    class UTextBlock* TitleText;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UUI_PerkIcon_C* UI_PerkIcon;
    class UPerkAsset* Perk;
    int32 Tier;
    FUI_Perks_Buy_COnPerkClaimed OnPerkClaimed;
    void OnPerkClaimed();
    int32 Rank;

    void CanBuyPerk(bool& Can Buy);
    void SetPerk(class UPerkAsset* InPerk, int32 InTier);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
    void Construct();
    void OnPerkPointsChanged(int32 PerkPoints, int32 Change);
    void Buy Selected Perk();
    void ExecuteUbergraph_UI_Perks_Buy(int32 EntryPoint);
    void OnPerkClaimed__DelegateSignature();
};

#endif
