// WidgetBlueprintGeneratedClass UI_PerkBackground.UI_PerkBackground_C
// Size: 0x289 (Inherited: 0x230)
struct UUI_PerkBackground_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BackgroundBorder_Image; // 0x238(0x08)
	struct UImage* BackgroundFill_Image; // 0x240(0x08)
	struct UUI_MaskedCanvas_C* BackgroundMask_Canvas; // 0x248(0x08)
	struct USizeBox* BackgroundSize; // 0x250(0x08)
	struct UNamedSlot* IconContent; // 0x258(0x08)
	float Dimension; // 0x260(0x04)
	enum class EPerkUsageType PerkType; // 0x264(0x01)
	char UnknownData_265[0x3]; // 0x265(0x03)
	struct FLinearColor FillColor; // 0x268(0x10)
	struct FLinearColor BorderColor; // 0x278(0x10)
	enum class EPerkTierState PerkState; // 0x288(0x01)

	void FromPerk(struct UPerkAsset* InPerk, enum class EPerkTierState InState); // Function UI_PerkBackground.UI_PerkBackground_C.FromPerk
	void SetPerkType(enum class EPerkUsageType InType, enum class EPerkTierState InState); // Function UI_PerkBackground.UI_PerkBackground_C.SetPerkType
	void SetColors(struct FLinearColor InFillColor, struct FLinearColor InBorderColor); // Function UI_PerkBackground.UI_PerkBackground_C.SetColors
	void SetDimensions(float InDimensions); // Function UI_PerkBackground.UI_PerkBackground_C.SetDimensions
	void PreConstruct(bool IsDesignTime); // Function UI_PerkBackground.UI_PerkBackground_C.PreConstruct
	void ExecuteUbergraph_UI_PerkBackground(int32_t EntryPoint); // Function UI_PerkBackground.UI_PerkBackground_C.ExecuteUbergraph_UI_PerkBackground
};

