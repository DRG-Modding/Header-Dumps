// WidgetBlueprintGeneratedClass Basic_BG_CutCorner.Basic_BG_CutCorner_C
// Size: 0x278 (Inherited: 0x230)
struct UBasic_BG_CutCorner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Border_2; // 0x238(0x08)
	struct UBorder* Border_101; // 0x240(0x08)
	struct UBorder* Border_108; // 0x248(0x08)
	struct UImage* Corner; // 0x250(0x08)
	struct UHorizontalBox* HorizontalBox_Border; // 0x258(0x08)
	struct USizeBox* SizeBox_1; // 0x260(0x08)
	float CornerSize; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct UMaterialInstanceDynamic* DynBackgroundMaterial; // 0x270(0x08)

	void PreConstruct(bool IsDesignTime); // Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.PreConstruct
	void SetBorderColor(struct FLinearColor InputPin); // Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.SetBorderColor
	void ExecuteUbergraph_Basic_BG_CutCorner(int32_t EntryPoint); // Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.ExecuteUbergraph_Basic_BG_CutCorner
};

