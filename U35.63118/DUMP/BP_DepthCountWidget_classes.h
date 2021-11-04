// WidgetBlueprintGeneratedClass BP_DepthCountWidget.BP_DepthCountWidget_C
// Size: 0x26c (Inherited: 0x230)
struct UBP_DepthCountWidget_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AlertBlink; // 0x238(0x08)
	UImage* Image_51; // 0x240(0x08)
	UTextBlock* TextBlock_5; // 0x248(0x08)
	UTextBlock* TextBlock_6; // 0x250(0x08)
	UTextBlock* TextBlock_7; // 0x258(0x08)
	UTextBlock* TextBlockDepth; // 0x260(0x08)
	float Depth; // 0x268(0x04)

	void UpdateDepthText();
	void SetProgress(float Progress);
	void Construct();
	void ExecuteUbergraph_BP_DepthCountWidget(int32_t EntryPoint);
};

