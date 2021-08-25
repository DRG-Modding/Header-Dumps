// WidgetBlueprintGeneratedClass UI_GradientMasked_Base.UI_GradientMasked_Base_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_GradientMasked_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	char GradientType; // 0x238(0x01)
	char UnknownData_239[0x7]; // 0x239(0x07)
	struct UMaterialInstanceDynamic* Material; // 0x240(0x08)
	struct UMaterialInterface* MaterialTemplate; // 0x248(0x08)

	void GetDynamicMaterial(struct UMaterialInstanceDynamic* Material); // Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetDynamicMaterial
	void Refresh(); // Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.Refresh
	void GetMaterialTemplate(char GradientType, struct UMaterialInterface* OutTemplate); // Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetMaterialTemplate
	void PreConstruct(bool IsDesignTime); // Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.PreConstruct
	void OnMaterialRefreshed(); // Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.OnMaterialRefreshed
	void ExecuteUbergraph_UI_GradientMasked_Base(int32_t EntryPoint); // Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.ExecuteUbergraph_UI_GradientMasked_Base
};

