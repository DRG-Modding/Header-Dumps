// WidgetBlueprintGeneratedClass Basic_ScrollArrow2.Basic_ScrollArrow2_C
// Size: 0x275 (Inherited: 0x230)
struct UBasic_ScrollArrow2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* arrow_bracket; // 0x238(0x08)
	UImage* arrow_main; // 0x240(0x08)
	UHorizontalBox* HorizontalBox_103; // 0x248(0x08)
	USizeBox* SizeBox_1; // 0x250(0x08)
	USizeBox* SizeBox_2; // 0x258(0x08)
	FMulticastInlineDelegate OnClicked; // 0x260(0x10)
	float ButtonAngle; // 0x270(0x04)
	bool Active; // 0x274(0x01)

	FLinearColor SetActive(bool NewVar_1);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Basic_ScrollArrow2(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

