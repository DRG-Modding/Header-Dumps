#ifndef UE4SS_SDK_UI_TickerText_HPP
#define UE4SS_SDK_UI_TickerText_HPP

class UUI_TickerText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URichTextSizable* RichTextSizable_211;
    class USizeBox* SizeBox_1;
    float Progress;
    float Width;
    class UDataTable* RichTextStyle;
    FText Text;
    float TextLength;
    float Speed;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SetText(FText TickerText);
    void SetSpeed(float Speed);
    void SetStyle(class UDataTable* NewTextStyleSet);
    void ExecuteUbergraph_UI_TickerText(int32 EntryPoint);
};

#endif
