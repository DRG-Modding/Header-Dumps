// WidgetBlueprintGeneratedClass UI_RoundedCanvas.UI_RoundedCanvas_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_RoundedCanvas_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UNamedSlot* Content; // 0x238(0x08)
	URetainerBox* MaskRetainer; // 0x240(0x08)
	UMaterialInstanceDynamic* Material; // 0x248(0x08)
	float Radius; // 0x250(0x04)
	float EdgeSharpness; // 0x254(0x04)

	void OnPaint(FPaintContext Context);
	void UpdateMaterial();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_RoundedCanvas(int32_t EntryPoint);
};

