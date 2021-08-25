// WidgetBlueprintGeneratedClass Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C
// Size: 0x265 (Inherited: 0x230)
struct UBasic_Window_CutCorner_Gradient_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_BG_CutCorner_Gradient_C* Basic_BG_Window; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UNamedSlot* Content; // 0x248(0x08)
	struct FMargin ContentPadding; // 0x250(0x10)
	float BackgroundOpacity; // 0x260(0x04)
	char ColorbarTint; // 0x264(0x01)

	void PreConstruct(bool IsDesignTime); // Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.PreConstruct
	void SetBackgroundTint(struct FLinearColor InColorAndOpacity); // Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetBackgroundTint
	void SetColorbarColor(char Colorbar_Tint); // Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetColorbarColor
	void ExecuteUbergraph_Basic_Window_CutCorner_Gradient(int32_t EntryPoint); // Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.ExecuteUbergraph_Basic_Window_CutCorner_Gradient
};

