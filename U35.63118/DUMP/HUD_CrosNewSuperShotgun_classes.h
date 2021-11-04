// WidgetBlueprintGeneratedClass HUD_CrosNewSuperShotgun.HUD_CrosNewSuperShotgun_C
// Size: 0x27c (Inherited: 0x230)
struct UHUD_CrosNewSuperShotgun_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* CH_Left; // 0x238(0x08)
	UImage* CH_LeftInterior; // 0x240(0x08)
	UImage* CH_RighInterior; // 0x248(0x08)
	UImage* CH_Right; // 0x250(0x08)
	UImage* CH_Top; // 0x258(0x08)
	UImage* CH_TopInterior; // 0x260(0x08)
	float Opacity High; // 0x268(0x04)
	APlayerCharacter* Character; // 0x270(0x08)
	float Opacity Low; // 0x278(0x04)

	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void SetData(AItem* Item);
	void Construct();
	void ExecuteUbergraph_HUD_CrosNewSuperShotgun(int32_t EntryPoint);
};

