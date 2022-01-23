#ifndef UE4SS_SDK_ConsoleScreen_MotivationalQuote_HPP
#define UE4SS_SDK_ConsoleScreen_MotivationalQuote_HPP

class UConsoleScreen_MotivationalQuote_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_146;
    class UTextBlock* TXT_Main;
    TArray<FText> texts;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ConsoleScreen_MotivationalQuote(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

#endif
