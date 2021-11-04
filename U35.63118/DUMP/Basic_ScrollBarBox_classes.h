// WidgetBlueprintGeneratedClass Basic_ScrollBarBox.Basic_ScrollBarBox_C
// Size: 0x278 (Inherited: 0x230)
struct UBasic_ScrollBarBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USizeBox* OptionalSizeBox; // 0x238(0x08)
	UNamedSlot* PutStuffHere; // 0x240(0x08)
	UScrollBox* ScrollBox_Items; // 0x248(0x08)
	bool Always Show Scroll Bars; // 0x250(0x01)
	enum class EOrientation Orientation; // 0x251(0x01)
	FSizeBoxSettings SizeSettings; // 0x254(0x20)
	float ScrollbarThickness; // 0x274(0x04)

	void PreConstruct(bool IsDesignTime);
	void ScrollToChild(UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination);
	void ExecuteUbergraph_Basic_ScrollBarBox(int32_t EntryPoint);
};

