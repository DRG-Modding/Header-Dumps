// WidgetBlueprintGeneratedClass HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C
// Size: 0x249 (Inherited: 0x230)
struct UHUD_TeamDisplay_Small_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHUD_TeamDisplay_Bosco_C* HUD_TeamDisplay_Bosco; // 0x238(0x08)
	UVerticalBox* TeamBox; // 0x240(0x08)
	bool animate; // 0x248(0x01)

	void Construct();
	void OnPlayerJoined(AFSDPlayerState* PlayerState);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_TeamDisplay_Small(int32_t EntryPoint);
};

