// WidgetBlueprintGeneratedClass ITM_DeepDiveHeader.ITM_DeepDiveHeader_C
// Size: 0x289 (Inherited: 0x230)
struct UITM_DeepDiveHeader_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_189; // 0x238(0x08)
	UImage* Image_305; // 0x240(0x08)
	UITM_DeepDiveHeaderElite_C* ITM_DeepDiveHeaderElite; // 0x248(0x08)
	UShadowBG_C* ShadowBG; // 0x250(0x08)
	USizeBox* SizeBox_1; // 0x258(0x08)
	UTextBlock* TXT_DeepDive_BG; // 0x260(0x08)
	UTextBlock* TXT_DeepDive_Front; // 0x268(0x08)
	FText Header Contents; // 0x270(0x18)
	bool EliteActive; // 0x288(0x01)

	void FromActiveDeepDive();
	void FromDeepDive(UDeepDive* InDeepDive);
	void SetEliteActive(bool EliteActive);
	void SetHeaderContents(FText Header Contents);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_DeepDiveHeader(int32_t EntryPoint);
};

