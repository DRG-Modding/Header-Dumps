// WidgetBlueprintGeneratedClass WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C
// Size: 0x2b0 (Inherited: 0x230)
struct UWeaponDisplay_ChargeBlaster_Charge_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x238(0x08)
	UBorder* Block1; // 0x240(0x08)
	UBorder* Block2; // 0x248(0x08)
	UBorder* Block3; // 0x250(0x08)
	UBorder* Border_13; // 0x258(0x08)
	UBorder* Border_14; // 0x260(0x08)
	UBorder* Border_15; // 0x268(0x08)
	UBorder* Border_16; // 0x270(0x08)
	UImage* Image_1; // 0x278(0x08)
	UImage* Image_2; // 0x280(0x08)
	UImage* Image_89; // 0x288(0x08)
	FLinearColor ChargeColorOff; // 0x290(0x10)
	FLinearColor ChargeColor1; // 0x2a0(0x10)

	void Construct();
	void SetChargeValue(float ChargeValue, bool Overheated, bool ready, bool FullCharge);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge(int32_t EntryPoint);
};

