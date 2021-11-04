// WidgetBlueprintGeneratedClass UI_RandomizeIcon.UI_RandomizeIcon_C
// Size: 0x274 (Inherited: 0x230)
struct UUI_RandomizeIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimHover; // 0x238(0x08)
	UWidgetAnimation* AnimActivate; // 0x240(0x08)
	UBorder* Background; // 0x248(0x08)
	UBorder* FrameBorder; // 0x250(0x08)
	UBorder* SelectionBorder; // 0x258(0x08)
	UOverlay* ShuffleOverlay; // 0x260(0x08)
	USizeBox* Sizer; // 0x268(0x08)
	int32_t Dimension; // 0x270(0x04)

	void PreConstruct(bool IsDesignTime);
	void PlayActivateAnimation();
	void SetHovered(bool IsHovered);
	void ExecuteUbergraph_UI_RandomizeIcon(int32_t EntryPoint);
};

