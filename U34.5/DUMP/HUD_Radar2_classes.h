// WidgetBlueprintGeneratedClass HUD_Radar2.HUD_Radar2_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_Radar2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* CompassImage; // 0x238(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_HUD_Radar2(int32_t EntryPoint);
};

