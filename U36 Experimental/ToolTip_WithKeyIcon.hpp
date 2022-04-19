#ifndef UE4SS_SDK_ToolTip_WithKeyIcon_HPP
#define UE4SS_SDK_ToolTip_WithKeyIcon_HPP

class UToolTip_WithKeyIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UWidgetAnimation* Intro;
    class UBorder* Border_BG;
    class UTextBlock* DATA_ToolTipHeadline;
    class UTextBlock* DATA_TooltipText;
    class UImage* Image__Icon;
    class UImage* Image_Outline;
    class UOverlay* Overlay_Content;
    class USizeBox* ToolTipSizer;
    FText Headline;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;
    FActionIconMapping Icon;

    void FadeIn(float Duration);
    void SetWidth(float InWidthOverride);
    void SetMaxWidth(float MaxWidth);
    void SetMinWidth(float MinWidth);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment);
    void SetData(FText Headline, FText Text, FActionIconMapping Icon);
    void SetTarget(class UWidget* Target Widget);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(class UWidget* Owner);
    void ExecuteUbergraph_ToolTip_WithKeyIcon(int32 EntryPoint);
};

#endif
