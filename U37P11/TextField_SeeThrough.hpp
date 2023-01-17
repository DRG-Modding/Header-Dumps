#ifndef UE4SS_SDK_TextField_SeeThrough_HPP
#define UE4SS_SDK_TextField_SeeThrough_HPP

class UTextField_SeeThrough_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UBorder* Border_0;
    class UTextBlock* TXT_Main;
    TArray<FText> texts;
    int32 TextSize;
    bool ShowBG;

    void SetShowBG(bool ShowBG);
    void SetTextSize(int32 TextSize);
    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TextField_SeeThrough(int32 EntryPoint);
};

#endif
