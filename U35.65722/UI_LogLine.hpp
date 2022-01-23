#ifndef UE4SS_SDK_UI_LogLine_HPP
#define UE4SS_SDK_UI_LogLine_HPP

class UUI_LogLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_128;
    FString Text;
    bool IsError;

    void Construct();
    void ExecuteUbergraph_UI_LogLine(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable, FText CallFunc_Conv_StringToText_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_Select_Default);
};

#endif
