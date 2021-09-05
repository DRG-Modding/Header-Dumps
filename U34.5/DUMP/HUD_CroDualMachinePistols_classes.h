// WidgetBlueprintGeneratedClass HUD_CroDualMachinePistols.HUD_CroDualMachinePistols_C
// Size: 0x280 (Inherited: 0x230)
struct UHUD_CroDualMachinePistols_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DotFade; // 0x238(0x08)
	UImage* CH_BottomLeft; // 0x240(0x08)
	UImage* CH_BottomRight; // 0x248(0x08)
	UImage* CH_FullLeft; // 0x250(0x08)
	UImage* CH_FullRight; // 0x258(0x08)
	UImage* CH_Left; // 0x260(0x08)
	UImage* CH_Right; // 0x268(0x08)
	APlayerCharacter* Character; // 0x270(0x08)
	UHitscanBaseComponent* HitscanComponent; // 0x278(0x08)

	void SetData(AItem* Item);
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_HUD_CroDualMachinePistols(int32_t EntryPoint);
};

