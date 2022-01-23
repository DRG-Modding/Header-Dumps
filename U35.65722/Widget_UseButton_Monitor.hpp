#ifndef UE4SS_SDK_Widget_UseButton_Monitor_HPP
#define UE4SS_SDK_Widget_UseButton_Monitor_HPP

class UWidget_UseButton_Monitor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimMinimizeProgress;
    class UWidgetAnimation* AnimArrow;
    class UUI_ImageTinted_C* Img_Arrow;
    class UBasic_Label_C* Txt_Progress;
    class UBasic_Label_C* Txt_Status;
    class AFSDRefinery* Refinery;

    bool IsDeepDive(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnStateChanged(ERefineryState InRefineryState, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, ERefineryState Temp_byte_Variable_2, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, bool CallFunc_IsDeepDive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FText Temp_text_Variable_6, FText CallFunc_GetText_Text, bool CallFunc_TextIsEmpty_ReturnValue, FText Temp_text_Variable_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_IsAnimationPlaying_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, FText K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText K2Node_Select_Default_2);
    void Construct();
    void OnRefineryProgressChanged(float InProgress01);
    void OnCanStartRefineryChanged(bool CanUse);
    void ExecuteUbergraph_Widget_UseButton_Monitor(int32 EntryPoint, FExecuteUbergraph_Widget_UseButton_MonitorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Widget_UseButton_MonitorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AFSDRefinery* CallFunc_GetActorOfClass_ReturnValue, FExecuteUbergraph_Widget_UseButton_MonitorK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_InProgress01, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_GetRefiningProgress_ReturnValue, FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_canUse);
};

#endif
