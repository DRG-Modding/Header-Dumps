// WidgetBlueprintGeneratedClass WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C
// Size: 0x2b0 (Inherited: 0x230)
struct UWeaponDisplay_ChargeBlaster_Charge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x238(0x08)
	struct UBorder* Block1; // 0x240(0x08)
	struct UBorder* Block2; // 0x248(0x08)
	struct UBorder* Block3; // 0x250(0x08)
	struct UBorder* Border_13; // 0x258(0x08)
	struct UBorder* Border_14; // 0x260(0x08)
	struct UBorder* Border_15; // 0x268(0x08)
	struct UBorder* Border_16; // 0x270(0x08)
	struct UImage* Image_1; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UImage* Image_89; // 0x288(0x08)
	struct FLinearColor ChargeColorOff; // 0x290(0x10)
	struct FLinearColor ChargeColor1; // 0x2a0(0x10)

	void Construct(); // Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.Construct
	void SetChargeValue(float ChargeValue, bool Overheated, bool ready, bool FullCharge); // Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.SetChargeValue
	void PreConstruct(bool IsDesignTime); // Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.PreConstruct
	void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge(int32_t EntryPoint); // Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge
};

