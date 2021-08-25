// WidgetBlueprintGeneratedClass Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C
// Size: 0x27c (Inherited: 0x230)
struct UWidget_DropPod_AltitudeMeter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AlertBlink; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_147; // 0x248(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_149; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_150; // 0x258(0x08)
	struct UTextBlock* HeaderText; // 0x260(0x08)
	struct UImage* Image_42; // 0x268(0x08)
	struct UTextBlock* TextBlockDepth; // 0x270(0x08)
	float Depth; // 0x278(0x04)

	void UpdateHeader(struct FText InText); // Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateHeader
	void UpdateDepthText(); // Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateDepthText
	void SetProgress(float Progress); // Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.SetProgress
	void Construct(); // Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.Construct
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.OnGeneratedMissionChanged
	void ExecuteUbergraph_Widget_DropPod_AltitudeMeter(int32_t EntryPoint); // Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_Widget_DropPod_AltitudeMeter
};

