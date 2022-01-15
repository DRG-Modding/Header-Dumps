#ifndef UE4SS_SDK_Widget_Jukebox02_HPP
#define UE4SS_SDK_Widget_Jukebox02_HPP

class UWidget_Jukebox02_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* PlayButton;
    UTextBlock* TextBlock_1;
    FSlateColor NewVar_0;

    void SetIsPlaying(bool Index, FSlateColor Tint_Red, FSlateColor TintGreen, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FText Temp_text_Variable, FText Temp_text_Variable_1, FText K2Node_Select_Default, FSlateColor K2Node_Select_Default_1);
    void Construct();
    void ExecuteUbergraph_Widget_Jukebox02(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
