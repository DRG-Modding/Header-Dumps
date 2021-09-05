// WidgetBlueprintGeneratedClass ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_JobsEntry_Resource_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_Level; // 0x238(0x08)
	UImage* Icon; // 0x240(0x08)
	UTexture2D* Texture; // 0x248(0x08)
	FLinearColor Tint; // 0x250(0x10)
	FText Text; // 0x260(0x18)

	void PreConstruct(bool IsDesignTime);
	void SetData(int32_t RequiredLevel);
	void ExecuteUbergraph_ITM_JobsEntry_Resource(int32_t EntryPoint);
};

