// WidgetBlueprintGeneratedClass HUD_Flashlight.HUD_Flashlight_C
// Size: 0x279 (Inherited: 0x250)
struct UHUD_Flashlight_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UImage* ImageOFF; // 0x258(0x08)
	UImage* ImageON; // 0x260(0x08)
	UWidgetSwitcher* ImageSwitcher; // 0x268(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x270(0x08)
	bool IsOn; // 0x278(0x01)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnHeadlightOnChanged(bool IsOn);
	void ExecuteUbergraph_HUD_Flashlight(int32_t EntryPoint);
};

