// WidgetBlueprintGeneratedClass ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_Overclock_Details_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* AdvantagousIcon; // 0x238(0x08)
	UTextBlock* DetailText; // 0x240(0x08)
	UBorder* InnerBorder; // 0x248(0x08)
	UBorder* OuterBorder; // 0x250(0x08)
	FText Text; // 0x258(0x18)
	bool IsAdvantagous; // 0x270(0x01)
	int32_t FontSize; // 0x274(0x04)

	void SetFontSize(int32_t NewSize);
	void SetData(FText InText, bool InIsAdvantagous);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Overclock_Details_Item(int32_t EntryPoint);
};

