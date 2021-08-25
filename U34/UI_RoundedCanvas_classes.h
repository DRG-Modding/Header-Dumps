// WidgetBlueprintGeneratedClass UI_RoundedCanvas.UI_RoundedCanvas_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_RoundedCanvas_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UNamedSlot* Content; // 0x238(0x08)
	struct URetainerBox* MaskRetainer; // 0x240(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x248(0x08)
	float Radius; // 0x250(0x04)
	float EdgeSharpness; // 0x254(0x04)

	void OnPaint(struct FPaintContext Context); // Function UI_RoundedCanvas.UI_RoundedCanvas_C.OnPaint
	void UpdateMaterial(); // Function UI_RoundedCanvas.UI_RoundedCanvas_C.UpdateMaterial
	void PreConstruct(bool IsDesignTime); // Function UI_RoundedCanvas.UI_RoundedCanvas_C.PreConstruct
	void ExecuteUbergraph_UI_RoundedCanvas(int32_t EntryPoint); // Function UI_RoundedCanvas.UI_RoundedCanvas_C.ExecuteUbergraph_UI_RoundedCanvas
};

