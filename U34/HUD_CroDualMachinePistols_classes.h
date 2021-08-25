// WidgetBlueprintGeneratedClass HUD_CroDualMachinePistols.HUD_CroDualMachinePistols_C
// Size: 0x280 (Inherited: 0x230)
struct UHUD_CroDualMachinePistols_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DotFade; // 0x238(0x08)
	struct UImage* CH_BottomLeft; // 0x240(0x08)
	struct UImage* CH_BottomRight; // 0x248(0x08)
	struct UImage* CH_FullLeft; // 0x250(0x08)
	struct UImage* CH_FullRight; // 0x258(0x08)
	struct UImage* CH_Left; // 0x260(0x08)
	struct UImage* CH_Right; // 0x268(0x08)
	struct APlayerCharacter* Character; // 0x270(0x08)
	struct UHitscanBaseComponent* HitscanComponent; // 0x278(0x08)

	void SetData(struct AItem* Item); // Function HUD_CroDualMachinePistols.HUD_CroDualMachinePistols_C.SetData
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CroDualMachinePistols.HUD_CroDualMachinePistols_C.OnSpreadChanged
	void Construct(); // Function HUD_CroDualMachinePistols.HUD_CroDualMachinePistols_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_CroDualMachinePistols.HUD_CroDualMachinePistols_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CroDualMachinePistols.HUD_CroDualMachinePistols_C.OnDamagedEnemy_Event
	void ExecuteUbergraph_HUD_CroDualMachinePistols(int32_t EntryPoint); // Function HUD_CroDualMachinePistols.HUD_CroDualMachinePistols_C.ExecuteUbergraph_HUD_CroDualMachinePistols
};

