// WidgetBlueprintGeneratedClass UI_RewardUnlock.UI_RewardUnlock_C
// Size: 0x290 (Inherited: 0x238)
struct UUI_RewardUnlock_C : URewardWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UWidgetAnimation* CelebrateAnim; // 0x240(0x08)
	UImage* BigImage; // 0x248(0x08)
	USizeBox* BigImageSize; // 0x250(0x08)
	UHorizontalBox* HorizontalBox_2; // 0x258(0x08)
	UImage* IconLeft; // 0x260(0x08)
	UImage* IconRight; // 0x268(0x08)
	UWidgetSwitcher* ImageSwitcher; // 0x270(0x08)
	UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon; // 0x278(0x08)
	UTextBlock* UnlockedText; // 0x280(0x08)
	UTextBlock* UnlockTitle; // 0x288(0x08)

	void SelectCharacterID(UPlayerCharacterID* OptionalID, UPlayerCharacterID* OutputPin);
	void GetUnlockDetails(FText OutTitle, UTexture* Icon, FLinearColor IconTint, UTexture2D* BigImage);
	void PreConstruct(bool IsDesignTime);
	void PlayReceiveAnim();
	void ExecuteUbergraph_UI_RewardUnlock(int32_t EntryPoint);
};

