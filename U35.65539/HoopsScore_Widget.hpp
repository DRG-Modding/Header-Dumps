#ifndef UE4SS_SDK_HoopsScore_Widget_HPP
#define UE4SS_SDK_HoopsScore_Widget_HPP

class UHoopsScore_Widget_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UConsoleScreen_Empty_C* ConsoleScreen_Empty;
    UTextBlock* ScoreText;

    void SetScore(int32 Score);
    void Construct();
    void ExecuteUbergraph_HoopsScore_Widget(int32 EntryPoint, int32 K2Node_CustomEvent_Score, FText CallFunc_Conv_IntToText_ReturnValue);
}

#endif
