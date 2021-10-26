// WidgetBlueprintGeneratedClass HUD_Cro_LockOnRifle.HUD_Cro_LockOnRifle_C
// Size: 0x360 (Inherited: 0x230)
struct UHUD_Cro_LockOnRifle_C : UCrosshairWidget {
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
	UNamedSlot* Focussed_Regular; // 0x298(0x08)
	UNamedSlot* Focussed_Small; // 0x2a0(0x08)
	UImage* GK2-markerL; // 0x2a8(0x08)
	UImage* GK2-markerR; // 0x2b0(0x08)
	UImage* Hair_Bottom; // 0x2b8(0x08)
	UImage* Hair_Left; // 0x2c0(0x08)
	UImage* Hair_Right; // 0x2c8(0x08)
	UImage* Hair_Top; // 0x2d0(0x08)
	UImage* Image; // 0x2d8(0x08)
	UImage* Image_2; // 0x2e0(0x08)
	UImage* Image_5; // 0x2e8(0x08)
	UImage* Image_73; // 0x2f0(0x08)
	UUI_LockOn_Counter_C* LockOnCounter_Normal; // 0x2f8(0x08)
	UUI_LockOn_Counter_C* LockOnCounter_Small; // 0x300(0x08)
	UCanvasPanel* Normal; // 0x308(0x08)
	UUI_LockOn_Scanning_C* Scanning_Normal; // 0x310(0x08)
	UUI_LockOn_Scanning_C* Scanning_Small; // 0x318(0x08)
	USizeBox* SizeBox_Regular; // 0x320(0x08)
	USizeBox* SizeBox_Small; // 0x328(0x08)
	UWidgetSwitcher* WidgetSwitcher_Type; // 0x330(0x08)
	float Opacity High; // 0x338(0x04)
	APlayerCharacter* Character; // 0x340(0x08)
	float Opacity Low; // 0x348(0x04)
	bool JustHit; // 0x34c(0x01)
	float SpreadPositionMultiplier; // 0x350(0x04)
	float FocusSpreadPositionMultiplier; // 0x354(0x04)
	ALockOnWeapon* Weapon; // 0x358(0x08)

	void OnSpreadChange(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void SetData(AItem* Item);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void LockingStarted_Event();
	void NoLongerFocussed();
	void Construct();
	void OnLockOnCountChanged_Event(int32_t InCurrentCount);
	void OnUpgraded(AItem* Item);
	void ExecuteUbergraph_HUD_Cro_LockOnRifle(int32_t EntryPoint);
};

