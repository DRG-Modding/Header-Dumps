// WidgetBlueprintGeneratedClass UI_GradientMasked_Base.UI_GradientMasked_Base_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_GradientMasked_Base_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	enum class ENUM_MaskedGradientTypes GradientType; // 0x238(0x01)
	UMaterialInstanceDynamic* Material; // 0x240(0x08)
	UMaterialInterface* MaterialTemplate; // 0x248(0x08)

	void GetDynamicMaterial(UMaterialInstanceDynamic* Material);
	void Refresh();
	void GetMaterialTemplate(enum class ENUM_MaskedGradientTypes GradientType, UMaterialInterface* OutTemplate);
	void PreConstruct(bool IsDesignTime);
	void OnMaterialRefreshed();
	void ExecuteUbergraph_UI_GradientMasked_Base(int32_t EntryPoint);
};

