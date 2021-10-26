// WidgetBlueprintGeneratedClass Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C
// Size: 0x265 (Inherited: 0x230)
struct UBasic_Window_CutCorner_Gradient_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_BG_CutCorner_Gradient_C* Basic_BG_Window; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UNamedSlot* Content; // 0x248(0x08)
	FMargin ContentPadding; // 0x250(0x10)
	float BackgroundOpacity; // 0x260(0x04)
	enum class ENUM_MenuColors ColorbarTint; // 0x264(0x01)

	void PreConstruct(bool IsDesignTime);
	void SetBackgroundTint(FLinearColor InColorAndOpacity);
	void SetColorbarColor(enum class ENUM_MenuColors Colorbar_Tint);
	void ExecuteUbergraph_Basic_Window_CutCorner_Gradient(int32_t EntryPoint);
};

