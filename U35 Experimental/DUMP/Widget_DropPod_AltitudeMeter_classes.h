// WidgetBlueprintGeneratedClass Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C
// Size: 0x27c (Inherited: 0x230)
struct UWidget_DropPod_AltitudeMeter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AlertBlink; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_147; // 0x248(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_149; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_150; // 0x258(0x08)
	UTextBlock* HeaderText; // 0x260(0x08)
	UImage* Image_42; // 0x268(0x08)
	UTextBlock* TextBlockDepth; // 0x270(0x08)
	float Depth; // 0x278(0x04)

	void UpdateHeader(FText InText);
	void UpdateDepthText();
	void SetProgress(float Progress);
	void Construct();
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void ExecuteUbergraph_Widget_DropPod_AltitudeMeter(int32_t EntryPoint);
};

