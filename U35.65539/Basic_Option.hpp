#ifndef UE4SS_SDK_Basic_Option_HPP
#define UE4SS_SDK_Basic_Option_HPP

class UBasic_Option_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* ArrowBox_Text;
    UImage* backgroundNoOutline;
    UOverlay* BackgroundOverlay;
    UImage* Image_Separator;
    UBorder* MainBorder;
    UImage* outline;
    UNamedSlot* PutStuffHere;
    USizeBox* SizeBox;
    USizeBox* SizeBox_Content;
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

    void SetContentLayout(float InLeftPadding, uint8 InHorizontalAlignment, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
    void SetIndent(int32 InIndent, float CallFunc_Conv_IntToFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
    void SetOptionText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Basic_Option(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1);
    void OnHoveringEnd__DelegateSignature();
    void OnHoveringBegin__DelegateSignature();
}

#endif
