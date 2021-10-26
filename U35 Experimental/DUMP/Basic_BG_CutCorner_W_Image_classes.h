// WidgetBlueprintGeneratedClass Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C
// Size: 0x271 (Inherited: 0x230)
struct UBasic_BG_CutCorner_W_Image_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* HorizontalBox_Border; // 0x238(0x08)
	UImage* I_BG2; // 0x240(0x08)
	UImage* I_O2; // 0x248(0x08)
	UImage* Image_Background; // 0x250(0x08)
	UImage* Image_Front; // 0x258(0x08)
	float CornerSize; // 0x260(0x04)
	UMaterialInstanceDynamic* DynBackgroundMaterial; // 0x268(0x08)
	enum class ENUM_MenuColors BackgroundColor; // 0x270(0x01)

	void PreConstruct(bool IsDesignTime);
	void SetImage(UTexture2D* ImageBackground, FLinearColor BackgroundColor, UTexture2D* front);
	void SetOutlineColor(FLinearColor Color);
	void SetBackgroundColor(FLinearColor Color);
	void UpdateCornorSize(float Size);
	void SetStyle(enum class E_MM_ButtonStyle IsEnabled);
	void ExecuteUbergraph_Basic_BG_CutCorner_W_Image(int32_t EntryPoint);
};

