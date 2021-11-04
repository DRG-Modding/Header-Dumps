// WidgetBlueprintGeneratedClass WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C
// Size: 0x310 (Inherited: 0x250)
struct UWeaponDisplay_MicroMissileLauncher_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UTextBlock* AmmoCount; // 0x258(0x08)
	UHorizontalBox* ChargeBox; // 0x260(0x08)
	UImage* Image_89; // 0x268(0x08)
	UTextBlock* MaxAmmo; // 0x270(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge; // 0x278(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_2; // 0x280(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_3; // 0x288(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_4; // 0x290(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_5; // 0x298(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_6; // 0x2a0(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_7; // 0x2a8(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_8; // 0x2b0(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_9; // 0x2b8(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_10; // 0x2c0(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_11; // 0x2c8(0x08)
	UUI_MicroMissileLauncher_Charge_C* UI_MicroMissileLauncher_Charge_12; // 0x2d0(0x08)
	AMicroMissileLauncher* MissileLauncherItem; // 0x2d8(0x08)
	TArray<UUI_MicroMissileLauncher_Charge_C*> ChargeIcons; // 0x2e0(0x10)
	FTimerHandle ChargingHandle; // 0x2f0(0x08)
	int32_t CurrentCharge; // 0x2f8(0x04)
	int32_t ClipCount; // 0x2fc(0x04)
	bool Charging; // 0x300(0x01)
	UAudioComponent* PingAudio; // 0x308(0x08)

	void SetCurrentChargeWithAudio(int32_t InCharge);
	void SetTotalCount(int32_t Value);
	void SetClipCount(int32_t Value);
	void Initialize(AItem* OwningItem, UWidgetComponent* WidgetComp);
	void OnStartCharging();
	void OnEndCharging();
	void OnUpdateCharging();
	void Construct();
	void ResetChargingUI(bool InHideIcons);
	void ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher(int32_t EntryPoint);
};

