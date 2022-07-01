#ifndef UE4SS_SDK_Lore_Container_PictureOverText_HPP
#define UE4SS_SDK_Lore_Container_PictureOverText_HPP

class ULore_Container_PictureOverText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DataSwitch;
    class UBasic_Menu_ColorBar_C* ColorbarTextSeparator;
    class UImage* Image_Front;
    class UImage* Image_Item;
    class URichTextBlock* RichTextBlock_Body;
    class UScaleBox* ScaleBox_FrontImage;
    class USizeBox* SizeBox_Image;
    class USpacer* Spacer_RightSideOfImage;
    class UTextBlock* TextBlock_Header;
    class UVerticalBox* VerticalBox_Text;
    class UMinersManualData* Data;
    float ImageScale;
    float ImageRightSidePadding;

    void SequenceEvent__ENTRYPOINTLore_Container_PictureOverText_0();
    void SwitchDataEvent();
    void PreConstruct(bool IsDesignTime);
    void SetData(class UMinersManualData* InData);
    void UpdateWidget();
    void ExecuteUbergraph_Lore_Container_PictureOverText(int32 EntryPoint);
};

#endif
