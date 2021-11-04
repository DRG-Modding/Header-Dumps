// WidgetBlueprintGeneratedClass UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C
// Size: 0x288 (Inherited: 0x238)
struct UUI_RewardUnlock_Vanity_C : URewardWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UWidgetAnimation* CelebrateAnim; // 0x240(0x08)
	UImage* CategoryIcon; // 0x248(0x08)
	USizeBox* CategorySizer; // 0x250(0x08)
	UOverlay* IconOverlay; // 0x258(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x260(0x08)
	UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon; // 0x268(0x08)
	UTextBlock* Subtitle; // 0x270(0x08)
	UHorizontalBox* TextAndCharacterBox; // 0x278(0x08)
	UTextBlock* UnlockTitle; // 0x280(0x08)

	void SetCharacterIcon(UPlayerCharacterID* characterID, UPlayerCharacterID* OutCharacterID);
	void SelectCharacterID(UPlayerCharacterID* OptionalID, UPlayerCharacterID* OutputPin);
	void GetUnlockDetails(FText OutTitle, FText OutSubTitle, UTexture* Icon);
	void PreConstruct(bool IsDesignTime);
	void PlayReceiveAnim();
	void Construct();
	void ExecuteUbergraph_UI_RewardUnlock_Vanity(int32_t EntryPoint);
};

