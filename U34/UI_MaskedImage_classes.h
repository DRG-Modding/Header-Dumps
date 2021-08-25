// WidgetBlueprintGeneratedClass UI_MaskedImage.UI_MaskedImage_C
// Size: 0x2a8 (Inherited: 0x230)
struct UUI_MaskedImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* MaskedImage; // 0x238(0x08)
	struct UTexture2D* Image; // 0x240(0x08)
	struct FVector2D ImageSize; // 0x248(0x08)
	bool AutoSize; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct FSlateColor ImageTint; // 0x258(0x28)
	struct UTexture* Mask; // 0x280(0x08)
	bool Invert Mask; // 0x288(0x01)
	char DrawAs; // 0x289(0x01)
	char UnknownData_28A[0x6]; // 0x28a(0x06)
	struct UMaterialInstanceDynamic* Material; // 0x290(0x08)
	bool Mask Black; // 0x298(0x01)
	char UnknownData_299[0x7]; // 0x299(0x07)
	struct UObject* BrushImage; // 0x2a0(0x08)

	void SetMaskBlack(bool Index); // Function UI_MaskedImage.UI_MaskedImage_C.SetMaskBlack
	void UpdateMaterial(); // Function UI_MaskedImage.UI_MaskedImage_C.UpdateMaterial
	void SetDrawAs(char InBrush_DrawAs); // Function UI_MaskedImage.UI_MaskedImage_C.SetDrawAs
	void SetMaskInverted(bool Invert); // Function UI_MaskedImage.UI_MaskedImage_C.SetMaskInverted
	void SetMask(struct UTexture* Value); // Function UI_MaskedImage.UI_MaskedImage_C.SetMask
	void SetImageTint(struct FSlateColor TintColor); // Function UI_MaskedImage.UI_MaskedImage_C.SetImageTint
	void SetImageSize(struct FVector2D DesiredSize); // Function UI_MaskedImage.UI_MaskedImage_C.SetImageSize
	void SetImage(struct UTexture2D* Value, bool Match Size); // Function UI_MaskedImage.UI_MaskedImage_C.SetImage
	void PreConstruct(bool IsDesignTime); // Function UI_MaskedImage.UI_MaskedImage_C.PreConstruct
	void ExecuteUbergraph_UI_MaskedImage(int32_t EntryPoint); // Function UI_MaskedImage.UI_MaskedImage_C.ExecuteUbergraph_UI_MaskedImage
};

