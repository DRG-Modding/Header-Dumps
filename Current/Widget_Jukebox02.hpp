#ifndef UE4SS_SDK_Widget_Jukebox02_HPP
#define UE4SS_SDK_Widget_Jukebox02_HPP

class UWidget_Jukebox02_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PlayButton;
    class UBorder* Edge;
    class UTextBlock* TextBlock_1;
    FSlateColor NewVar_0;

    void SetIsPlaying(bool Index);
    void Construct();
    void ExecuteUbergraph_Widget_Jukebox02(int32 EntryPoint);
};

#endif
