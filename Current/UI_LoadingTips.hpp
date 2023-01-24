#ifndef UE4SS_SDK_UI_LoadingTips_HPP
#define UE4SS_SDK_UI_LoadingTips_HPP

class UUI_LoadingTips_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UBorder* Border_0;
    class UTextBlock* HintCategoryText;
    class UTextBlock* HintDescription;
    class UBorder* HintHolder;
    class UUI_AdvancedLabel_C* HintInputLabel;
    class UHorizontalBox* HorizontalBox_2;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UCanvasPanel* RootCanvas;
    float Timer;
    float TimeToDisplay;
    bool HasfadedOut;
    int32 ListLength;
    int32 PreviewHintIndex;
    uint8 PreviewInputAs;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Show Hint(int32 Index);
    void OnFadeInFinished();
    void OnFadeOutFinished();
    void ExecuteUbergraph_UI_LoadingTips(int32 EntryPoint);
};

#endif
