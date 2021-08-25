// WidgetBlueprintGeneratedClass ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C
// Size: 0x27c (Inherited: 0x250)
struct UITM_CharacterBuffIcon_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Intro; // 0x258(0x08)
	struct UImage* BarBuff; // 0x260(0x08)
	struct USizeBox* SizeBox_1; // 0x268(0x08)
	struct UTemporaryBuff* CurrentBuf; // 0x270(0x08)
	float Size; // 0x278(0x04)

	void OnLoaded_4CD03633471C127A79FA3D8CDA739676(struct UObject* Loaded); // Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.OnLoaded_4CD03633471C127A79FA3D8CDA739676
	void PreConstruct(bool IsDesignTime); // Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.PreConstruct
	void Construct(); // Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.Construct
	void OnTemporaryBuffChanged(struct UTemporaryBuff* buff, struct APlayerCharacter* AffectedPlayer); // Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.OnTemporaryBuffChanged
	void ExecuteUbergraph_ITM_CharacterBuffIcon(int32_t EntryPoint); // Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.ExecuteUbergraph_ITM_CharacterBuffIcon
};

