// WidgetBlueprintGeneratedClass ITM_CharacterIcon.ITM_CharacterIcon_C
// Size: 0x289 (Inherited: 0x230)
struct UITM_CharacterIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Border_CharacterColor; // 0x238(0x08)
	UImage* Border_CharacterColorBG; // 0x240(0x08)
	UImage* Border_Outer; // 0x248(0x08)
	UUI_MaskedImage_C* Icon_Character; // 0x250(0x08)
	UITM_HostIcon_C* Icon_Host; // 0x258(0x08)
	UITM_RetirementBadge_C* Icon_Promotion; // 0x260(0x08)
	UITM_SonyTeamLeader_C* Icon_SonyTeamLeader; // 0x268(0x08)
	USizeBox* SizeBox_1; // 0x270(0x08)
	UPlayerCharacterID* Character; // 0x278(0x08)
	bool ShowPromotion; // 0x280(0x01)
	bool ShowHost; // 0x281(0x01)
	float Base Icon Size; // 0x284(0x04)
	bool ShowSessionLeader; // 0x288(0x01)

	void SetShowSonySessionLeader(bool Index);
	void SetFromCharacterID(UPlayerCharacterID* characterID);
	void SetFromCharacterClass(UPlayerCharacterID* InCharacterClass);
	void SetFromPlayerCharacter(APlayerCharacter* Character);
	void SetFromPlayerState(APlayerState* InState);
	void SetBaseSize(float Size);
	void SetShowPromotion(bool Index);
	void SetImage(UTexture2D* Value, FLinearColor InColorAndOpacity);
	void SetCharacterImageAndColor(UPlayerCharacterID* Character);
	void SetShowHostIcon(bool Index);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_CharacterIcon(int32_t EntryPoint);
};

