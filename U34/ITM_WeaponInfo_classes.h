// WidgetBlueprintGeneratedClass ITM_WeaponInfo.ITM_WeaponInfo_C
// Size: 0x2b8 (Inherited: 0x230)
struct UITM_WeaponInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Window_CutCorner_C* Basic_Window_CutCorner_166; // 0x238(0x08)
	struct UImage* GearIcon_BG; // 0x240(0x08)
	struct UImage* GearIcon_Outline; // 0x248(0x08)
	struct UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar; // 0x250(0x08)
	struct UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x258(0x08)
	struct UTextBlock* TextBlock_ItemName; // 0x260(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x268(0x08)
	struct UBorder* Upgrades_BG; // 0x270(0x08)
	struct UUpgradableGearComponent* Upgradable; // 0x278(0x08)
	enum class EItemCategory WeaponSlot; // 0x280(0x01)
	char UnknownData_281[0x7]; // 0x281(0x07)
	struct FText IconName; // 0x288(0x18)
	struct AFSDPlayerState* State; // 0x2a0(0x08)
	struct APlayerCharacter* Character; // 0x2a8(0x08)
	struct AActor* Item; // 0x2b0(0x08)

	void Construct(); // Function ITM_WeaponInfo.ITM_WeaponInfo_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_WeaponInfo.ITM_WeaponInfo_C.PreConstruct
	void Update(); // Function ITM_WeaponInfo.ITM_WeaponInfo_C.Update
	void ExecuteUbergraph_ITM_WeaponInfo(int32_t EntryPoint); // Function ITM_WeaponInfo.ITM_WeaponInfo_C.ExecuteUbergraph_ITM_WeaponInfo
};

