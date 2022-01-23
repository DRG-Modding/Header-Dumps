#ifndef UE4SS_SDK_HUD_PipelineContext_HPP
#define UE4SS_SDK_HUD_PipelineContext_HPP

class UHUD_PipelineContext_C : public UActorContextWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_AdvancedLabel_C* ContextLabel;
    class UProgressBar* HealthProgressBar;
    class UCanvasPanel* RootCanvas;
    class APipelineSegment* PipelineSegment;
    class APlayerCharacter* Character;

    void UpdateWidget(class UPrimitiveComponent* InPrimitive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const FName Temp_name_Variable, bool CallFunc_GetCanTakeDamage_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class AActor* CallFunc_GetLookingAtActor_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, float CallFunc_GetHealthPct_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
    void ReceiveContextActorChanged(class AActor* InContextActor);
    void PreConstruct(bool IsDesignTime);
    void ReceiveUpdate(class UPrimitiveComponent* InContextPrimitive);
    void ReceiveShow(class UPrimitiveComponent* InContextPrimitive);
    void ExecuteUbergraph_HUD_PipelineContext(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_InContextActor, class APipelineSegment* K2Node_DynamicCast_AsPipeline_Segment, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UPrimitiveComponent* K2Node_Event_InContextPrimitive_1, class UPrimitiveComponent* K2Node_Event_InContextPrimitive);
};

#endif
