// WidgetBlueprintGeneratedClass UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C
// Size: 0x288 (Inherited: 0x238)
struct UUI_RewardUnlock_Vanity_C : URewardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* CelebrateAnim; // 0x240(0x08)
	struct UImage* CategoryIcon; // 0x248(0x08)
	struct USizeBox* CategorySizer; // 0x250(0x08)
	struct UOverlay* IconOverlay; // 0x258(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x260(0x08)
	struct UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon; // 0x268(0x08)
	struct UTextBlock* Subtitle; // 0x270(0x08)
	struct UHorizontalBox* TextAndCharacterBox; // 0x278(0x08)
	struct UTextBlock* UnlockTitle; // 0x280(0x08)

	void SetCharacterIcon(struct UPlayerCharacterID* characterID, struct UPlayerCharacterID* OutCharacterID); // Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SetCharacterIcon
	void SelectCharacterID(struct UPlayerCharacterID* OptionalID, struct UPlayerCharacterID* OutputPin); // Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SelectCharacterID
	void GetUnlockDetails(struct FText OutTitle, struct FText OutSubTitle, struct UTexture* Icon); // Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.GetUnlockDetails
	void PreConstruct(bool IsDesignTime); // Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PreConstruct
	void PlayReceiveAnim(); // Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PlayReceiveAnim
	void Construct(); // Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.Construct
	void ExecuteUbergraph_UI_RewardUnlock_Vanity(int32_t EntryPoint); // Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.ExecuteUbergraph_UI_RewardUnlock_Vanity
};

