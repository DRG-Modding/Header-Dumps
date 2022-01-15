#ifndef UE4SS_SDK_HUD_Countdown_Extraction_HPP
#define UE4SS_SDK_HUD_Countdown_Extraction_HPP

class UHUD_Countdown_Extraction_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    UTextBlock* DATA_Header;
    UTextBlock* DATA_Time;

    void FormatTime(int32 Time, FText& Text, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void CountdownStarted(const FText& countdownText);
    void OnCountdownTimeChanged(int32 SecondsLeft);
    void OnCountdownFinished();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Countdown_Extraction(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, CountDownStarted__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Countdown__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, const FText K2Node_CustomEvent_countdownText, int32 K2Node_CustomEvent_SecondsLeft, FText CallFunc_FormatTime_Text, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
