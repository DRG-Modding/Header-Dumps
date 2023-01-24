#ifndef UE4SS_SDK_Widget_TextDisplay_HPP
#define UE4SS_SDK_Widget_TextDisplay_HPP

class UWidget_TextDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_60;
    FText Text;

    void SetText(FText InText, FSlateFontInfo InFontInfo);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Widget_TextDisplay(int32 EntryPoint);
};

#endif
