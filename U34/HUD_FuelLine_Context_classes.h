// WidgetBlueprintGeneratedClass HUD_FuelLine_Context.HUD_FuelLine_Context_C
// Size: 0x270 (Inherited: 0x240)
struct UHUD_FuelLine_Context_C : UActorContextWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UUI_AdvancedLabel_C* ContextLabel; // 0x248(0x08)
	struct UProgressBar* HealthProgressBar; // 0x250(0x08)
	struct UCanvasPanel* RootCanvas; // 0x258(0x08)
	struct APlayerCharacter* Character; // 0x260(0x08)
	struct AFuelLineSegment* FuelLineSegment; // 0x268(0x08)

	void UpdateWidget(struct UPrimitiveComponent* InPrimitive); // Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.UpdateWidget
	void ReceiveContextActorChanged(struct AActor* InContextActor); // Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveContextActorChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.PreConstruct
	void ReceiveUpdate(struct UPrimitiveComponent* InContextPrimitive); // Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveUpdate
	void ReceiveShow(struct UPrimitiveComponent* InContextPrimitive); // Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ReceiveShow
	void ExecuteUbergraph_HUD_FuelLine_Context(int32_t EntryPoint); // Function HUD_FuelLine_Context.HUD_FuelLine_Context_C.ExecuteUbergraph_HUD_FuelLine_Context
};

