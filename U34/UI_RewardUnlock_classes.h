// WidgetBlueprintGeneratedClass UI_RewardUnlock.UI_RewardUnlock_C
// Size: 0x290 (Inherited: 0x238)
struct UUI_RewardUnlock_C : URewardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* CelebrateAnim; // 0x240(0x08)
	struct UImage* BigImage; // 0x248(0x08)
	struct USizeBox* BigImageSize; // 0x250(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x258(0x08)
	struct UImage* IconLeft; // 0x260(0x08)
	struct UImage* IconRight; // 0x268(0x08)
	struct UWidgetSwitcher* ImageSwitcher; // 0x270(0x08)
	struct UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon; // 0x278(0x08)
	struct UTextBlock* UnlockedText; // 0x280(0x08)
	struct UTextBlock* UnlockTitle; // 0x288(0x08)

	void SelectCharacterID(struct UPlayerCharacterID* OptionalID, struct UPlayerCharacterID* OutputPin); // Function UI_RewardUnlock.UI_RewardUnlock_C.SelectCharacterID
	void GetUnlockDetails(struct FText OutTitle, struct UTexture* Icon, struct FLinearColor IconTint, struct UTexture2D* BigImage); // Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails
	void PreConstruct(bool IsDesignTime); // Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct
	void PlayReceiveAnim(); // Function UI_RewardUnlock.UI_RewardUnlock_C.PlayReceiveAnim
	void ExecuteUbergraph_UI_RewardUnlock(int32_t EntryPoint); // Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock
};

