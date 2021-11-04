// WidgetBlueprintGeneratedClass UI_Perks_Buy.UI_Perks_Buy_C
// Size: 0x2cc (Inherited: 0x230)
struct UUI_Perks_Buy_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimBuy; // 0x238(0x08)
	UWidgetAnimation* ButtonPulse; // 0x240(0x08)
	UBasic_FlatButton_C* BTN_Buy; // 0x248(0x08)
	UBasic_FlatButton_C* BTN_CantAfford; // 0x250(0x08)
	UBasic_FlatButton_C* BTN_Locked; // 0x258(0x08)
	UBasic_FlatButton_C* BTN_Unlocked; // 0x260(0x08)
	UWidgetSwitcher* ButtonSwitcher; // 0x268(0x08)
	UHorizontalBox* CostBox; // 0x270(0x08)
	UTextBlock* CostText; // 0x278(0x08)
	URichTextSizable* DescriptionRichText; // 0x280(0x08)
	UImage* FlashImage; // 0x288(0x08)
	UTextBlock* TitleText; // 0x290(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x298(0x08)
	UUI_PerkIcon_C* UI_PerkIcon; // 0x2a0(0x08)
	UPerkAsset* Perk; // 0x2a8(0x08)
	int32_t Tier; // 0x2b0(0x04)
	FMulticastInlineDelegate OnPerkClaimed; // 0x2b8(0x10)
	int32_t Rank; // 0x2c8(0x04)

	void CanBuyPerk(bool Can Buy);
	void SetPerk(UPerkAsset* InPerk, int32_t InTier);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_FlatButton_C* Button);
	void Construct();
	void OnPerkPointsChanged(int32_t PerkPoints, int32_t Change);
	void Buy Selected Perk();
	void ExecuteUbergraph_UI_Perks_Buy(int32_t EntryPoint);
	void OnPerkClaimed__DelegateSignature();
};

