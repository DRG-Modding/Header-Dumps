#ifndef UE4SS_SDK_ConsoleScreen_MotivationalQuote_HPP
#define UE4SS_SDK_ConsoleScreen_MotivationalQuote_HPP

class UConsoleScreen_MotivationalQuote_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_140;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TXT_Main;
    TArray<FText> texts;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_MotivationalQuote(int32 EntryPoint);
};

#endif
