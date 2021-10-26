// WidgetBlueprintGeneratedClass WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C
// Size: 0x258 (Inherited: 0x230)
struct UWeaponDisplay_CryoSpray_Ammo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* CircularProgressBar; // 0x238(0x08)
	ACryosprayItem* CryoSpray; // 0x240(0x08)
	UAmmoDriveWeaponAggregator* Aggregator; // 0x248(0x08)
	UMaterialInstanceDynamic* ProgressMaterial; // 0x250(0x08)

	void Set Progress(float Progress);
	void ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo(int32_t EntryPoint);
};

