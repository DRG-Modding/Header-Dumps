#ifndef UE4SS_SDK_UI_PipelineBuilder_Widget_HPP
#define UE4SS_SDK_UI_PipelineBuilder_Widget_HPP

class UUI_PipelineBuilder_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BarSlope;
    class UImage* InvalidBackground;
    class UFSDLabelWidget* LabelLength;
    class UFSDLabelWidget* LabelObstruction;
    class UFSDLabelWidget* LabelSlope;
    class UProgressBar* ProgressBarLength;
    class USlider* SliderElevation;
    class USlider* SliderObstruction;
    class UImage* ValidBackground;

    void SetUI(const EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, float CallFunc_FMin_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void SetState(const EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent);
    void ExecuteUbergraph_UI_PipelineBuilder_Widget(int32 EntryPoint, const EPlaceableObstructionType K2Node_CustomEvent_BuildingState, float K2Node_CustomEvent_Length, float K2Node_CustomEvent_LengthPercent, float K2Node_CustomEvent_ElevationChange, float K2Node_CustomEvent_SlopeAngle, float K2Node_CustomEvent_ObstructionPercent);
};

#endif
