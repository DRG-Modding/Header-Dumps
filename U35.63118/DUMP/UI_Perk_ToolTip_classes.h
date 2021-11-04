// WidgetBlueprintGeneratedClass UI_Perk_ToolTip.UI_Perk_ToolTip_C
// Size: 0x2d0 (Inherited: 0x250)
struct UUI_Perk_ToolTip_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* FadeIntro; // 0x258(0x08)
	UWidgetAnimation* FancyIntro; // 0x260(0x08)
	UImage* BackgroundShadow; // 0x268(0x08)
	UBorder* Border_152; // 0x270(0x08)
	UBorder* Border_154; // 0x278(0x08)
	UBorder* Border_156; // 0x280(0x08)
	UHorizontalBox* CostBox; // 0x288(0x08)
	UTextBlock* CostText; // 0x290(0x08)
	UOverlay* Holder_CostBox; // 0x298(0x08)
	URichTextSizable* PerkDescriptionRich; // 0x2a0(0x08)
	UTextBlock* Perktitle; // 0x2a8(0x08)
	UUI_PerkIcon_C* UI_PerkIcon; // 0x2b0(0x08)
	UUI_Perks_Item_C* PerkWidget; // 0x2b8(0x08)
	UPerkAsset* PerkAsset; // 0x2c0(0x08)
	int32_t Rank; // 0x2c8(0x04)
	int32_t Tier; // 0x2cc(0x04)

	void PreConstruct(bool IsDesignTime);
	void OnPerkClaimed_Event(UPerkAsset* Perk, int32_t ClaimedTier);
	void SetPerkAsset(UPerkAsset* PerkAsset, int32_t Rank, bool ShowRank);
	void FancyDelayedIntro();
	void FadeInIntro();
	void Show Rank(bool InShowRank);
	void StopAnimations();
	void ExecuteUbergraph_UI_Perk_ToolTip(int32_t EntryPoint);
};

