// WidgetBlueprintGeneratedClass HUD_CrosNewRevolver.HUD_CrosNewRevolver_C
// Size: 0x274 (Inherited: 0x230)
struct UHUD_CrosNewRevolver_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* CH_Bottom; // 0x238(0x08)
	UImage* CH_FullLeft; // 0x240(0x08)
	UImage* CH_FullRight; // 0x248(0x08)
	UImage* CH_Left; // 0x250(0x08)
	UImage* CH_Right; // 0x258(0x08)
	float OpacityLow; // 0x260(0x04)
	APlayerCharacter* Character; // 0x268(0x08)
	float OpacityHigh; // 0x270(0x04)

	void Construct();
	void SetData(AItem* Item);
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_HUD_CrosNewRevolver(int32_t EntryPoint);
};

