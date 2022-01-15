#ifndef UE4SS_SDK_ConsoleScreen_MemorialQuotes_HPP
#define UE4SS_SDK_ConsoleScreen_MemorialQuotes_HPP

class UConsoleScreen_MemorialQuotes_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UTextBlock* TextBlock_2;
    UTextBlock* TextBlock_146;
    UTextBlock* TXT_Main;
    TArray<FString> SetText;
    TArray<FText> texts;
    TArray<FText> TextTester;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_MemorialQuotes(int32 EntryPoint, float CallFunc_GetEndTime_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
