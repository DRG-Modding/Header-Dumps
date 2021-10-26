// WidgetBlueprintGeneratedClass UI_RoundedImage.UI_RoundedImage_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_RoundedImage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* RoundedImage; // 0x238(0x08)
	UMaterialInstanceDynamic* Material; // 0x240(0x08)
	UTexture2D* Texture; // 0x248(0x08)
	float Radius; // 0x250(0x04)
	float EdgeSharpness; // 0x254(0x04)

	void SetImage(UTexture2D* Texture);
	void OnPaint(FPaintContext Context);
	void UpdateMaterial();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_RoundedImage(int32_t EntryPoint);
};

