// WidgetBlueprintGeneratedClass WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C
// Size: 0x290 (Inherited: 0x250)
struct UWeaponDisplay_ChargeBlaster_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* AmmoCritical; // 0x258(0x08)
	UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x260(0x08)
	UTextBlock* DATA_AmmoCount; // 0x268(0x08)
	UImage* Image_1; // 0x270(0x08)
	UImage* Image_2; // 0x278(0x08)
	UImage* Image_89; // 0x280(0x08)
	UImage* WarningOverlay; // 0x288(0x08)

	void UpdateAmount(int32_t Value);
	void SetTotalCount(int32_t Value);
	void Construct();
	void Max Ammo Changed(int32_t amount);
	void Total Ammo left changed(int32_t amount);
	void SetClipCount(int32_t Value);
	void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter(int32_t EntryPoint);
};

