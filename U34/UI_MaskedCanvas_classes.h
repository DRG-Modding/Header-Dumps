// WidgetBlueprintGeneratedClass UI_MaskedCanvas.UI_MaskedCanvas_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_MaskedCanvas_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UNamedSlot* Content; // 0x238(0x08)
	struct URetainerBox* MaskRetainer; // 0x240(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x248(0x08)
	struct UTexture* Mask; // 0x250(0x08)

	void SetMask(struct UTexture* Texture); // Function UI_MaskedCanvas.UI_MaskedCanvas_C.SetMask
	void UpdateMaterial(); // Function UI_MaskedCanvas.UI_MaskedCanvas_C.UpdateMaterial
	void PreConstruct(bool IsDesignTime); // Function UI_MaskedCanvas.UI_MaskedCanvas_C.PreConstruct
	void ExecuteUbergraph_UI_MaskedCanvas(int32_t EntryPoint); // Function UI_MaskedCanvas.UI_MaskedCanvas_C.ExecuteUbergraph_UI_MaskedCanvas
};

