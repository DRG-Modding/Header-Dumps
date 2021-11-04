// WidgetBlueprintGeneratedClass Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C
// Size: 0x290 (Inherited: 0x230)
struct UBasic_Menu_LargeWindowNoHeader_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* dataReadout; // 0x238(0x08)
	UBorder* MainWindowBG; // 0x240(0x08)
	UBorder* MainWindowBorder_Bottom; // 0x248(0x08)
	UNamedSlot* PutStuffHere; // 0x250(0x08)
	UTextBlock* TextBlock_4; // 0x258(0x08)
	float BG_Opacity; // 0x260(0x04)
	FLinearColor Edge_Tint; // 0x264(0x10)
	FText HeaderText; // 0x278(0x18)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader(int32_t EntryPoint);
};

