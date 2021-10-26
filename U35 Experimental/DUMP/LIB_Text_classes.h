// BlueprintGeneratedClass LIB_Text.LIB_Text_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Text_C : UBlueprintFunctionLibrary {

	void Select CharacterText(APlayerCharacter* Character, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, UObject* __WorldContext, FText OutText);
	void Select Character Class Text(UPlayerCharacterID* CharacterClass, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, UObject* __WorldContext, FText OutText);
	void Select Character ID Text(UPlayerCharacterID* characterID, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, UObject* __WorldContext, FText OutText);
	void GetTimeText(float Dividend, UObject* __WorldContext, FText Text);
	void SetTextCased(UTextBlock* Target, FText InText, enum class ENU_TextCase Text Case, UObject* __WorldContext);
	void GetFontSize(UTextBlock* Label, UObject* __WorldContext, int32_t Size);
	void SetFontSize(UTextBlock* Label, int32_t NewSize, UObject* __WorldContext);
	void SetTextUpperCased(UTextBlock* Target, FText InText, UObject* __WorldContext);
	void GetDisconnectReasonCaption(enum class EDisconnectReason DisconnectReason, UObject* __WorldContext, FText Text);
	void GetDisconnectReasonText(enum class EDisconnectReason DisconnectReason, UObject* __WorldContext, FText Text);
};

