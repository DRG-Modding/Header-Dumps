// WidgetBlueprintGeneratedClass WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C
// Size: 0x250 (Inherited: 0x230)
struct UWeaponDisplay_Base_AmmoCount_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UItemAggregator* Aggregator; // 0x238(0x08)
	struct AItem* Item; // 0x240(0x08)
	struct UWidgetComponent* WidgComp; // 0x248(0x08)

	void SetMaxAmmo(int32_t Value); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo
	void RequestRedraw(); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw
	void SetTotalCount(int32_t Value); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount
	void SetClipCount(int32_t Value); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount
	void OnTotalAmountChanged(int32_t amount); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged
	void OnClipEmountChanged(int32_t amount); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipEmountChanged
	void OnCarriedAmountChanged(int32_t amount); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged
	void OnTotalAmountChange(int32_t amount); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange
	void Initialize(struct AItem* OwningItem, struct UWidgetComponent* WidgetComp); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Initialize
	void OnReloadStarted(); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted
	void OnReloadComplete(); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete
	void Max Ammo Changed(int32_t amount); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed
	void Total Ammo left changed(int32_t amount); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed
	void Reload Time Tick(float amount); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick
	void ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int32_t EntryPoint); // Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount
};

