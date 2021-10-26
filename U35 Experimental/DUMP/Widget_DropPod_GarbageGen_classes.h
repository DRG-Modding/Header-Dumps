// WidgetBlueprintGeneratedClass Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C
// Size: 0x27c (Inherited: 0x230)
struct UWidget_DropPod_GarbageGen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_42; // 0x238(0x08)
	UScrollBox* ScrollBox_1; // 0x240(0x08)
	UTextBlock* TextBlock_1; // 0x248(0x08)
	float TimePassed; // 0x250(0x04)
	TArray<FString> Operations; // 0x258(0x10)
	bool NewOperation; // 0x268(0x01)
	int32_t CurrentOperation; // 0x26c(0x04)
	int32_t Steps; // 0x270(0x04)
	int32_t CurrentStep; // 0x274(0x04)
	float OperationDelay; // 0x278(0x04)

	void GetNewOperation();
	void DoOperation();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void ExecuteUbergraph_Widget_DropPod_GarbageGen(int32_t EntryPoint);
};

