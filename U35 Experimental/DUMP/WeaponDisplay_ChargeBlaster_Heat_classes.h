// WidgetBlueprintGeneratedClass WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C
// Size: 0x278 (Inherited: 0x230)
struct UWeaponDisplay_ChargeBlaster_Heat_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)
	UImage* Image_2; // 0x248(0x08)
	UImage* Image_89; // 0x250(0x08)
	UProgressBar* ProgressBar_1; // 0x258(0x08)
	UTextBlock* TextBlock_HeatValue; // 0x260(0x08)
	FLinearColor OverheatTint; // 0x268(0x10)

	void SetHeatValue(float HeatPercentage, bool Overheated);
	void Construct();
	void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Heat(int32_t EntryPoint);
};

