// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Crosshair.UI_PipelineBuilder_Crosshair_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_PipelineBuilder_Crosshair_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* Box; // 0x238(0x08)
	UImage* Img_Status; // 0x240(0x08)
	UUI_GenericLabel_C* Txt_Status; // 0x248(0x08)

	void SetState(enum class EPlaceableObstructionType State);
	void Construct();
	void ExecuteUbergraph_UI_PipelineBuilder_Crosshair(int32_t EntryPoint);
};

