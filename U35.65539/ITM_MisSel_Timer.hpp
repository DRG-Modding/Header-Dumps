#ifndef UE4SS_SDK_ITM_MisSel_Timer_HPP
#define UE4SS_SDK_ITM_MisSel_Timer_HPP

class UITM_MisSel_Timer_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBlurBackground_C* BlurBackground;
    UTextBlock* Counter;

    void Construct();
    void UpdateTime();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_Timer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FDateTime CallFunc_UtcNow_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
