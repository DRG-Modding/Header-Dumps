// WidgetBlueprintGeneratedClass CategoryImage.CategoryImage_C
// Size: 0x258 (Inherited: 0x230)
struct UCategoryImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_BG_CutCorner_W_Image_C* Basic_BG_CutCorner_W_Image; // 0x238(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x240(0x08)
	float CornerSize; // 0x248(0x04)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
	struct UMaterialInstanceDynamic* DynBackgroundMaterial; // 0x250(0x08)

	void PreConstruct(bool IsDesignTime); // Function CategoryImage.CategoryImage_C.PreConstruct
	void SetImage(struct UTexture2D* Image, struct FLinearColor BackgroundColor, struct UTexture2D* OptionalMaskedImage); // Function CategoryImage.CategoryImage_C.SetImage
	void SetOutlineColor(struct FLinearColor Color); // Function CategoryImage.CategoryImage_C.SetOutlineColor
	void SetMissionIcon(struct FObjectiveMissionIcon MissionIcon); // Function CategoryImage.CategoryImage_C.SetMissionIcon
	void SetStyle(char IsEnabled); // Function CategoryImage.CategoryImage_C.SetStyle
	void ExecuteUbergraph_CategoryImage(int32_t EntryPoint); // Function CategoryImage.CategoryImage_C.ExecuteUbergraph_CategoryImage
};

