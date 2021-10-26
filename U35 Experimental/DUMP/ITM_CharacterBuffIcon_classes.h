// WidgetBlueprintGeneratedClass ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C
// Size: 0x27c (Inherited: 0x250)
struct UITM_CharacterBuffIcon_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Intro; // 0x258(0x08)
	UImage* BarBuff; // 0x260(0x08)
	USizeBox* SizeBox_1; // 0x268(0x08)
	UTemporaryBuff* CurrentBuf; // 0x270(0x08)
	float Size; // 0x278(0x04)

	void OnLoaded_4CD03633471C127A79FA3D8CDA739676(UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnTemporaryBuffChanged(UTemporaryBuff* buff, APlayerCharacter* AffectedPlayer);
	void ExecuteUbergraph_ITM_CharacterBuffIcon(int32_t EntryPoint);
};

