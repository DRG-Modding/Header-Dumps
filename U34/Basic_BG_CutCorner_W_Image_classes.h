// WidgetBlueprintGeneratedClass Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C
// Size: 0x271 (Inherited: 0x230)
struct UBasic_BG_CutCorner_W_Image_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* HorizontalBox_Border; // 0x238(0x08)
	struct UImage* I_BG2; // 0x240(0x08)
	struct UImage* I_O2; // 0x248(0x08)
	struct UImage* Image_Background; // 0x250(0x08)
	struct UImage* Image_Front; // 0x258(0x08)
	float CornerSize; // 0x260(0x04)
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct UMaterialInstanceDynamic* DynBackgroundMaterial; // 0x268(0x08)
	char BackgroundColor; // 0x270(0x01)

	void PreConstruct(bool IsDesignTime); // Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.PreConstruct
	void SetImage(struct UTexture2D* ImageBackground, struct FLinearColor BackgroundColor, struct UTexture2D* Front); // Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetImage
	void SetOutlineColor(struct FLinearColor Color); // Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetOutlineColor
	void SetBackgroundColor(struct FLinearColor Color); // Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetBackgroundColor
	void UpdateCornorSize(float Size); // Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.UpdateCornorSize
	void SetStyle(char IsEnabled); // Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetStyle
	void ExecuteUbergraph_Basic_BG_CutCorner_W_Image(int32_t EntryPoint); // Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.ExecuteUbergraph_Basic_BG_CutCorner_W_Image
};

