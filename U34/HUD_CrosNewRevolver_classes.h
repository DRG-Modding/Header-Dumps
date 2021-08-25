// WidgetBlueprintGeneratedClass HUD_CrosNewRevolver.HUD_CrosNewRevolver_C
// Size: 0x274 (Inherited: 0x230)
struct UHUD_CrosNewRevolver_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* CH_Bottom; // 0x238(0x08)
	struct UImage* CH_FullLeft; // 0x240(0x08)
	struct UImage* CH_FullRight; // 0x248(0x08)
	struct UImage* CH_Left; // 0x250(0x08)
	struct UImage* CH_Right; // 0x258(0x08)
	float OpacityLow; // 0x260(0x04)
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct APlayerCharacter* Character; // 0x268(0x08)
	float OpacityHigh; // 0x270(0x04)

	void Construct(); // Function HUD_CrosNewRevolver.HUD_CrosNewRevolver_C.Construct
	void SetData(struct AItem* Item); // Function HUD_CrosNewRevolver.HUD_CrosNewRevolver_C.SetData
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CrosNewRevolver.HUD_CrosNewRevolver_C.OnSpreadChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_CrosNewRevolver.HUD_CrosNewRevolver_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CrosNewRevolver.HUD_CrosNewRevolver_C.OnDamagedEnemy_Event
	void ExecuteUbergraph_HUD_CrosNewRevolver(int32_t EntryPoint); // Function HUD_CrosNewRevolver.HUD_CrosNewRevolver_C.ExecuteUbergraph_HUD_CrosNewRevolver
};

