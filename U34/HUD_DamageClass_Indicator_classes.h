// WidgetBlueprintGeneratedClass HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C
// Size: 0x2d8 (Inherited: 0x250)
struct UHUD_DamageClass_Indicator_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHorizontalBox* AfflictionBox_Left; // 0x258(0x08)
	struct UHorizontalBox* AfflictionBox_Right; // 0x260(0x08)
	struct UHUD_PlayerTemperature_C* HUD_PlayerTemperature; // 0x268(0x08)
	struct USpacer* Spacer_Left; // 0x270(0x08)
	struct USpacer* Spacer_Right; // 0x278(0x08)
	bool IsOn; // 0x280(0x01)
	char UnknownData_281[0x7]; // 0x281(0x07)
	struct TMap<struct UPawnAffliction*, struct UHUD_DamageClass_Item_C*> Indicators; // 0x288(0x50)

	void UpdateThisSpacer(struct UWidget* ThisSpacer, struct UPanelWidget* ThisAfflictionBox, struct UPanelWidget* OtherAfflictionBox, bool TemperatureIsVisible); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateThisSpacer
	void UpdateSpacers(); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateSpacers
	void ClearIcons(); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ClearIcons
	struct UHUD_DamageClass_Item_C* CreateIcon(struct UPawnAffliction* affliction); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon
	void Construct(); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct
	void OnAfflictionActivated(struct UPawnAffliction* affliction); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated
	void OnAfflictionDeactivated(struct UPawnAffliction* affliction); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated
	void Elapsed(struct UHUD_DamageClass_Item_C* Item); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed
	void BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature(struct UUserWidget* Widget, bool IsVisible); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature
	void ExecuteUbergraph_HUD_DamageClass_Indicator(int32_t EntryPoint); // Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator
};

