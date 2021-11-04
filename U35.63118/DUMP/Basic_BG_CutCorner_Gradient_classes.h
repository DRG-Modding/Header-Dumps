// WidgetBlueprintGeneratedClass Basic_BG_CutCorner_Gradient.Basic_BG_CutCorner_Gradient_C
// Size: 0x270 (Inherited: 0x230)
struct UBasic_BG_CutCorner_Gradient_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Border_2; // 0x238(0x08)
	UBorder* Border_101; // 0x240(0x08)
	UBorder* Border_108; // 0x248(0x08)
	UImage* Corner; // 0x250(0x08)
	UHorizontalBox* HorizontalBox_Border; // 0x258(0x08)
	float CornerSize; // 0x260(0x04)
	UMaterialInstanceDynamic* DynBackgroundMaterial; // 0x268(0x08)

	void PreConstruct(bool IsDesignTime);
	void SetBorderColor(FLinearColor InputPin);
	void ExecuteUbergraph_Basic_BG_CutCorner_Gradient(int32_t EntryPoint);
};

