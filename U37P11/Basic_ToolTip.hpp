#ifndef UE4SS_SDK_Basic_ToolTip_HPP
#define UE4SS_SDK_Basic_ToolTip_HPP

class UBasic_ToolTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UTextBlock* DATA_ToolTip;
    class USizeBox* ToolTipSizer;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;

    void SetTextJustification(TEnumAsByte<ETextJustify::Type> Justification);
    void FadeIn(float Duration);
    void SetWidth(float InWidthOverride);
    void SetMaxWidth(float MaxWidth);
    void SetMinWidth(float MinWidth);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment);
    void SetText(FText ToolTip);
    void SetTarget(class UWidget* Target Widget);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(class UWidget* Owner);
    void ExecuteUbergraph_Basic_ToolTip(int32 EntryPoint);
};

#endif
