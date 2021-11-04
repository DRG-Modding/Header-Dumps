// WidgetBlueprintGeneratedClass HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C
// Size: 0x318 (Inherited: 0x230)
struct UHUD_CrosMicroMissileLauncher_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DotFade; // 0x238(0x08)
	UImage* Arrow_Bottom; // 0x240(0x08)
	UImage* Arrow_Left; // 0x248(0x08)
	UImage* Arrow_Right; // 0x250(0x08)
	UImage* Arrow_Top; // 0x258(0x08)
	UImage* CH_HL; // 0x260(0x08)
	UImage* CH_HR; // 0x268(0x08)
	UImage* CH_LeftBottom; // 0x270(0x08)
	UImage* CH_LeftTop; // 0x278(0x08)
	UImage* CH_RightBottom; // 0x280(0x08)
	UImage* CH_RightTop; // 0x288(0x08)
	UImage* CH_VB; // 0x290(0x08)
	UImage* CH_VT; // 0x298(0x08)
	UImage* M1; // 0x2a0(0x08)
	UImage* M2; // 0x2a8(0x08)
	UImage* M3; // 0x2b0(0x08)
	UImage* M4; // 0x2b8(0x08)
	UImage* M5; // 0x2c0(0x08)
	UImage* M6; // 0x2c8(0x08)
	UImage* M7; // 0x2d0(0x08)
	UImage* M8; // 0x2d8(0x08)
	UImage* M9; // 0x2e0(0x08)
	float Opacity High; // 0x2e8(0x04)
	APlayerCharacter* Character; // 0x2f0(0x08)
	float Opacity Low; // 0x2f8(0x04)
	FTimerHandle BuckShotCheckTimer; // 0x300(0x08)
	TArray<UImage*> MissileCounters; // 0x308(0x10)

	void SetData(AItem* Item);
	void Construct();
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void StartCharging();
	void EndCharge();
	void ToggleBuckShotCrosshair(float Spread);
	void CheckBuckShot();
	void ExecuteUbergraph_HUD_CrosMicroMissileLauncher(int32_t EntryPoint);
};

