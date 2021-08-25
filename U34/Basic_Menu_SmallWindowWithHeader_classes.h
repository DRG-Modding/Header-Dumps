// WidgetBlueprintGeneratedClass Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C
// Size: 0x563 (Inherited: 0x230)
struct UBasic_Menu_SmallWindowWithHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2; // 0x248(0x08)
	struct UBorder* Brackets; // 0x250(0x08)
	struct USizeBox* CornerDoubleBars_Left; // 0x258(0x08)
	struct USizeBox* CornerDoubleBars_Right; // 0x260(0x08)
	struct UTextBlock* Counter; // 0x268(0x08)
	struct UTextBlock* DATA_HeaderText; // 0x270(0x08)
	struct UBorder* DoubleBar_Left1; // 0x278(0x08)
	struct UBorder* DoubleBar_Left2; // 0x280(0x08)
	struct UBorder* DoubleBar_Right1; // 0x288(0x08)
	struct UBorder* DoubleBar_Right2; // 0x290(0x08)
	struct UBorder* HeaderBG; // 0x298(0x08)
	struct UBorder* MainBG; // 0x2a0(0x08)
	struct UNamedSlot* PutStuffHere; // 0x2a8(0x08)
	struct UButton* WindowButton; // 0x2b0(0x08)
	struct FText HeaderText; // 0x2b8(0x18)
	bool ShowCounter; // 0x2d0(0x01)
	bool WindowIsButton; // 0x2d1(0x01)
	char UnknownData_2D2[0x6]; // 0x2d2(0x06)
	struct FMulticastInlineDelegate On Clicked; // 0x2d8(0x10)
	struct FButtonStyle ButtonStyle; // 0x2e8(0x278)
	bool Brackets Active; // 0x560(0x01)
	bool SidesActive; // 0x561(0x01)
	char HeaderColor; // 0x562(0x01)

	void SetHeaderText(struct FText NewHeaderText); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetHeaderText
	bool IsHovering(); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.IsHovering
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.PreConstruct
	void SetCounterText(struct FText InText); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetCounterText
	void ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader(int32_t EntryPoint); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader
	void On Clicked__DelegateSignature(); // Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.On Clicked__DelegateSignature
};

