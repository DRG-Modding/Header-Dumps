// WidgetBlueprintGeneratedClass HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C
// Size: 0x314 (Inherited: 0x230)
struct UHUD_Cro_BoltActionRifle_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DotFade; // 0x238(0x08)
	UImage* Bracket_Left; // 0x240(0x08)
	UImage* Bracket_Right; // 0x248(0x08)
	UImage* CH_Bottom; // 0x250(0x08)
	UImage* CH_Left; // 0x258(0x08)
	UImage* CH_Right; // 0x260(0x08)
	UImage* CH_Top; // 0x268(0x08)
	UImage* Dot; // 0x270(0x08)
	UImage* Focus_Botom; // 0x278(0x08)
	UImage* Focus_Left; // 0x280(0x08)
	UImage* Focus_Right; // 0x288(0x08)
	UImage* Focus_Top; // 0x290(0x08)
	UImage* FocusHair_Bottom; // 0x298(0x08)
	UImage* FocusHair_Left; // 0x2a0(0x08)
	UImage* FocusHair_Right; // 0x2a8(0x08)
	UImage* FocusHair_Top; // 0x2b0(0x08)
	UNamedSlot* FocusHairs; // 0x2b8(0x08)
	UImage* GK2-markerL; // 0x2c0(0x08)
	UImage* GK2-markerR; // 0x2c8(0x08)
	UImage* Hair_Bottom; // 0x2d0(0x08)
	UImage* Hair_Left; // 0x2d8(0x08)
	UImage* Hair_Right; // 0x2e0(0x08)
	UImage* Hair_Top; // 0x2e8(0x08)
	float Opacity High; // 0x2f0(0x04)
	APlayerCharacter* Character; // 0x2f8(0x08)
	float Opacity Low; // 0x300(0x04)
	bool JustHit; // 0x304(0x01)
	float SpreadPositionMultiplier; // 0x308(0x04)
	float FocusSpreadPositionMultiplier; // 0x30c(0x04)
	float Opacity Medium; // 0x310(0x04)

	void OnSpreadChange(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void Construct();
	void SetData(AItem* Item);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_HUD_Cro_BoltActionRifle(int32_t EntryPoint);
};

