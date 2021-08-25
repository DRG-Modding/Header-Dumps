// WidgetBlueprintGeneratedClass HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C
// Size: 0x27c (Inherited: 0x230)
struct UHUD_CrosNew_EngSMG_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DotFade; // 0x238(0x08)
	struct UImage* CH_Bottom; // 0x240(0x08)
	struct UImage* CH_Left; // 0x248(0x08)
	struct UImage* CH_Right; // 0x250(0x08)
	struct UImage* CH_Top; // 0x258(0x08)
	struct UImage* Dot; // 0x260(0x08)
	float OpacityHigh; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct APlayerCharacter* Character; // 0x270(0x08)
	float Opacity Low; // 0x278(0x04)

	void SetData(struct AItem* Item); // Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.SetData
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.OnSpreadChanged
	void Construct(); // Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.OnDamagedEnemy_Event
	void ExecuteUbergraph_HUD_CrosNew_EngSMG(int32_t EntryPoint); // Function HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C.ExecuteUbergraph_HUD_CrosNew_EngSMG
};

