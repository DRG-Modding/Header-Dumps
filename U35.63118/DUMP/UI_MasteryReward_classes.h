// WidgetBlueprintGeneratedClass UI_MasteryReward.UI_MasteryReward_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_MasteryReward_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* ICON_GearFiller; // 0x238(0x08)
	UImage* ICON_GearOutline; // 0x240(0x08)
	UITM_SkinIcon_C* ITM_SkinIcon; // 0x248(0x08)
	UOverlay* Overlay_1; // 0x250(0x08)
	USizeBox* SizeBox_Weapon_Icon; // 0x258(0x08)
	UTextBlock* TextBlock_Bonus; // 0x260(0x08)
	UTextBlock* TextBlock_Description; // 0x268(0x08)
	UUnlockReward* Reward; // 0x270(0x08)
	UUpgradableGearComponent* ItemGearComponent; // 0x278(0x08)

	void Construct();
	void ExecuteUbergraph_UI_MasteryReward(int32_t EntryPoint);
};

