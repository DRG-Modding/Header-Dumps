// WidgetBlueprintGeneratedClass ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_JobsEntry_Resource_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_Level; // 0x238(0x08)
	struct UImage* Icon; // 0x240(0x08)
	struct UTexture2D* Texture; // 0x248(0x08)
	struct FLinearColor Tint; // 0x250(0x10)
	struct FText Text; // 0x260(0x18)

	void PreConstruct(bool IsDesignTime); // Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct
	void SetData(int32_t RequiredLevel); // Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData
	void ExecuteUbergraph_ITM_JobsEntry_Resource(int32_t EntryPoint); // Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource
};

