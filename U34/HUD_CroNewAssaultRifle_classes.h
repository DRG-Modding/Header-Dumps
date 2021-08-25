// WidgetBlueprintGeneratedClass HUD_CroNewAssaultRifle.HUD_CroNewAssaultRifle_C
// Size: 0x28c (Inherited: 0x230)
struct UHUD_CroNewAssaultRifle_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DotFade; // 0x238(0x08)
	struct UImage* Bracket_Left; // 0x240(0x08)
	struct UImage* Bracket_Right; // 0x248(0x08)
	struct UImage* CH_Bottom; // 0x250(0x08)
	struct UImage* CH_Left; // 0x258(0x08)
	struct UImage* CH_Right; // 0x260(0x08)
	struct UImage* CH_Top; // 0x268(0x08)
	struct UImage* Dot; // 0x270(0x08)
	float Opacity High; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct APlayerCharacter* Character; // 0x280(0x08)
	float Opacity Low; // 0x288(0x04)

	void Construct(); // Function HUD_CroNewAssaultRifle.HUD_CroNewAssaultRifle_C.Construct
	void SetData(struct AItem* Item); // Function HUD_CroNewAssaultRifle.HUD_CroNewAssaultRifle_C.SetData
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CroNewAssaultRifle.HUD_CroNewAssaultRifle_C.OnSpreadChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_CroNewAssaultRifle.HUD_CroNewAssaultRifle_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CroNewAssaultRifle.HUD_CroNewAssaultRifle_C.OnDamagedEnemy_Event
	void ExecuteUbergraph_HUD_CroNewAssaultRifle(int32_t EntryPoint); // Function HUD_CroNewAssaultRifle.HUD_CroNewAssaultRifle_C.ExecuteUbergraph_HUD_CroNewAssaultRifle
};

