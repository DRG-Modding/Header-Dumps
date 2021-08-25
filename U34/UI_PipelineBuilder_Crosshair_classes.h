// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Crosshair.UI_PipelineBuilder_Crosshair_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_PipelineBuilder_Crosshair_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* Box; // 0x238(0x08)
	struct UImage* IMG_Status; // 0x240(0x08)
	struct UUI_GenericLabel_C* Txt_Status; // 0x248(0x08)

	void SetState(enum class EPlaceableObstructionType State); // Function UI_PipelineBuilder_Crosshair.UI_PipelineBuilder_Crosshair_C.SetState
	void Construct(); // Function UI_PipelineBuilder_Crosshair.UI_PipelineBuilder_Crosshair_C.Construct
	void ExecuteUbergraph_UI_PipelineBuilder_Crosshair(int32_t EntryPoint); // Function UI_PipelineBuilder_Crosshair.UI_PipelineBuilder_Crosshair_C.ExecuteUbergraph_UI_PipelineBuilder_Crosshair
};

