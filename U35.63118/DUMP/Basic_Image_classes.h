// WidgetBlueprintGeneratedClass Basic_Image.Basic_Image_C
// Size: 0x440 (Inherited: 0x230)
struct UBasic_Image_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	UImage* ImageComponent; // 0x240(0x08)
	FSlateBrush Brush; // 0x248(0x88)
	enum class ENUM_MenuColors Tint; // 0x2d0(0x01)
	float TintOpacity; // 0x2d4(0x04)
	TMap<FName, float> Scalars; // 0x2d8(0x50)
	TMap<FName, FLinearColor> Vectors; // 0x328(0x50)
	TMap<FName, TSoftObjectPtr<UTexture>> Textures; // 0x378(0x50)
	TMap<FName, FMenuColorAndOpacity> MenuColors; // 0x3c8(0x50)
	FText BasicToolTipText; // 0x418(0x18)
	FVector2D BasicToolTipPosition; // 0x430(0x08)
	FVector2D BasicToolTipAlignment; // 0x438(0x08)

	void SetBasicToolTip(FText BasicToolTipText, FVector2D BasicToolTipPosition, FVector2D BasicToolTipAlignment);
	UWidget* GetBasicToolTip();
	void SetDynamicMaterialValues();
	void SetDynamicMaterialTexture(FName ParameterName, UTexture* Value);
	void SetDynamicMaterialVector(FName ParameterName, FLinearColor Value);
	void SetDynamicMaterialScalar(FName ParameterName, float Value);
	void FadeOut(float InDuration);
	void FadeIn(float InDuration);
	void GetBrushSize(FVector2D Brush Image Size);
	void SetBrushSize(FVector2D DesiredSize);
	UMaterialInstanceDynamic* GetDynamicMaterial();
	void SetTintAndOpacity(enum class ENUM_MenuColors InTint, float InTintOpacity);
	void SetTintOpacity(float InOpacity);
	void SetTint(enum class ENUM_MenuColors InTint);
	void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
	void SetBrush(FSlateBrush InBrush);
	void GetBrush(FSlateBrush Brush);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_Basic_Image(int32_t EntryPoint);
};

