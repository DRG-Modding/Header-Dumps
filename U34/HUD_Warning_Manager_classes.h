// WidgetBlueprintGeneratedClass HUD_Warning_Manager.HUD_Warning_Manager_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_Warning_Manager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* V_WarningHolder; // 0x238(0x08)

	void PreConstruct(bool IsDesignTime); // Function HUD_Warning_Manager.HUD_Warning_Manager_C.PreConstruct
	void Construct(); // Function HUD_Warning_Manager.HUD_Warning_Manager_C.Construct
	void OnNewHUDWarning_Event(struct UHUDWarningWidget* newWidget); // Function HUD_Warning_Manager.HUD_Warning_Manager_C.OnNewHUDWarning_Event
	void ExecuteUbergraph_HUD_Warning_Manager(int32_t EntryPoint); // Function HUD_Warning_Manager.HUD_Warning_Manager_C.ExecuteUbergraph_HUD_Warning_Manager
};

