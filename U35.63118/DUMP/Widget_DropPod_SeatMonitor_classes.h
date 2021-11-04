// WidgetBlueprintGeneratedClass Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C
// Size: 0x258 (Inherited: 0x230)
struct UWidget_DropPod_SeatMonitor_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* NewAnimation; // 0x238(0x08)
	UImage* Image_42; // 0x240(0x08)
	UImage* Image_156; // 0x248(0x08)
	UTextBlock* TextBlock_40; // 0x250(0x08)

	void Construct();
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void ExecuteUbergraph_Widget_DropPod_SeatMonitor(int32_t EntryPoint);
};

