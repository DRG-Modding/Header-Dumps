#ifndef UE4SS_SDK_ConsoleScreen_MotivationalQuoteClean_HPP
#define UE4SS_SDK_ConsoleScreen_MotivationalQuoteClean_HPP

class UConsoleScreen_MotivationalQuoteClean_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    class UImage* Image_0;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_146;
    class UTextBlock* TXT_Main;
    TArray<FText> texts;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_MotivationalQuoteClean(int32 EntryPoint, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
};

#endif
