// WidgetBlueprintGeneratedClass Basic_Menu_ColorBar.Basic_Menu_ColorBar_C
// Size: 0x258 (Inherited: 0x230)
struct UBasic_Menu_ColorBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* ColorBar; // 0x238(0x08)
	struct USizeBox* ColorBar_Sizer; // 0x240(0x08)
	char Colorbar_Thickness; // 0x248(0x01)
	char Colorbar_Tint; // 0x249(0x01)
	char UnknownData_24A[0x2]; // 0x24a(0x02)
	float Colorbar_Opacity; // 0x24c(0x04)
	struct UMaterialInterface* Material; // 0x250(0x08)

	void SetOpacity(float Opacity); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetOpacity
	void SetThickness(char Index); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetThickness
	void SetColor(char Brush Color); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetColor
	void PreConstruct(bool IsDesignTime); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.PreConstruct
	void SetData(char Colorbar_Thickness, char Colorbar_Tint, float Colorbar_Opacity, struct UMaterialInterface* Material); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetData
	void ExecuteUbergraph_Basic_Menu_ColorBar(int32_t EntryPoint); // Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.ExecuteUbergraph_Basic_Menu_ColorBar
};

