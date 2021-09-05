// WidgetBlueprintGeneratedClass Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C
// Size: 0x24a (Inherited: 0x230)
struct UBasic_Menu_ColorBarVertical_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* ColorBar; // 0x238(0x08)
	USizeBox* ColorBar_Sizer; // 0x240(0x08)
	enum class ENUM_PixelWidths Thickness; // 0x248(0x01)
	enum class ENUM_MenuColors Color; // 0x249(0x01)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Basic_Menu_ColorBarVertical(int32_t EntryPoint);
};

