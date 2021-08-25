// WidgetBlueprintGeneratedClass Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C
// Size: 0x2c9 (Inherited: 0x230)
struct UBasic_Menu_LargeWindowWithHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBackgroundBlur* BackgroundBlur_2; // 0x238(0x08)
	struct UBackgroundBlur* BackgroundBlur_3; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_Top2; // 0x248(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBarMain; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBarMain2; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBarTop; // 0x260(0x08)
	struct UTextBlock* DATA_HeaderText; // 0x268(0x08)
	struct UBorder* HeaderBG; // 0x270(0x08)
	struct UBorder* MainWindowBG; // 0x278(0x08)
	struct UBorder* MainWindowBorder_Bottom; // 0x280(0x08)
	struct UNamedSlot* PutStuffHere; // 0x288(0x08)
	struct UTextBlock* TXT_Bottom3; // 0x290(0x08)
	struct UTextBlock* versionTxt; // 0x298(0x08)
	struct FLinearColor Edge_Tint; // 0x2a0(0x10)
	struct FText HeaderText; // 0x2b0(0x18)
	bool DisableBackgroundBlur; // 0x2c8(0x01)

	void Set Header Text(struct FText InText); // Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.Set Header Text
	void PreConstruct(bool IsDesignTime); // Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.PreConstruct
	void Construct(); // Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.Construct
	void ExecuteUbergraph_Basic_Menu_LargeWindowWithHeader(int32_t EntryPoint); // Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowWithHeader
};

