// WidgetBlueprintGeneratedClass Basic_IconWithOutline.Basic_IconWithOutline_C
// Size: 0x308 (Inherited: 0x230)
struct UBasic_IconWithOutline_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* ICON_MATERIAL; // 0x238(0x08)
	struct USizeBox* IconSize; // 0x240(0x08)
	float Size; // 0x248(0x04)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
	struct UTexture2D* Icon; // 0x250(0x08)
	struct FLinearColor OutlineColor; // 0x258(0x10)
	struct FLinearColor IconColor; // 0x268(0x10)
	bool UseOutline; // 0x278(0x01)
	bool ThickOutline; // 0x279(0x01)
	char UnknownData_27A[0x6]; // 0x27a(0x06)
	struct UMaterialInstanceDynamic* DynMaterial; // 0x280(0x08)
	char Shape; // 0x288(0x01)
	char UnknownData_289[0x3]; // 0x289(0x03)
	float IconScale; // 0x28c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> Shape_Hexagon; // 0x290(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Shape_Warning; // 0x2b8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Shape_Anomaly; // 0x2e0(0x28)

	void SetData(struct UTexture2D* Icon, struct FLinearColor OutlineColor, struct FLinearColor IconColor, bool UseOutline, bool OutlineThicknes, float IconScale, char IconShape); // Function Basic_IconWithOutline.Basic_IconWithOutline_C.SetData
	void PreConstruct(bool IsDesignTime); // Function Basic_IconWithOutline.Basic_IconWithOutline_C.PreConstruct
	void SetOutlineColor(struct FLinearColor Color); // Function Basic_IconWithOutline.Basic_IconWithOutline_C.SetOutlineColor
	void SetTintColor(struct FLinearColor Color); // Function Basic_IconWithOutline.Basic_IconWithOutline_C.SetTintColor
	void ExecuteUbergraph_Basic_IconWithOutline(int32_t EntryPoint); // Function Basic_IconWithOutline.Basic_IconWithOutline_C.ExecuteUbergraph_Basic_IconWithOutline
};

