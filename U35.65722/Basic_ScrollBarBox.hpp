#ifndef UE4SS_SDK_Basic_ScrollBarBox_HPP
#define UE4SS_SDK_Basic_ScrollBarBox_HPP

class UBasic_ScrollBarBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* OptionalSizeBox;
    class UNamedSlot* PutStuffHere;
    class UScrollBox* ScrollBox_Items;
    bool Always Show Scroll Bars;
    TEnumAsByte<EOrientation> Orientation;
    FSizeBoxSettings SizeSettings;
    float ScrollbarThickness;

    void PreConstruct(bool IsDesignTime);
    void ScrollToChild(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);
    void ExecuteUbergraph_Basic_ScrollBarBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FVector2D CallFunc_MakeVector2D_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateBrush K2Node_MakeStruct_SlateBrush_1, FSlateBrush K2Node_MakeStruct_SlateBrush_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FSlateColor K2Node_MakeStruct_SlateColor_4, FSlateBrush K2Node_MakeStruct_SlateBrush_3, FSlateBrush K2Node_MakeStruct_SlateBrush_4, FScrollBarStyle K2Node_MakeStruct_ScrollBarStyle, class UWidget* K2Node_CustomEvent_WidgetToFind, bool K2Node_CustomEvent_AnimateScroll, EDescendantScrollDestination K2Node_CustomEvent_ScrollDestination);
};

#endif
