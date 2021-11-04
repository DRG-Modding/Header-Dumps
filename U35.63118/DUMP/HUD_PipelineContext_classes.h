// WidgetBlueprintGeneratedClass HUD_PipelineContext.HUD_PipelineContext_C
// Size: 0x270 (Inherited: 0x240)
struct UHUD_PipelineContext_C : UActorContextWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UUI_AdvancedLabel_C* ContextLabel; // 0x248(0x08)
	UProgressBar* HealthProgressBar; // 0x250(0x08)
	UCanvasPanel* RootCanvas; // 0x258(0x08)
	APipelineSegment* PipelineSegment; // 0x260(0x08)
	APlayerCharacter* Character; // 0x268(0x08)

	void UpdateWidget(UPrimitiveComponent* InPrimitive);
	void ReceiveContextActorChanged(AActor* InContextActor);
	void PreConstruct(bool IsDesignTime);
	void ReceiveUpdate(UPrimitiveComponent* InContextPrimitive);
	void ReceiveShow(UPrimitiveComponent* InContextPrimitive);
	void ExecuteUbergraph_HUD_PipelineContext(int32_t EntryPoint);
};

