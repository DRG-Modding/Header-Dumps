#ifndef UE4SS_SDK_HUD_FuelLine_Context_HPP
#define UE4SS_SDK_HUD_FuelLine_Context_HPP

class UHUD_FuelLine_Context_C : UActorContextWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_AdvancedLabel_C* ContextLabel;
    UProgressBar* HealthProgressBar;
    UCanvasPanel* RootCanvas;
    APlayerCharacter* Character;
    AFuelLineSegment* FuelLineSegment;

    void UpdateWidget(UPrimitiveComponent* InPrimitive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const FName Temp_name_Variable, bool CallFunc_GetCanTakeDamage_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, AActor* CallFunc_GetLookingAtActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_Array_Contains_ReturnValue);
    void ReceiveContextActorChanged(AActor* InContextActor);
    void PreConstruct(bool IsDesignTime);
    void ReceiveUpdate(UPrimitiveComponent* InContextPrimitive);
    void ReceiveShow(UPrimitiveComponent* InContextPrimitive);
    void ExecuteUbergraph_HUD_FuelLine_Context(int32 EntryPoint, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_InContextActor, UFuelLineSegment* K2Node_DynamicCast_AsFuel_Line_Segment, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, UPrimitiveComponent* K2Node_Event_InContextPrimitive_1, UPrimitiveComponent* K2Node_Event_InContextPrimitive);
}

#endif