// WidgetBlueprintGeneratedClass ITM_CharacterIcon.ITM_CharacterIcon_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_CharacterIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Border_CharacterColor; // 0x238(0x08)
	struct UImage* Border_CharacterColorBG; // 0x240(0x08)
	struct UImage* Border_Outer; // 0x248(0x08)
	struct UUI_MaskedImage_C* Icon_Character; // 0x250(0x08)
	struct UITM_HostIcon_C* Icon_Host; // 0x258(0x08)
	struct UITM_RetirementBadge_C* Icon_Promotion; // 0x260(0x08)
	struct USizeBox* SizeBox_1; // 0x268(0x08)
	struct UPlayerCharacterID* Character; // 0x270(0x08)
	bool ShowPromotion; // 0x278(0x01)
	bool ShowHost; // 0x279(0x01)
	char UnknownData_27A[0x2]; // 0x27a(0x02)
	float Base Icon Size; // 0x27c(0x04)

	void SetFromCharacterID(struct UPlayerCharacterID* characterID); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterID
	void SetFromCharacterClass(struct UPlayerCharacterID* InCharacterClass); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterClass
	void SetFromPlayerCharacter(struct APlayerCharacter* Character); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerCharacter
	void SetFromPlayerState(struct APlayerState* InState); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerState
	void SetBaseSize(float Size); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetBaseSize
	void SetShowPromotion(bool Index); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowPromotion
	void SetImage(struct UTexture2D* Value, struct FLinearColor InColorAndOpacity); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetImage
	void SetCharacterImageAndColor(struct UPlayerCharacterID* Character); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetCharacterImageAndColor
	void SetShowHostIcon(bool Index); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowHostIcon
	void PreConstruct(bool IsDesignTime); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct
	void ExecuteUbergraph_ITM_CharacterIcon(int32_t EntryPoint); // Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon
};

