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

    void GetContextWidgetFromActor(class AActor* InActor, class UActorContextWidget*& OutWidget, class UObjectInfoComponent* ObjectInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObjectInfoComponent* CallFunc_GetComponentByClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActorContextWidget* CallFunc_GetContextWidget_ReturnValue);
    void SetContextWidget(class UActorContextWidget* InWidget, class UPrimitiveComponent* InPrimitive, class UOverlaySlot* ChildSlot, bool CallFunc_IsValid_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
    void Construct();
    void OnTargetChanged(class AActor* NewTarget, class UPrimitiveComponent* NewPrimitive);
    void UpdateTick();
    void ExecuteUbergraph_HUD_ActorContext_Manager(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_HUD_ActorContext_ManagerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AActor* K2Node_CustomEvent_NewTarget, class UPrimitiveComponent* K2Node_CustomEvent_NewPrimitive, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UActorContextWidget* CallFunc_GetContextWidgetFromActor_OutWidget, FExecuteUbergraph_HUD_ActorContext_ManagerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
