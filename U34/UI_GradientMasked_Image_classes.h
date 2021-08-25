// WidgetBlueprintGeneratedClass UI_GradientMasked_Image.UI_GradientMasked_Image_C
// Size: 0x268 (Inherited: 0x250)
struct UUI_GradientMasked_Image_C : UUI_GradientMasked_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UImage* ImageMasked; // 0x258(0x08)
	struct UTexture2D* Texture; // 0x260(0x08)

	struct UTexture2D* GetTextureOrDefault(); // Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.GetTextureOrDefault
	void SetImage(struct UTexture2D* InTexture); // Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetImage
	void OnMaterialRefreshed(); // Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.OnMaterialRefreshed
	void ExecuteUbergraph_UI_GradientMasked_Image(int32_t EntryPoint); // Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.ExecuteUbergraph_UI_GradientMasked_Image
};

