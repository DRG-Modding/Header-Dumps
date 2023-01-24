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
    void ExecuteUbergraph_Basic_ScrollBarBox(int32 EntryPoint);
};

#endif
