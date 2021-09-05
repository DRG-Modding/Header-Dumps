// WidgetBlueprintGeneratedClass HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C
// Size: 0x270 (Inherited: 0x230)
struct UHUD_PlayerClass_Icon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BarBuff; // 0x238(0x08)
	UInvalidationBox* InvalidationBox_3; // 0x240(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x248(0x08)
	FLinearColor Tint_Edge; // 0x250(0x10)
	FLinearColor Tint_Class; // 0x260(0x10)

	void SetBuf(UTemporaryBuff* Buf);
	void SetIsServer(bool IsServer);
	void SetData(APlayerCharacter* playerClass, int32_t TimesRetired, bool IsServer, UTemporaryBuff* Buf);
	void Construct();
	void FromPlayerState(APlayerState* PlayerState, APlayerCharacter* playerClass);
	void OnTemporaryBuffChanged(UTemporaryBuff* buff, APlayerCharacter* AffectedPlayer);
	void ExecuteUbergraph_HUD_PlayerClass_Icon(int32_t EntryPoint);
};

