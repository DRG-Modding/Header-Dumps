#ifndef UE4SS_SDK_NewsTicker_HPP
#define UE4SS_SDK_NewsTicker_HPP

class UNewsTicker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_0;
    class UTextBlock* TextBlock_379;
    float StartXPosition;
    float ScrollSpeed;
    FString TextContents;
    float Tickerlength;
    float BackToStart;
    TArray<FString> TextArray;

    FText GetText_0();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_NewsTicker(int32 EntryPoint);
};

#endif
