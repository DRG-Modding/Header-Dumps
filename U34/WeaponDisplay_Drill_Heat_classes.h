// WidgetBlueprintGeneratedClass WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C
// Size: 0x260 (Inherited: 0x230)
struct UWeaponDisplay_Drill_Heat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Flash; // 0x238(0x08)
	struct UImage* Image_89; // 0x240(0x08)
	struct UImage* Image_132; // 0x248(0x08)
	struct UTextBlock* TextBlock_441; // 0x250(0x08)
	struct UTextBlock* TextBlock_HeatValue; // 0x258(0x08)

	void SetHeatValue(float HeatPercentage, bool Overheated); // Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.SetHeatValue
	void Construct(); // Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Construct
	void ExecuteUbergraph_WeaponDisplay_Drill_Heat(int32_t EntryPoint); // Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.ExecuteUbergraph_WeaponDisplay_Drill_Heat
};

