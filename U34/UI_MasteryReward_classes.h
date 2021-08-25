// WidgetBlueprintGeneratedClass UI_MasteryReward.UI_MasteryReward_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_MasteryReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* ICON_GearFiller; // 0x238(0x08)
	struct UImage* ICON_GearOutline; // 0x240(0x08)
	struct UITM_SkinIcon_C* ITM_SkinIcon; // 0x248(0x08)
	struct UOverlay* Overlay_1; // 0x250(0x08)
	struct USizeBox* SizeBox_Weapon_Icon; // 0x258(0x08)
	struct UTextBlock* TextBlock_Bonus; // 0x260(0x08)
	struct UTextBlock* TextBlock_Description; // 0x268(0x08)
	struct UUnlockReward* Reward; // 0x270(0x08)
	struct UUpgradableGearComponent* ItemGearComponent; // 0x278(0x08)

	void Construct(); // Function UI_MasteryReward.UI_MasteryReward_C.Construct
	void ExecuteUbergraph_UI_MasteryReward(int32_t EntryPoint); // Function UI_MasteryReward.UI_MasteryReward_C.ExecuteUbergraph_UI_MasteryReward
};

