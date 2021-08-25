// WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C
// Size: 0x2d0 (Inherited: 0x230)
struct UUI_ImageTinted_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* ImageWidget; // 0x238(0x08)
	struct FSlateBrush Brush; // 0x240(0x88)
	char Tint; // 0x2c8(0x01)
	char UnknownData_2C9[0x3]; // 0x2c9(0x03)
	float Tint Opacity; // 0x2cc(0x04)

	void SetBrushFromTexture(struct UTexture2D* Texture, bool MatchSize); // Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture
	void SetTint(char InTint, float InOpacity); // Function UI_ImageTinted.UI_ImageTinted_C.SetTint
	void SetBrush(struct FSlateBrush InBrush); // Function UI_ImageTinted.UI_ImageTinted_C.SetBrush
	void PreConstruct(bool IsDesignTime); // Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct
	void ExecuteUbergraph_UI_ImageTinted(int32_t EntryPoint); // Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted
};

