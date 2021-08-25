// WidgetBlueprintGeneratedClass WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C
// Size: 0x290 (Inherited: 0x250)
struct UWeaponDisplay_ChargeBlaster_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* AmmoCritical; // 0x258(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x260(0x08)
	struct UTextBlock* DATA_AmmoCount; // 0x268(0x08)
	struct UImage* Image_1; // 0x270(0x08)
	struct UImage* Image_2; // 0x278(0x08)
	struct UImage* Image_89; // 0x280(0x08)
	struct UImage* WarningOverlay; // 0x288(0x08)

	void UpdateAmount(int32_t Value); // Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.UpdateAmount
	void SetTotalCount(int32_t Value); // Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetTotalCount
	void Construct(); // Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Construct
	void Max Ammo Changed(int32_t amount); // Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Max Ammo Changed
	void Total Ammo left changed(int32_t amount); // Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Total Ammo left changed
	void SetClipCount(int32_t Value); // Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetClipCount
	void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter(int32_t EntryPoint); // Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter
};

