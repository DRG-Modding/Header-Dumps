// WidgetBlueprintGeneratedClass HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C
// Size: 0x2d8 (Inherited: 0x250)
struct UHUD_DamageClass_Indicator_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UHorizontalBox* AfflictionBox_Left; // 0x258(0x08)
	UHorizontalBox* AfflictionBox_Right; // 0x260(0x08)
	UHUD_PlayerTemperature_C* HUD_PlayerTemperature; // 0x268(0x08)
	USpacer* Spacer_Left; // 0x270(0x08)
	USpacer* Spacer_Right; // 0x278(0x08)
	bool IsOn; // 0x280(0x01)
	TMap<UPawnAffliction*, UHUD_DamageClass_Item_C*> Indicators; // 0x288(0x50)

	void UpdateThisSpacer(UWidget* ThisSpacer, UPanelWidget* ThisAfflictionBox, UPanelWidget* OtherAfflictionBox, bool TemperatureIsVisible);
	void UpdateSpacers();
	void ClearIcons();
	UHUD_DamageClass_Item_C* CreateIcon(UPawnAffliction* affliction);
	void Construct();
	void OnAfflictionActivated(UPawnAffliction* affliction);
	void OnAfflictionDeactivated(UPawnAffliction* affliction);
	void Elapsed(UHUD_DamageClass_Item_C* Item);
	void BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature(UUserWidget* Widget, bool IsVisible);
	void ExecuteUbergraph_HUD_DamageClass_Indicator(int32_t EntryPoint);
};

