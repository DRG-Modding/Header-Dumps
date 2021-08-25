// WidgetBlueprintGeneratedClass ITM_SupplyBarItem.ITM_SupplyBarItem_C
// Size: 0x259 (Inherited: 0x230)
struct UITM_SupplyBarItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimBlink; // 0x238(0x08)
	struct UImage* IMG_Border; // 0x240(0x08)
	struct UImage* IMG_Inner; // 0x248(0x08)
	bool IsActivated; // 0x250(0x01)
	char BorderColor; // 0x251(0x01)
	char InnerColor; // 0x252(0x01)
	bool IsBlinking; // 0x253(0x01)
	float BlinkUnder; // 0x254(0x04)
	char LowColorColor; // 0x258(0x01)

	void SetProgress(float InProgress); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetProgress
	void SetColors(char InBorderColor, char InInnerColor, char InLowColorColor); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetColors
	void SetOn(bool IsOn); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetOn
	void PreConstruct(bool IsDesignTime); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.PreConstruct
	void Construct(); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.Construct
	void OnBlinkingFinished(); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.OnBlinkingFinished
	void ExecuteUbergraph_ITM_SupplyBarItem(int32_t EntryPoint); // Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.ExecuteUbergraph_ITM_SupplyBarItem
};

