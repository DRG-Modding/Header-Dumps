#ifndef UE4SS_SDK_UI_PipelineBuilder_Widget_Small_HPP
#define UE4SS_SDK_UI_PipelineBuilder_Widget_Small_HPP

class UUI_PipelineBuilder_Widget_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_275;
    class UOverlay* InvalidBox;
    class UBasic_Label_C* UI_GenericLabel;
    class UOverlay* ValidBox;

    void SetStats(float Length, class UFSDLabelWidget* DistTextBox, class UFSDLabelWidget* VolumnTextBox, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_MathExpression_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1);
    void SetState(const EPlaceableObstructionType BuildingState);
    void ExecuteUbergraph_UI_PipelineBuilder_Widget_Small(int32 EntryPoint, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText Temp_text_Variable_6, FText Temp_text_Variable_7, FText Temp_text_Variable_8, const EPlaceableObstructionType K2Node_CustomEvent_BuildingState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, EPlaceableObstructionType Temp_byte_Variable, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FText CallFunc_TextToUpper_ReturnValue);
};

#endif
