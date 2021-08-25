// WidgetBlueprintGeneratedClass WarningBox.WarningBox_C
// Size: 0x254 (Inherited: 0x230)
struct UWarningBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* NewAnimation_2; // 0x238(0x08)
	struct UImage* Image_1; // 0x240(0x08)
	struct USizeBox* SizeBox_3; // 0x248(0x08)
	float Size; // 0x250(0x04)

	void PreConstruct(bool IsDesignTime); // Function WarningBox.WarningBox_C.PreConstruct
	void Construct(); // Function WarningBox.WarningBox_C.Construct
	void ExecuteUbergraph_WarningBox(int32_t EntryPoint); // Function WarningBox.WarningBox_C.ExecuteUbergraph_WarningBox
};

