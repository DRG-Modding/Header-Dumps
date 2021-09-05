// WidgetBlueprintGeneratedClass UI_MaskedImage.UI_MaskedImage_C
// Size: 0x2a8 (Inherited: 0x230)
struct UUI_MaskedImage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* MaskedImage; // 0x238(0x08)
	UTexture2D* Image; // 0x240(0x08)
	FVector2D ImageSize; // 0x248(0x08)
	bool AutoSize; // 0x250(0x01)
	FSlateColor ImageTint; // 0x258(0x28)
	UTexture* Mask; // 0x280(0x08)
	bool Invert Mask; // 0x288(0x01)
	enum class ESlateBrushDrawType DrawAs; // 0x289(0x01)
	UMaterialInstanceDynamic* Material; // 0x290(0x08)
	bool Mask Black; // 0x298(0x01)
	UObject* BrushImage; // 0x2a0(0x08)

	void SetMaskBlack(bool Index);
	void UpdateMaterial();
	void SetDrawAs(enum class ESlateBrushDrawType InBrush_DrawAs);
	void SetMaskInverted(bool Invert);
	void SetMask(UTexture* Value);
	void SetImageTint(FSlateColor TintColor);
	void SetImageSize(FVector2D DesiredSize);
	void SetImage(UTexture2D* Value, bool Match Size);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_MaskedImage(int32_t EntryPoint);
};

