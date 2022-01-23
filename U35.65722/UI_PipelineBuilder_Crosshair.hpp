#ifndef UE4SS_SDK_UI_PipelineBuilder_Crosshair_HPP
#define UE4SS_SDK_UI_PipelineBuilder_Crosshair_HPP

class UUI_PipelineBuilder_Crosshair_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Box;
    class UImage* IMG_Status;
    class UBasic_Label_C* Txt_Status;

    void SetState(const EPlaceableObstructionType State);
    void Construct();
    void ExecuteUbergraph_UI_PipelineBuilder_Crosshair(int32 EntryPoint, EPlaceableObstructionType Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText Temp_text_Variable_6, FText Temp_text_Variable_7, FText Temp_text_Variable_8, const EPlaceableObstructionType K2Node_CustomEvent_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue);
};

#endif
