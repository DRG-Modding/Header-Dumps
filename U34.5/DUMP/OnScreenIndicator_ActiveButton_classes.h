// WidgetBlueprintGeneratedClass OnScreenIndicator_ActiveButton.OnScreenIndicator_ActiveButton_C
// Size: 0x258 (Inherited: 0x238)
struct UOnScreenIndicator_ActiveButton_C : UFSDInWorldWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UImage* Image_Arrow; // 0x240(0x08)
	UImage* Image_Icon; // 0x248(0x08)
	UCanvasPanel* RootCanvas; // 0x250(0x08)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OnScreenIndicator_ActiveButton(int32_t EntryPoint);
};

