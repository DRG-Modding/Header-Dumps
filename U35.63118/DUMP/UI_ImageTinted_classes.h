// WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C
// Size: 0x2d0 (Inherited: 0x230)
struct UUI_ImageTinted_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* ImageWidget; // 0x238(0x08)
	FSlateBrush Brush; // 0x240(0x88)
	enum class ENUM_MenuColors Tint; // 0x2c8(0x01)
	float Tint Opacity; // 0x2cc(0x04)

	void SetBrushSize(FVector2D Brush Image Size);
	void SelectTint(enum class ENUM_MenuColors FALSE, enum class ENUM_MenuColors TRUE, bool Condition);
	void GetBrush(FSlateBrush Brush);
	void SetBrushFromTexture(UTexture2D* Texture, bool MatchSize);
	void SetTint(enum class ENUM_MenuColors InTint, float InOpacity);
	void SetBrush(FSlateBrush InBrush);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ImageTinted(int32_t EntryPoint);
};

