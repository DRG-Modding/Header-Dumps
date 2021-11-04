// WidgetBlueprintGeneratedClass UI_DLC_Indicator.UI_DLC_Indicator_C
// Size: 0x245 (Inherited: 0x230)
struct UUI_DLC_Indicator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Image_C* DLC_Image; // 0x238(0x08)
	int32_t Size; // 0x240(0x04)
	enum class ENUM_MenuColors Tint; // 0x244(0x01)

	void SetFromSkin(UItemSkin* InItem);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_DLC_Indicator(int32_t EntryPoint);
};

