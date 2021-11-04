// WidgetBlueprintGeneratedClass Basic_IconWithOutline.Basic_IconWithOutline_C
// Size: 0x308 (Inherited: 0x230)
struct UBasic_IconWithOutline_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* ICON_MATERIAL; // 0x238(0x08)
	USizeBox* IconSize; // 0x240(0x08)
	float Size; // 0x248(0x04)
	UTexture2D* Icon; // 0x250(0x08)
	FLinearColor OutlineColor; // 0x258(0x10)
	FLinearColor IconColor; // 0x268(0x10)
	bool UseOutline; // 0x278(0x01)
	bool ThickOutline; // 0x279(0x01)
	UMaterialInstanceDynamic* DynMaterial; // 0x280(0x08)
	enum class M_IconShapes Shape; // 0x288(0x01)
	float IconScale; // 0x28c(0x04)
	TSoftObjectPtr<UTexture2D> Shape_Hexagon; // 0x290(0x28)
	TSoftObjectPtr<UTexture2D> Shape_Warning; // 0x2b8(0x28)
	TSoftObjectPtr<UTexture2D> Shape_Anomaly; // 0x2e0(0x28)

	void SetData(UTexture2D* Icon, FLinearColor OutlineColor, FLinearColor IconColor, bool UseOutline, bool OutlineThicknes, float IconScale, enum class M_IconShapes IconShape);
	void PreConstruct(bool IsDesignTime);
	void SetOutlineColor(FLinearColor Color);
	void SetTintColor(FLinearColor Color);
	void ExecuteUbergraph_Basic_IconWithOutline(int32_t EntryPoint);
};

