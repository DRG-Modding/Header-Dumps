// WidgetBlueprintGeneratedClass WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C
// Size: 0x268 (Inherited: 0x250)
struct UWeaponDisplay_SentryGun_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Fire; // 0x258(0x08)
	UTextBlock* AmmoCount; // 0x260(0x08)

	void SetSentry(ASentryGun* SentryGun);
	void OnAmmoCountChanged(int32_t AmmoCount, int32_t Change);
	void Construct();
	void ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount(int32_t EntryPoint);
};

