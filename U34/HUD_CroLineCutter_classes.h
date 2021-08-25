// WidgetBlueprintGeneratedClass HUD_CroLineCutter.HUD_CroLineCutter_C
// Size: 0x270 (Inherited: 0x230)
struct UHUD_CroLineCutter_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DotFade; // 0x238(0x08)
	struct UImage* Bracket_Left; // 0x240(0x08)
	struct UImage* Bracket_Right; // 0x248(0x08)
	struct UImage* Image_1; // 0x250(0x08)
	struct UImage* Image_5; // 0x258(0x08)
	float OpacityHigh; // 0x260(0x04)
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct APlayerCharacter* Character; // 0x268(0x08)

	void Construct(); // Function HUD_CroLineCutter.HUD_CroLineCutter_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_CroLineCutter.HUD_CroLineCutter_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CroLineCutter.HUD_CroLineCutter_C.OnDamagedEnemy_Event
	void ExecuteUbergraph_HUD_CroLineCutter(int32_t EntryPoint); // Function HUD_CroLineCutter.HUD_CroLineCutter_C.ExecuteUbergraph_HUD_CroLineCutter
};

