// WidgetBlueprintGeneratedClass UI_Perks_Buy.UI_Perks_Buy_C
// Size: 0x2cc (Inherited: 0x230)
struct UUI_Perks_Buy_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimBuy; // 0x238(0x08)
	struct UWidgetAnimation* ButtonPulse; // 0x240(0x08)
	struct UBasic_FlatButton_C* BTN_Buy; // 0x248(0x08)
	struct UBasic_FlatButton_C* BTN_CantAfford; // 0x250(0x08)
	struct UBasic_FlatButton_C* BTN_Locked; // 0x258(0x08)
	struct UBasic_FlatButton_C* BTN_Unlocked; // 0x260(0x08)
	struct UWidgetSwitcher* ButtonSwitcher; // 0x268(0x08)
	struct UHorizontalBox* CostBox; // 0x270(0x08)
	struct UTextBlock* CostText; // 0x278(0x08)
	struct URichTextSizable* DescriptionRichText; // 0x280(0x08)
	struct UImage* FlashImage; // 0x288(0x08)
	struct UTextBlock* TitleText; // 0x290(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x298(0x08)
	struct UUI_PerkIcon_C* UI_PerkIcon; // 0x2a0(0x08)
	struct UPerkAsset* Perk; // 0x2a8(0x08)
	int32_t Tier; // 0x2b0(0x04)
	char UnknownData_2B4[0x4]; // 0x2b4(0x04)
	struct FMulticastInlineDelegate OnPerkClaimed; // 0x2b8(0x10)
	int32_t Rank; // 0x2c8(0x04)

	void CanBuyPerk(bool Can Buy); // Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk
	void SetPerk(struct UPerkAsset* InPerk, int32_t InTier); // Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk
	void PreConstruct(bool IsDesignTime); // Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct
	void BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UBasic_FlatButton_C* Button); // Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void Construct(); // Function UI_Perks_Buy.UI_Perks_Buy_C.Construct
	void OnPerkPointsChanged(int32_t PerkPoints, int32_t Change); // Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged
	void Buy Selected Perk(); // Function UI_Perks_Buy.UI_Perks_Buy_C.Buy Selected Perk
	void ExecuteUbergraph_UI_Perks_Buy(int32_t EntryPoint); // Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy
	void OnPerkClaimed__DelegateSignature(); // Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature
};

