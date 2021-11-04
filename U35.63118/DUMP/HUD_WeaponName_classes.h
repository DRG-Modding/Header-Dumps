// WidgetBlueprintGeneratedClass HUD_WeaponName.HUD_WeaponName_C
// Size: 0x260 (Inherited: 0x230)
struct UHUD_WeaponName_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x238(0x08)
	UTextBlock* DATA_ItemCategory; // 0x240(0x08)
	UTextBlock* DATA_ItemName; // 0x248(0x08)
	UInvalidationBox* InvalidationBox_1; // 0x250(0x08)
	APlayerCharacter* Character; // 0x258(0x08)

	void UpdateLabel();
	void Construct();
	void OnItemEquipped(AItem* Item);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_WeaponName(int32_t EntryPoint);
};

