// WidgetBlueprintGeneratedClass HUD_WeaponName.HUD_WeaponName_C
// Size: 0x260 (Inherited: 0x230)
struct UHUD_WeaponName_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x238(0x08)
	struct UTextBlock* DATA_ItemCategory; // 0x240(0x08)
	struct UTextBlock* DATA_ItemName; // 0x248(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x250(0x08)
	struct APlayerCharacter* Character; // 0x258(0x08)

	void UpdateLabel(); // Function HUD_WeaponName.HUD_WeaponName_C.UpdateLabel
	void Construct(); // Function HUD_WeaponName.HUD_WeaponName_C.Construct
	void OnItemEquipped(struct AItem* Item); // Function HUD_WeaponName.HUD_WeaponName_C.OnItemEquipped
	void PreConstruct(bool IsDesignTime); // Function HUD_WeaponName.HUD_WeaponName_C.PreConstruct
	void ExecuteUbergraph_HUD_WeaponName(int32_t EntryPoint); // Function HUD_WeaponName.HUD_WeaponName_C.ExecuteUbergraph_HUD_WeaponName
};

