// WidgetBlueprintGeneratedClass ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_DeepDiveHeaderElite_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_106; // 0x238(0x08)
	UImage* Image_108; // 0x240(0x08)
	UImage* Image_109; // 0x248(0x08)
	UImage* Image_110; // 0x250(0x08)
	UShadowBG_C* ShadowBG; // 0x258(0x08)
	UTextBlock* TextBlock_114; // 0x260(0x08)
	FText EliteContents; // 0x268(0x18)

	void SetEliteContents(FText EliteContents);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_DeepDiveHeaderElite(int32_t EntryPoint);
};

