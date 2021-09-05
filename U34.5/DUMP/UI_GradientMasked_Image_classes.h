// WidgetBlueprintGeneratedClass UI_GradientMasked_Image.UI_GradientMasked_Image_C
// Size: 0x268 (Inherited: 0x250)
struct UUI_GradientMasked_Image_C : UUI_GradientMasked_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UImage* ImageMasked; // 0x258(0x08)
	UTexture2D* Texture; // 0x260(0x08)

	UTexture2D* GetTextureOrDefault();
	void SetImage(UTexture2D* InTexture);
	void OnMaterialRefreshed();
	void ExecuteUbergraph_UI_GradientMasked_Image(int32_t EntryPoint);
};

