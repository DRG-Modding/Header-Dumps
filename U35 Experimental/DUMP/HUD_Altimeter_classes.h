// WidgetBlueprintGeneratedClass HUD_Altimeter.HUD_Altimeter_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_Altimeter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Border; // 0x238(0x08)
	UTextBlock* DepthLabel; // 0x240(0x08)

	void SetDepth(int32_t NewDepth);
	void Construct();
	void DepthChanged(int32_t Depth);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_Altimeter(int32_t EntryPoint);
};

