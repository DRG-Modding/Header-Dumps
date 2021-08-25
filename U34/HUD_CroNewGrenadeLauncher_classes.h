// WidgetBlueprintGeneratedClass HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C
// Size: 0x2e0 (Inherited: 0x230)
struct UHUD_CroNewGrenadeLauncher_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DotFade; // 0x238(0x08)
	struct UImage* Bracket_Right; // 0x240(0x08)
	struct UImage* Dot; // 0x248(0x08)
	struct UImage* FocusHair_Bottom; // 0x250(0x08)
	struct UImage* FocusHair_Left; // 0x258(0x08)
	struct UImage* FocusHair_Right; // 0x260(0x08)
	struct UImage* FocusHair_Top; // 0x268(0x08)
	struct UImage* HP_Left; // 0x270(0x08)
	struct UImage* HP_Right; // 0x278(0x08)
	struct UNamedSlot* HyperCrosshairs; // 0x280(0x08)
	struct UImage* Image_37; // 0x288(0x08)
	struct UImage* Line10; // 0x290(0x08)
	struct UImage* Line15; // 0x298(0x08)
	struct UImage* Line20; // 0x2a0(0x08)
	struct UImage* Line20-HV_L; // 0x2a8(0x08)
	struct UImage* Line20-HV_R; // 0x2b0(0x08)
	struct UImage* Line5; // 0x2b8(0x08)
	struct UNamedSlot* PGLCrosshairs; // 0x2c0(0x08)
	float OpacityHigh; // 0x2c8(0x04)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)
	struct APlayerCharacter* Character; // 0x2d0(0x08)
	bool IsHP; // 0x2d8(0x01)
	char UnknownData_2D9[0x3]; // 0x2d9(0x03)
	float OpacityLow; // 0x2dc(0x04)

	void PreConstruct(bool IsDesignTime); // Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.OnDamagedEnemy_Event
	void SwitchToHP(); // Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.SwitchToHP
	void SetData(struct AItem* Item); // Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.SetData
	void Construct(); // Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.Construct
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.OnSpreadChanged
	void ExecuteUbergraph_HUD_CroNewGrenadeLauncher(int32_t EntryPoint); // Function HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C.ExecuteUbergraph_HUD_CroNewGrenadeLauncher
};

