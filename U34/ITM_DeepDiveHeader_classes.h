// WidgetBlueprintGeneratedClass ITM_DeepDiveHeader.ITM_DeepDiveHeader_C
// Size: 0x289 (Inherited: 0x230)
struct UITM_DeepDiveHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_189; // 0x238(0x08)
	struct UImage* Image_305; // 0x240(0x08)
	struct UITM_DeepDiveHeaderElite_C* ITM_DeepDiveHeaderElite; // 0x248(0x08)
	struct UShadowBG_C* ShadowBG; // 0x250(0x08)
	struct USizeBox* SizeBox_1; // 0x258(0x08)
	struct UTextBlock* TXT_DeepDive_BG; // 0x260(0x08)
	struct UTextBlock* TXT_DeepDive_Front; // 0x268(0x08)
	struct FText Header Contents; // 0x270(0x18)
	bool EliteActive; // 0x288(0x01)

	void FromActiveDeepDive(); // Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive
	void FromDeepDive(struct UDeepDive* InDeepDive); // Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive
	void SetEliteActive(bool EliteActive); // Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive
	void SetHeaderContents(struct FText Header Contents); // Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents
	void PreConstruct(bool IsDesignTime); // Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct
	void ExecuteUbergraph_ITM_DeepDiveHeader(int32_t EntryPoint); // Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader
};

