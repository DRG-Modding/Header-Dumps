#ifndef UE4SS_SDK_Basic_ToolTip_HeadlineAndText_HPP
#define UE4SS_SDK_Basic_ToolTip_HeadlineAndText_HPP

class UBasic_ToolTip_HeadlineAndText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UTextBlock* DATA_ToolTipHeadline;
    class UTextBlock* DATA_TooltipText;
    class USizeBox* ToolTipSizer;
    FText Headline;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;

    void FadeIn(float Duration);
    void SetWidth(float InWidthOverride);
    void SetMaxWidth(float MaxWidth);
    void SetMinWidth(float MinWidth);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment);
    void SetText(FText Headline, FText Text);
    void SetTarget(class UWidget* Target Widget);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(class UWidget* Owner);
    void ExecuteUbergraph_Basic_ToolTip_HeadlineAndText(int32 EntryPoint);
};

#endif
