// WidgetBlueprintGeneratedClass ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_Overclock_Details_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* AdvantagousIcon; // 0x238(0x08)
	struct UTextBlock* DetailText; // 0x240(0x08)
	struct UBorder* InnerBorder; // 0x248(0x08)
	struct UBorder* OuterBorder; // 0x250(0x08)
	struct FText Text; // 0x258(0x18)
	bool IsAdvantagous; // 0x270(0x01)
	char UnknownData_271[0x3]; // 0x271(0x03)
	int32_t FontSize; // 0x274(0x04)

	void SetFontSize(int32_t NewSize); // Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetFontSize
	void SetData(struct FText InText, bool InIsAdvantagous); // Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.PreConstruct
	void ExecuteUbergraph_ITM_Overclock_Details_Item(int32_t EntryPoint); // Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.ExecuteUbergraph_ITM_Overclock_Details_Item
};

