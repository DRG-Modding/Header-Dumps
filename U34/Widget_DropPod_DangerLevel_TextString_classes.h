// WidgetBlueprintGeneratedClass Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C
// Size: 0x258 (Inherited: 0x230)
struct UWidget_DropPod_DangerLevel_TextString_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_PlanetaryRegionName; // 0x238(0x08)
	struct FText Text; // 0x240(0x18)

	void SetColor(struct FSlateColor InColorAndOpacity); // Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetColor
	void SetText(struct FText InText); // Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetText
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.Tick
	void PreConstruct(bool IsDesignTime); // Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.PreConstruct
	void ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString(int32_t EntryPoint); // Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString
};

