// WidgetBlueprintGeneratedClass UI_RandomizeIcon.UI_RandomizeIcon_C
// Size: 0x274 (Inherited: 0x230)
struct UUI_RandomizeIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimHover; // 0x238(0x08)
	struct UWidgetAnimation* AnimActivate; // 0x240(0x08)
	struct UBorder* Background; // 0x248(0x08)
	struct UBorder* FrameBorder; // 0x250(0x08)
	struct UBorder* SelectionBorder; // 0x258(0x08)
	struct UOverlay* ShuffleOverlay; // 0x260(0x08)
	struct USizeBox* Sizer; // 0x268(0x08)
	int32_t Dimension; // 0x270(0x04)

	void PreConstruct(bool IsDesignTime); // Function UI_RandomizeIcon.UI_RandomizeIcon_C.PreConstruct
	void PlayActivateAnimation(); // Function UI_RandomizeIcon.UI_RandomizeIcon_C.PlayActivateAnimation
	void SetHovered(bool IsHovered); // Function UI_RandomizeIcon.UI_RandomizeIcon_C.SetHovered
	void ExecuteUbergraph_UI_RandomizeIcon(int32_t EntryPoint); // Function UI_RandomizeIcon.UI_RandomizeIcon_C.ExecuteUbergraph_UI_RandomizeIcon
};

