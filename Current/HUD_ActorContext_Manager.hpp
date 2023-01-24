#ifndef UE4SS_SDK_HUD_ActorContext_Manager_HPP
#define UE4SS_SDK_HUD_ActorContext_Manager_HPP

class UHUD_ActorContext_Manager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* ContextParent;
    class UHUD_PipelineContext_C* HUD_PipelineContext;
    class UActorContextWidget* ContextWidget;
    FTimerHandle UpdateHandle;
    class UCharacterSightComponent* SightComponent;

    void GetContextWidgetFromActor(class AActor* InActor, class UActorContextWidget*& OutWidget);
    void SetContextWidget(class UActorContextWidget* InWidget, class UPrimitiveComponent* InPrimitive);
    void Construct();
    void OnTargetChanged(class AActor* NewTarget, class UPrimitiveComponent* NewPrimitive);
    void UpdateTick();
    void ExecuteUbergraph_HUD_ActorContext_Manager(int32 EntryPoint);
};

#endif
