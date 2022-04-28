#ifndef UE4SS_SDK_Lore_Container_Text_W_Image_HPP
#define UE4SS_SDK_Lore_Container_Text_W_Image_HPP

class ULore_Container_Text_W_Image_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* ColorbarTextSeparator;
    class UHorizontalBox* HorizontalBox_Outer;
    class UImage* Image_Item;
    class UBorder* ImageBorder;
    class URichTextBlock* RichTextBlock_Body;
    class USizeBox* SizeBox_Image;
    class UTextBlock* TextBlock_Header;
    class UVerticalBox* VerticalBox_Text;
    class UBasic_Menu_ColorBar_C* WindowColorBar;
    class UMinersManualData* Data;
    FText Headline;
    FText Text;
    class UTexture2D* Image;
    bool UseStyle2;
    bool MoveImageToRightSide;
    FVector2D ImageSize;

    void PreConstruct(bool IsDesignTime);
    void AddItem(class UWidget* Content, TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment, TEnumAsByte<EVerticalAlignment> InVerticalAlignment, FMargin InPadding, TEnumAsByte<ESlateSizeRule::Type> Size Rule);
    void SetData(class UMinersManualData* Data);
    void Refresh();
    void ExecuteUbergraph_Lore_Container_Text_W_Image(int32 EntryPoint);
};

#endif
