// WidgetBlueprintGeneratedClass HUD_GrenadeIcon.HUD_GrenadeIcon_C
// Size: 0x261 (Inherited: 0x250)
struct UHUD_GrenadeIcon_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UImage* Image_18; // 0x258(0x08)
	bool IsOn; // 0x260(0x01)

	void SetOn(bool Visible);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_GrenadeIcon(int32_t EntryPoint);
};

