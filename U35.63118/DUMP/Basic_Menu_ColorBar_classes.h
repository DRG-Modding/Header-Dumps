// WidgetBlueprintGeneratedClass Basic_Menu_ColorBar.Basic_Menu_ColorBar_C
// Size: 0x258 (Inherited: 0x230)
struct UBasic_Menu_ColorBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* ColorBar; // 0x238(0x08)
	USizeBox* ColorBar_Sizer; // 0x240(0x08)
	enum class ENUM_PixelWidths Colorbar_Thickness; // 0x248(0x01)
	enum class ENUM_MenuColors Colorbar_Tint; // 0x249(0x01)
	float Colorbar_Opacity; // 0x24c(0x04)
	UMaterialInterface* Material; // 0x250(0x08)

	void SetOpacity(float Opacity);
	void SetThickness(enum class ENUM_PixelWidths Index);
	void SetColor(enum class ENUM_MenuColors Brush Color);
	void PreConstruct(bool IsDesignTime);
	void SetData(enum class ENUM_PixelWidths Colorbar_Thickness, enum class ENUM_MenuColors Colorbar_Tint, float Colorbar_Opacity, UMaterialInterface* Material);
	void ExecuteUbergraph_Basic_Menu_ColorBar(int32_t EntryPoint);
};

