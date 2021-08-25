// WidgetBlueprintGeneratedClass HUD_CroBurstPistol.HUD_CroBurstPistol_C
// Size: 0x280 (Inherited: 0x230)
struct UHUD_CroBurstPistol_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DotFade; // 0x238(0x08)
	struct UImage* CH_Bottom; // 0x240(0x08)
	struct UImage* CH_FullLeft; // 0x248(0x08)
	struct UImage* CH_FullRight; // 0x250(0x08)
	struct UImage* CH_Left; // 0x258(0x08)
	struct UImage* CH_Right; // 0x260(0x08)
	struct UImage* CH_Top; // 0x268(0x08)
	struct UImage* Dot; // 0x270(0x08)
	struct APlayerCharacter* Character; // 0x278(0x08)

	void Construct(); // Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.Construct
	void SetData(struct AItem* Item); // Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.SetData
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.OnSpreadChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.OnDamagedEnemy_Event
	void ExecuteUbergraph_HUD_CroBurstPistol(int32_t EntryPoint); // Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.ExecuteUbergraph_HUD_CroBurstPistol
};

