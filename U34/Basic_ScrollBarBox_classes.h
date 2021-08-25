// WidgetBlueprintGeneratedClass Basic_ScrollBarBox.Basic_ScrollBarBox_C
// Size: 0x24a (Inherited: 0x230)
struct UBasic_ScrollBarBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UNamedSlot* PutStuffHere; // 0x238(0x08)
	struct UScrollBox* ScrollBox_Items; // 0x240(0x08)
	bool Always Show Scroll Bars; // 0x248(0x01)
	char Orientation; // 0x249(0x01)

	void PreConstruct(bool IsDesignTime); // Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.PreConstruct
	void ScrollToChild(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination); // Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ScrollToChild
	void ExecuteUbergraph_Basic_ScrollBarBox(int32_t EntryPoint); // Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ExecuteUbergraph_Basic_ScrollBarBox
};

