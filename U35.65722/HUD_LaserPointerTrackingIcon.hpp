#ifndef UE4SS_SDK_HUD_LaserPointerTrackingIcon_HPP
#define UE4SS_SDK_HUD_LaserPointerTrackingIcon_HPP

class UHUD_LaserPointerTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* AnimIcon;
    class UImage* Arrow;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UTextBlock* DistanceLabel;
    class UTextBlock* NameLabel;
    class UTextBlock* PlayerName;
    class UCanvasPanel* RootCanvas;
    class UImage* WarningIcon;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    class ALaserPointerMarker* Marker;
    bool IsCanvasVisible;
    float TimeNotLookingAt;

    void UpdateVisibility(bool shouldShow, class AActor* Target, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable_2, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, float K2Node_Select_Default, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default_2, float CallFunc_GetAnimationCurrentTime_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue);
    void UpdatePixelOffset(float Distance, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void OnInViewChanged(bool inView, float Angle);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void OnTargetDistanceChanged(float Distance);
    void OnTargetSet(class AActor* NewTarget);
    void ExecuteUbergraph_HUD_LaserPointerTrackingIcon(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, bool K2Node_Event_inView, float K2Node_Event_Angle, bool CallFunc_IsVisible_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_InView, float K2Node_CustomEvent_Angle, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, float K2Node_Event_Distance, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool Temp_bool_Variable_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, ESlateVisibility K2Node_Select_Default, class AActor* K2Node_Event_NewTarget, class ALaserPointerMarker* K2Node_DynamicCast_AsLaser_Pointer_Marker, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, class UTexture2D* K2Node_Select_Default_1);
};

#endif
