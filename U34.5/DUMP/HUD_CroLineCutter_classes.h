// WidgetBlueprintGeneratedClass HUD_CroLineCutter.HUD_CroLineCutter_C
// Size: 0x270 (Inherited: 0x230)
struct UHUD_CroLineCutter_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DotFade; // 0x238(0x08)
	UImage* Bracket_Left; // 0x240(0x08)
	UImage* Bracket_Right; // 0x248(0x08)
	UImage* Image_1; // 0x250(0x08)
	UImage* Image_5; // 0x258(0x08)
	float OpacityHigh; // 0x260(0x04)
	APlayerCharacter* Character; // 0x268(0x08)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_HUD_CroLineCutter(int32_t EntryPoint);
};

