#ifndef UE4SS_SDK_ITM_BasicTutorialWindow_HPP
#define UE4SS_SDK_ITM_BasicTutorialWindow_HPP

class UITM_BasicTutorialWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TaskProgress;
    class UWidgetAnimation* CompleteAnim;
    class UWidgetAnimation* RemoveAnim;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBorder* Border_Checkbox;
    class UHorizontalBox* HorizontalBox_TaskBar;
    class UImage* Image_79;
    class UImage* Image_BG;
    class UImage* Image_ColorBar;
    class UImage* Image_Tutorial;
    class URichTextSizable* MainText;
    class UOverlay* Overlay_ContentHolder;
    class URichTextSizable* TaskCounter;
    class URichTextSizable* TaskText;
    class UTextBlock* TextHeadline;
    FITM_BasicTutorialWindow_CCompleteAnimationFinished CompleteAnimationFinished;
    void CompleteAnimationFinished();
    FITM_BasicTutorialWindow_CRemoveAnimationFinished RemoveAnimationFinished;
    void RemoveAnimationFinished();
    bool TaskVisible;

    void SetText(FText Header, FText MainText, FText TaskText);
    void PlayRemove();
    void PlayShow();
    void PlayComplete();
    void CompleteAnimFinished();
    void SetImage(class UTexture2D* Texture);
    void PlayTaskProgress();
    void SetTaskCounter(int32 Counter, int32 Denominator);
    void ExecuteUbergraph_ITM_BasicTutorialWindow(int32 EntryPoint, bool Temp_bool_Variable, FText K2Node_CustomEvent_Header, FText K2Node_CustomEvent_MainText, FText K2Node_CustomEvent_TaskText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue, class UTexture2D* K2Node_CustomEvent_Texture, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 K2Node_CustomEvent_Counter, int32 K2Node_CustomEvent_Denominator, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Format_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, const FText K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, bool Temp_bool_Variable_1, FExecuteUbergraph_ITM_BasicTutorialWindowK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility K2Node_Select_Default_1);
    void RemoveAnimationFinished__DelegateSignature();
    void CompleteAnimationFinished__DelegateSignature();
};

#endif
