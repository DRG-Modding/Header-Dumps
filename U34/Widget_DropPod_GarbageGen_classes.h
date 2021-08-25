// WidgetBlueprintGeneratedClass Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C
// Size: 0x27c (Inherited: 0x230)
struct UWidget_DropPod_GarbageGen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_42; // 0x238(0x08)
	struct UScrollBox* ScrollBox_1; // 0x240(0x08)
	struct UTextBlock* TextBlock_1; // 0x248(0x08)
	float TimePassed; // 0x250(0x04)
	char UnknownData_254[0x4]; // 0x254(0x04)
	struct TArray<struct FString> Operations; // 0x258(0x10)
	bool NewOperation; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	int32_t CurrentOperation; // 0x26c(0x04)
	int32_t Steps; // 0x270(0x04)
	int32_t CurrentStep; // 0x274(0x04)
	float OperationDelay; // 0x278(0x04)

	void GetNewOperation(); // Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.GetNewOperation
	void DoOperation(); // Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.DoOperation
	void Construct(); // Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Construct
	void PreConstruct(bool IsDesignTime); // Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Tick
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.OnGeneratedMissionChanged
	void ExecuteUbergraph_Widget_DropPod_GarbageGen(int32_t EntryPoint); // Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.ExecuteUbergraph_Widget_DropPod_GarbageGen
};

