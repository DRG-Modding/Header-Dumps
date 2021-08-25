// WidgetBlueprintGeneratedClass UI_PerkIcon.UI_PerkIcon_C
// Size: 0x255 (Inherited: 0x230)
struct UUI_PerkIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USizeBox* IconSizeBox; // 0x238(0x08)
	struct UImage* PerkIcon; // 0x240(0x08)
	struct UTextBlock* PerkLevel; // 0x248(0x08)
	float ImageDimension; // 0x250(0x04)
	bool ShowPerkLevel; // 0x254(0x01)

	void SetPerkLevelVisibility(bool InVisible); // Function UI_PerkIcon.UI_PerkIcon_C.SetPerkLevelVisibility
	void ShowPerkAs(struct UPerkAsset* InPerk, struct FLinearColor InIconColor, int32_t InRank); // Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkAs
	void ShowPerkByRank(struct UPerkAsset* InPerk, int32_t InRank); // Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkByRank
	void ShowAs(struct UTexture2D* InIconTexture, struct FLinearColor InIconColor, int32_t InRank); // Function UI_PerkIcon.UI_PerkIcon_C.ShowAs
	void SetDimensions(float InDiminsions); // Function UI_PerkIcon.UI_PerkIcon_C.SetDimensions
	void PreConstruct(bool IsDesignTime); // Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct
	void Set Perk Asset Last Claimed(struct UPerkAsset* PerkAsset); // Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed
	void ExecuteUbergraph_UI_PerkIcon(int32_t EntryPoint); // Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon
};

