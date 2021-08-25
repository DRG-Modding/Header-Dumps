// WidgetBlueprintGeneratedClass BP_DepthCountWidget.BP_DepthCountWidget_C
// Size: 0x26c (Inherited: 0x230)
struct UBP_DepthCountWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AlertBlink; // 0x238(0x08)
	struct UImage* Image_51; // 0x240(0x08)
	struct UTextBlock* TextBlock_5; // 0x248(0x08)
	struct UTextBlock* TextBlock_6; // 0x250(0x08)
	struct UTextBlock* TextBlock_7; // 0x258(0x08)
	struct UTextBlock* TextBlockDepth; // 0x260(0x08)
	float Depth; // 0x268(0x04)

	void UpdateDepthText(); // Function BP_DepthCountWidget.BP_DepthCountWidget_C.UpdateDepthText
	void SetProgress(float Progress); // Function BP_DepthCountWidget.BP_DepthCountWidget_C.SetProgress
	void Construct(); // Function BP_DepthCountWidget.BP_DepthCountWidget_C.Construct
	void ExecuteUbergraph_BP_DepthCountWidget(int32_t EntryPoint); // Function BP_DepthCountWidget.BP_DepthCountWidget_C.ExecuteUbergraph_BP_DepthCountWidget
};

