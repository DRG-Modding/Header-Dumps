// WidgetBlueprintGeneratedClass HUD_Flashlight.HUD_Flashlight_C
// Size: 0x279 (Inherited: 0x250)
struct UHUD_Flashlight_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UImage* ImageOFF; // 0x258(0x08)
	struct UImage* ImageON; // 0x260(0x08)
	struct UWidgetSwitcher* ImageSwitcher; // 0x268(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x270(0x08)
	bool IsOn; // 0x278(0x01)

	void Construct(); // Function HUD_Flashlight.HUD_Flashlight_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_Flashlight.HUD_Flashlight_C.PreConstruct
	void OnHeadlightOnChanged(bool IsOn); // Function HUD_Flashlight.HUD_Flashlight_C.OnHeadlightOnChanged
	void ExecuteUbergraph_HUD_Flashlight(int32_t EntryPoint); // Function HUD_Flashlight.HUD_Flashlight_C.ExecuteUbergraph_HUD_Flashlight
};

