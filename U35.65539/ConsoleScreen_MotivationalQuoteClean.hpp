#ifndef UE4SS_SDK_ConsoleScreen_MotivationalQuoteClean_HPP
#define UE4SS_SDK_ConsoleScreen_MotivationalQuoteClean_HPP

class UConsoleScreen_MotivationalQuoteClean_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    UImage* Image_0;
    UTextBlock* TextBlock_2;
    UTextBlock* TextBlock_146;
    UTextBlock* TXT_Main;
    TArray<FText> texts;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_MotivationalQuoteClean(int32 EntryPoint, float CallFunc_GetEndTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
}

#endif
