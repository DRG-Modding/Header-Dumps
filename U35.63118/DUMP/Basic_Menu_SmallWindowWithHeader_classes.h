// WidgetBlueprintGeneratedClass Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C
// Size: 0x563 (Inherited: 0x230)
struct UBasic_Menu_SmallWindowWithHeader_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2; // 0x248(0x08)
	UBorder* Brackets; // 0x250(0x08)
	USizeBox* CornerDoubleBars_Left; // 0x258(0x08)
	USizeBox* CornerDoubleBars_Right; // 0x260(0x08)
	UTextBlock* Counter; // 0x268(0x08)
	UTextBlock* DATA_headerText; // 0x270(0x08)
	UBorder* DoubleBar_Left1; // 0x278(0x08)
	UBorder* DoubleBar_Left2; // 0x280(0x08)
	UBorder* DoubleBar_Right1; // 0x288(0x08)
	UBorder* DoubleBar_Right2; // 0x290(0x08)
	UBorder* HeaderBG; // 0x298(0x08)
	UBorder* MainBG; // 0x2a0(0x08)
	UNamedSlot* PutStuffHere; // 0x2a8(0x08)
	UButton* WindowButton; // 0x2b0(0x08)
	FText HeaderText; // 0x2b8(0x18)
	bool ShowCounter; // 0x2d0(0x01)
	bool WindowIsButton; // 0x2d1(0x01)
	FMulticastInlineDelegate On Clicked; // 0x2d8(0x10)
	FButtonStyle ButtonStyle; // 0x2e8(0x278)
	bool Brackets Active; // 0x560(0x01)
	bool SidesActive; // 0x561(0x01)
	enum class ENUM_MenuColors HeaderColor; // 0x562(0x01)

	void SetHeaderText(FText NewHeaderText);
	bool IsHovering();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetCounterText(FText InText);
	void ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader(int32_t EntryPoint);
	void On Clicked__DelegateSignature();
};

