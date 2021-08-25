// WidgetBlueprintGeneratedClass WeaponDisplay_Overheat.WeaponDisplay_Overheat_C
// Size: 0x250 (Inherited: 0x230)
struct UWeaponDisplay_Overheat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_89; // 0x238(0x08)
	struct UTextBlock* TextBlock_HeatValue; // 0x240(0x08)
	struct UTextBlock* TextBlock_Status; // 0x248(0x08)

	void SetHeatValue(float HeatPercentage, bool Overheated); // Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.SetHeatValue
	void Construct(); // Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.Construct
	void ExecuteUbergraph_WeaponDisplay_Overheat(int32_t EntryPoint); // Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.ExecuteUbergraph_WeaponDisplay_Overheat
};

