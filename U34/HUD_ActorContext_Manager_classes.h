// WidgetBlueprintGeneratedClass HUD_ActorContext_Manager.HUD_ActorContext_Manager_C
// Size: 0x260 (Inherited: 0x230)
struct UHUD_ActorContext_Manager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UOverlay* ContextParent; // 0x238(0x08)
	struct UHUD_PipelineContext_C* HUD_PipelineContext; // 0x240(0x08)
	struct UActorContextWidget* ContextWidget; // 0x248(0x08)
	struct FTimerHandle UpdateHandle; // 0x250(0x08)
	struct UCharacterSightComponent* SightComponent; // 0x258(0x08)

	void GetContextWidgetFromActor(struct AActor* InActor, struct UActorContextWidget* OutWidget); // Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.GetContextWidgetFromActor
	void SetContextWidget(struct UActorContextWidget* InWidget, struct UPrimitiveComponent* InPrimitive); // Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.SetContextWidget
	void Construct(); // Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.Construct
	void OnTargetChanged(struct AActor* NewTarget, struct UPrimitiveComponent* NewPrimitive); // Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.OnTargetChanged
	void UpdateTick(); // Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.UpdateTick
	void ExecuteUbergraph_HUD_ActorContext_Manager(int32_t EntryPoint); // Function HUD_ActorContext_Manager.HUD_ActorContext_Manager_C.ExecuteUbergraph_HUD_ActorContext_Manager
};

