#ifndef UE4SS_SDK_Basic_Option_HPP
#define UE4SS_SDK_Basic_Option_HPP

class UBasic_Option_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ArrowBox_Text;
    class UImage* backgroundNoOutline;
    class UOverlay* BackgroundOverlay;
    class UImage* Image_Separator;
    class UBorder* MainBorder;
    class UImage* outline;
    class UNamedSlot* PutStuffHere;
    class USizeBox* SizeBox;
    class USizeBox* SizeBox_Content;
    FText Option Name;
    float LeftPadding;
    int32 Slider;
    int32 switcher;
    bool WasHovering;
    FBasic_Option_COnHoveringBegin OnHoveringBegin;
    void OnHoveringBegin();
    FBasic_Option_COnHoveringEnd OnHoveringEnd;
    void OnHoveringEnd();
    int32 Indent;
    TEnumAsByte<EHorizontalAlignment> ContentHAlignment;

    void SetContentLayout(float InLeftPadding, TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetIndent(int32 InIndent);
    void SetOptionText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Basic_Option(int32 EntryPoint);
    void OnHoveringEnd__DelegateSignature();
    void OnHoveringBegin__DelegateSignature();
};

#endif
