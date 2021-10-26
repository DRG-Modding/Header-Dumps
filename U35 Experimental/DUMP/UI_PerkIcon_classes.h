// WidgetBlueprintGeneratedClass UI_PerkIcon.UI_PerkIcon_C
// Size: 0x255 (Inherited: 0x230)
struct UUI_PerkIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USizeBox* IconSizeBox; // 0x238(0x08)
	UImage* PerkIcon; // 0x240(0x08)
	UTextBlock* PerkLevel; // 0x248(0x08)
	float ImageDimension; // 0x250(0x04)
	bool ShowPerkLevel; // 0x254(0x01)

	void SetPerkLevelVisibility(bool InVisible);
	void ShowPerkAs(UPerkAsset* InPerk, FLinearColor InIconColor, int32_t InRank);
	void ShowPerkByRank(UPerkAsset* InPerk, int32_t InRank);
	void ShowAs(UTexture2D* InIconTexture, FLinearColor InIconColor, int32_t InRank);
	void SetDimensions(float InDiminsions);
	void PreConstruct(bool IsDesignTime);
	void Set Perk Asset Last Claimed(UPerkAsset* PerkAsset);
	void ExecuteUbergraph_UI_PerkIcon(int32_t EntryPoint);
};

