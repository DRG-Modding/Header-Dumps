// WidgetBlueprintGeneratedClass HUD_CroNewGrenadeLauncher.HUD_CroNewGrenadeLauncher_C
// Size: 0x2e0 (Inherited: 0x230)
struct UHUD_CroNewGrenadeLauncher_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DotFade; // 0x238(0x08)
	UImage* Bracket_Right; // 0x240(0x08)
	UImage* Dot; // 0x248(0x08)
	UImage* FocusHair_Bottom; // 0x250(0x08)
	UImage* FocusHair_Left; // 0x258(0x08)
	UImage* FocusHair_Right; // 0x260(0x08)
	UImage* FocusHair_Top; // 0x268(0x08)
	UImage* HP_Left; // 0x270(0x08)
	UImage* HP_Right; // 0x278(0x08)
	UNamedSlot* HyperCrosshairs; // 0x280(0x08)
	UImage* Image_37; // 0x288(0x08)
	UImage* Line10; // 0x290(0x08)
	UImage* Line15; // 0x298(0x08)
	UImage* Line20; // 0x2a0(0x08)
	UImage* Line20-HV_L; // 0x2a8(0x08)
	UImage* Line20-HV_R; // 0x2b0(0x08)
	UImage* Line5; // 0x2b8(0x08)
	UNamedSlot* PGLCrosshairs; // 0x2c0(0x08)
	float OpacityHigh; // 0x2c8(0x04)
	APlayerCharacter* Character; // 0x2d0(0x08)
	bool IsHP; // 0x2d8(0x01)
	float OpacityLow; // 0x2dc(0x04)

	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void SwitchToHP();
	void SetData(AItem* Item);
	void Construct();
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void ExecuteUbergraph_HUD_CroNewGrenadeLauncher(int32_t EntryPoint);
};

