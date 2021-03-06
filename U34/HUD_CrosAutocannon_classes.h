// WidgetBlueprintGeneratedClass HUD_CrosAutocannon.HUD_CrosAutocannon_C
// Size: 0x2a0 (Inherited: 0x230)
struct UHUD_CrosAutocannon_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DotFade; // 0x238(0x08)
	struct UImage* CH_LeftBottom; // 0x240(0x08)
	struct UImage* CH_LeftTop; // 0x248(0x08)
	struct UImage* CH_RightBottom; // 0x250(0x08)
	struct UImage* CH_RightTop; // 0x258(0x08)
	struct UImage* Dot; // 0x260(0x08)
	struct UImage* Line_Left; // 0x268(0x08)
	struct UImage* Line_Right; // 0x270(0x08)
	struct UImage* Line_TOp; // 0x278(0x08)
	struct UImage* LineBottom; // 0x280(0x08)
	float Opacity High; // 0x288(0x04)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct APlayerCharacter* Character; // 0x290(0x08)
	float Opacity Low; // 0x298(0x04)
	float SpreadMultiplier; // 0x29c(0x04)

	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CrosAutocannon.HUD_CrosAutocannon_C.OnSpreadChanged
	void Construct(); // Function HUD_CrosAutocannon.HUD_CrosAutocannon_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_CrosAutocannon.HUD_CrosAutocannon_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CrosAutocannon.HUD_CrosAutocannon_C.OnDamagedEnemy_Event
	void SetData(struct AItem* Item); // Function HUD_CrosAutocannon.HUD_CrosAutocannon_C.SetData
	void ExecuteUbergraph_HUD_CrosAutocannon(int32_t EntryPoint); // Function HUD_CrosAutocannon.HUD_CrosAutocannon_C.ExecuteUbergraph_HUD_CrosAutocannon
};

