#ifndef UE4SS_SDK_Basic_ExpandableMenu_HPP
#define UE4SS_SDK_Basic_ExpandableMenu_HPP

class UBasic_ExpandableMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimOpen;
    class UBorder* Border_0;
    class UButton* CategoryButton;
    class UNamedSlot* Content;
    class USizeBox* ContentSize;
    class UTextBlock* Header1Text;
    class UTextBlock* Header2Text;
    class UImage* OpenImage;
    class USizeBox* WidthSizeBox;
    bool Menu Open;
    float OpenHeight;
    float HeightScale;
    float Width;
    FText Header1;
    FText Header2;

    void SetWidth(float InWidth);
    void InstaOpenMenu(bool Open);
    void SetFixedSizeOpenHeight(int32 Item Count, float Item Height);
    void SetOpenHeight(float OpenHeight);
    void SetHovered(bool InHovered);
    void SetHeader2(FText InText);
    void SetHeader1(FText InText);
    void SetMenuOpen(bool IsOpen, bool& OutIsOpen);
    void GetButtonStyle(TEnumAsByte<ENUM_MenuColors::Type> Color, FSlateBrush& SlateBrush);
    void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetHeightScale(float NewScale);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ExpandableMenu(int32 EntryPoint);
};

#endif
