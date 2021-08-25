// WidgetBlueprintGeneratedClass HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C
// Size: 0x27c (Inherited: 0x230)
struct UHUD_CrosNewSuperShotgun_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* CH_Left; // 0x238(0x08)
	struct UImage* CH_LeftInterior; // 0x240(0x08)
	struct UImage* CH_RighInterior; // 0x248(0x08)
	struct UImage* CH_Right; // 0x250(0x08)
	struct UImage* CH_Top; // 0x258(0x08)
	struct UImage* CH_TopInterior; // 0x260(0x08)
	float Opacity High; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct APlayerCharacter* Character; // 0x270(0x08)
	float Opacity Low; // 0x278(0x04)

	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.OnSpreadChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.OnDamagedEnemy_Event
	void SetData(struct AItem* Item); // Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.SetData
	void Construct(); // Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.Construct
	void ExecuteUbergraph_HUD_CrosNewSuperShotgun(int32_t EntryPoint); // Function HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C.ExecuteUbergraph_HUD_CrosNewSuperShotgun
};

