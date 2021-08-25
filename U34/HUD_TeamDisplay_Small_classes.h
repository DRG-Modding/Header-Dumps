// WidgetBlueprintGeneratedClass HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C
// Size: 0x249 (Inherited: 0x230)
struct UHUD_TeamDisplay_Small_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHUD_TeamDisplay_Bosco_C* HUD_TeamDisplay_Bosco; // 0x238(0x08)
	struct UVerticalBox* TeamBox; // 0x240(0x08)
	bool animate; // 0x248(0x01)

	void Construct(); // Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.Construct
	void OnPlayerJoined(struct AFSDPlayerState* PlayerState); // Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.OnPlayerJoined
	void PreConstruct(bool IsDesignTime); // Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.PreConstruct
	void ExecuteUbergraph_HUD_TeamDisplay_Small(int32_t EntryPoint); // Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.ExecuteUbergraph_HUD_TeamDisplay_Small
};

