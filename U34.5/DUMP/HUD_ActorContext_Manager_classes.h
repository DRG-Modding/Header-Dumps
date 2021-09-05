// WidgetBlueprintGeneratedClass HUD_ActorContext_Manager.HUD_ActorContext_Manager_C
// Size: 0x260 (Inherited: 0x230)
struct UHUD_ActorContext_Manager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UOverlay* ContextParent; // 0x238(0x08)
	UHUD_PipelineContext_C* HUD_PipelineContext; // 0x240(0x08)
	UActorContextWidget* ContextWidget; // 0x248(0x08)
	FTimerHandle UpdateHandle; // 0x250(0x08)
	UCharacterSightComponent* SightComponent; // 0x258(0x08)

	void GetContextWidgetFromActor(AActor* InActor, UActorContextWidget* OutWidget);
	void SetContextWidget(UActorContextWidget* InWidget, UPrimitiveComponent* InPrimitive);
	void Construct();
	void OnTargetChanged(AActor* NewTarget, UPrimitiveComponent* NewPrimitive);
	void UpdateTick();
	void ExecuteUbergraph_HUD_ActorContext_Manager(int32_t EntryPoint);
};

