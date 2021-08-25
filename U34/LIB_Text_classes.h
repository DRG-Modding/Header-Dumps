// BlueprintGeneratedClass LIB_Text.LIB_Text_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Text_C : UBlueprintFunctionLibrary {

	void Select CharacterText(struct APlayerCharacter* Character, struct FText DrillerText, struct FText GunnerText, struct FText ScoutText, struct FText EngineerText, struct FText BoscoText, struct FText NoneText, struct UObject* __WorldContext, struct FText OutText); // Function LIB_Text.LIB_Text_C.Select CharacterText
	void Select Character Class Text(struct UPlayerCharacterID* CharacterClass, struct FText DrillerText, struct FText GunnerText, struct FText ScoutText, struct FText EngineerText, struct FText BoscoText, struct FText NoneText, struct UObject* __WorldContext, struct FText OutText); // Function LIB_Text.LIB_Text_C.Select Character Class Text
	void Select Character ID Text(struct UPlayerCharacterID* characterID, struct FText DrillerText, struct FText GunnerText, struct FText ScoutText, struct FText EngineerText, struct FText BoscoText, struct FText NoneText, struct UObject* __WorldContext, struct FText OutText); // Function LIB_Text.LIB_Text_C.Select Character ID Text
	void GetTimeText(float Dividend, struct UObject* __WorldContext, struct FText Text); // Function LIB_Text.LIB_Text_C.GetTimeText
	void SetTextCased(struct UTextBlock* Target, struct FText InText, char Text Case, struct UObject* __WorldContext); // Function LIB_Text.LIB_Text_C.SetTextCased
	void GetFontSize(struct UTextBlock* Label, struct UObject* __WorldContext, int32_t Size); // Function LIB_Text.LIB_Text_C.GetFontSize
	void SetFontSize(struct UTextBlock* Label, int32_t NewSize, struct UObject* __WorldContext); // Function LIB_Text.LIB_Text_C.SetFontSize
	void SetTextUpperCased(struct UTextBlock* Target, struct FText InText, struct UObject* __WorldContext); // Function LIB_Text.LIB_Text_C.SetTextUpperCased
	void GetDisconnectReasonCaption(enum class EDisconnectReason DisconnectReason, struct UObject* __WorldContext, struct FText Text); // Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption
	void GetDisconnectReasonText(enum class EDisconnectReason DisconnectReason, struct UObject* __WorldContext, struct FText Text); // Function LIB_Text.LIB_Text_C.GetDisconnectReasonText
};

