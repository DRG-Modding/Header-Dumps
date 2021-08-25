// WidgetBlueprintGeneratedClass UI_RoundedImage.UI_RoundedImage_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_RoundedImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* RoundedImage; // 0x238(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x240(0x08)
	struct UTexture2D* Texture; // 0x248(0x08)
	float Radius; // 0x250(0x04)
	float EdgeSharpness; // 0x254(0x04)

	void SetImage(struct UTexture2D* Texture); // Function UI_RoundedImage.UI_RoundedImage_C.SetImage
	void OnPaint(struct FPaintContext Context); // Function UI_RoundedImage.UI_RoundedImage_C.OnPaint
	void UpdateMaterial(); // Function UI_RoundedImage.UI_RoundedImage_C.UpdateMaterial
	void PreConstruct(bool IsDesignTime); // Function UI_RoundedImage.UI_RoundedImage_C.PreConstruct
	void ExecuteUbergraph_UI_RoundedImage(int32_t EntryPoint); // Function UI_RoundedImage.UI_RoundedImage_C.ExecuteUbergraph_UI_RoundedImage
};

