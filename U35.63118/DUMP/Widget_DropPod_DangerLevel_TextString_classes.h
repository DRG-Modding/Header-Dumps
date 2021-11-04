// WidgetBlueprintGeneratedClass Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C
// Size: 0x258 (Inherited: 0x230)
struct UWidget_DropPod_DangerLevel_TextString_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_PlanetaryRegionName; // 0x238(0x08)
	FText Text; // 0x240(0x18)

	void SetColor(FSlateColor InColorAndOpacity);
	void SetText(FText InText);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString(int32_t EntryPoint);
};

