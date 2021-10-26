// WidgetBlueprintGeneratedClass WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C
// Size: 0x250 (Inherited: 0x230)
struct UWeaponDisplay_Base_AmmoCount_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UItemAggregator* Aggregator; // 0x238(0x08)
	AItem* Item; // 0x240(0x08)
	UWidgetComponent* WidgComp; // 0x248(0x08)

	void SetMaxAmmo(int32_t Value);
	void RequestRedraw();
	void SetTotalCount(int32_t Value);
	void SetClipCount(int32_t Value);
	void OnTotalAmountChanged(int32_t Amount);
	void OnClipEmountChanged(int32_t Amount);
	void OnCarriedAmountChanged(int32_t Amount);
	void OnTotalAmountChange(int32_t Amount);
	void Initialize(AItem* OwningItem, UWidgetComponent* WidgetComp);
	void OnReloadStarted();
	void OnReloadComplete();
	void Max Ammo Changed(int32_t Amount);
	void Total Ammo left changed(int32_t Amount);
	void Reload Time Tick(float Amount);
	void ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int32_t EntryPoint);
};

