// WidgetBlueprintGeneratedClass UI_MaskedCanvas.UI_MaskedCanvas_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_MaskedCanvas_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UNamedSlot* Content; // 0x238(0x08)
	URetainerBox* MaskRetainer; // 0x240(0x08)
	UMaterialInstanceDynamic* Material; // 0x248(0x08)
	UTexture* Mask; // 0x250(0x08)

	void SetMask(UTexture* Texture);
	void UpdateMaterial();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_MaskedCanvas(int32_t EntryPoint);
};

