#ifndef UE4SS_SDK_UI_RichTextInput_HPP
#define UE4SS_SDK_UI_RichTextInput_HPP

class UUI_RichTextInput_C : public URichTextInputWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* InputIcon;
    class UTextBlock* InputText;
    class UTextBlock* InteractionText;
    class UOverlay* OverlayIcon;
    class UOverlay* OverlayText;
    class USizeBox* Sizer;
    class UWidgetSwitcher* switcher;

    void ShowFromDisplayDetails(const FInputDisplay& details);
    void SetInteraction(EInputInteraction InInteraction);
    void ShowAsText(FText InText, FLinearColor InTint);
    void SetSize(float InHeightOverride, float InWidthOverride, float InMinDesiredWidth);
    void ShowAsIcon(class UTexture2D* InTexture, FLinearColor InTint);
    void ReceiveInputDetails(const FInputDisplay& InDisplay);
    void ReceiveInputUnknown();
    void ExecuteUbergraph_UI_RichTextInput(int32 EntryPoint);
};

#endif
