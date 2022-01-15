#ifndef UE4SS_SDK_HUD_ActorContext_Manager_HPP
#define UE4SS_SDK_HUD_ActorContext_Manager_HPP

class UHUD_ActorContext_Manager_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOverlay* ContextParent;
    UHUD_PipelineContext_C* HUD_PipelineContext;
    UActorContextWidget* ContextWidget;
    FTimerHandle UpdateHandle;
    UCharacterSightComponent* SightComponent;

    void GetContextWidgetFromActor(AActor* InActor, UActorContextWidget*& OutWidget, UObjectInfoComponent* ObjectInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UObjectInfoComponent* CallFunc_GetComponentByClass_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UActorContextWidget* CallFunc_GetContextWidget_ReturnValue);
    void SetContextWidget(UActorContextWidget* InWidget, UPrimitiveComponent* InPrimitive, UOverlaySlot* ChildSlot, bool CallFunc_IsValid_ReturnValue, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
    void Construct();
    void OnTargetChanged(AActor* NewTarget, UPrimitiveComponent* NewPrimitive);
    void UpdateTick();
    void ExecuteUbergraph_HUD_ActorContext_Manager(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, AActor* K2Node_CustomEvent_NewTarget, UPrimitiveComponent* K2Node_CustomEvent_NewPrimitive, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UActorContextWidget* CallFunc_GetContextWidgetFromActor_OutWidget, TargetChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
