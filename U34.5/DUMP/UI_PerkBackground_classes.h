// WidgetBlueprintGeneratedClass UI_PerkBackground.UI_PerkBackground_C
// Size: 0x289 (Inherited: 0x230)
struct UUI_PerkBackground_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BackgroundBorder_Image; // 0x238(0x08)
	UImage* BackgroundFill_Image; // 0x240(0x08)
	UUI_MaskedCanvas_C* BackgroundMask_Canvas; // 0x248(0x08)
	USizeBox* BackgroundSize; // 0x250(0x08)
	UNamedSlot* IconContent; // 0x258(0x08)
	float Dimension; // 0x260(0x04)
	enum class EPerkUsageType PerkType; // 0x264(0x01)
	FLinearColor FillColor; // 0x268(0x10)
	FLinearColor BorderColor; // 0x278(0x10)
	enum class EPerkTierState PerkState; // 0x288(0x01)

	void FromPerk(UPerkAsset* InPerk, enum class EPerkTierState InState);
	void SetPerkType(enum class EPerkUsageType InType, enum class EPerkTierState InState);
	void SetColors(FLinearColor InFillColor, FLinearColor InBorderColor);
	void SetDimensions(float InDimensions);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_PerkBackground(int32_t EntryPoint);
};

