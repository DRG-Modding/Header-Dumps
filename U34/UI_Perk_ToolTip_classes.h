// WidgetBlueprintGeneratedClass UI_Perk_ToolTip.UI_Perk_ToolTip_C
// Size: 0x2d0 (Inherited: 0x250)
struct UUI_Perk_ToolTip_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* FadeIntro; // 0x258(0x08)
	struct UWidgetAnimation* FancyIntro; // 0x260(0x08)
	struct UImage* BackgroundShadow; // 0x268(0x08)
	struct UBorder* Border_152; // 0x270(0x08)
	struct UBorder* Border_154; // 0x278(0x08)
	struct UBorder* Border_156; // 0x280(0x08)
	struct UHorizontalBox* CostBox; // 0x288(0x08)
	struct UTextBlock* CostText; // 0x290(0x08)
	struct UOverlay* Holder_CostBox; // 0x298(0x08)
	struct URichTextSizable* PerkDescriptionRich; // 0x2a0(0x08)
	struct UTextBlock* Perktitle; // 0x2a8(0x08)
	struct UUI_PerkIcon_C* UI_PerkIcon; // 0x2b0(0x08)
	struct UUI_Perks_Item_C* PerkWidget; // 0x2b8(0x08)
	struct UPerkAsset* PerkAsset; // 0x2c0(0x08)
	int32_t Rank; // 0x2c8(0x04)
	int32_t Tier; // 0x2cc(0x04)

	void PreConstruct(bool IsDesignTime); // Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct
	void OnPerkClaimed_Event(struct UPerkAsset* Perk, int32_t ClaimedTier); // Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event
	void SetPerkAsset(struct UPerkAsset* PerkAsset, int32_t Rank, bool ShowRank); // Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset
	void FancyDelayedIntro(); // Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FancyDelayedIntro
	void FadeInIntro(); // Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FadeInIntro
	void Show Rank(bool InShowRank); // Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Show Rank
	void StopAnimations(); // Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.StopAnimations
	void ExecuteUbergraph_UI_Perk_ToolTip(int32_t EntryPoint); // Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip
};

