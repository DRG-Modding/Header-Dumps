#ifndef UE4SS_SDK_HUD_ExtractorTrackingIcon_HPP
#define UE4SS_SDK_HUD_ExtractorTrackingIcon_HPP

class UHUD_ExtractorTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Shots Fired;
    class UProgressBar* AmmoProgress;
    class UImage* Arrow;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UImage* DataImage;
    class UHUD_DefaultLabel_C* Distance;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    float MaxCapacity;

    void SetInfo(FText InText, class UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void OnInViewChanged(bool inView, float Angle);
    void OnTargetSet(class AActor* NewTarget);
    void OnTargetDistanceChanged(float Distance);
    void OnCurrentLoadChangedEvent(float FloatValue);
    void LoadChanged(float CurrentLoad);
    void ExecuteUbergraph_HUD_ExtractorTrackingIcon(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, ESlateVisibility Temp_byte_Variable, FExecuteUbergraph_HUD_ExtractorTrackingIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_InView, float K2Node_CustomEvent_Angle, FText CallFunc_MakeLiteralText_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, ESlateVisibility K2Node_Select_Default, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, bool K2Node_Event_inView, float K2Node_Event_Angle, class AActor* K2Node_Event_NewTarget, class AExtractorItem* K2Node_DynamicCast_AsExtractor_Item, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Distance, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, float K2Node_CustomEvent_floatValue, float K2Node_CustomEvent_CurrentLoad, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

#endif
