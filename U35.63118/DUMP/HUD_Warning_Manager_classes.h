// WidgetBlueprintGeneratedClass HUD_Warning_Manager.HUD_Warning_Manager_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_Warning_Manager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* V_WarningHolder; // 0x238(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnNewHUDWarning_Event(UHUDWarningWidget* newWidget);
	void ExecuteUbergraph_HUD_Warning_Manager(int32_t EntryPoint);
};

