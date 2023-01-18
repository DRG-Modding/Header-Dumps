#ifndef UE4SS_SDK_Lore_Container_Basics_Info_HPP
#define UE4SS_SDK_Lore_Container_Basics_Info_HPP

class ULore_Container_Basics_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* ColorbarTextSeparator;
    class UHorizontalBox* HorizontalBox_Outer;
    class UImage* Image_Front;
    class UImage* Image_Item;
    class URichTextBlock* RichTextBlock_Body;
    class USizeBox* SizeBox_Image;
    class UTextBlock* TextBlock_Header;
    class UVerticalBox* VerticalBox_Text;
    class UMinersManualData* Data;
    bool MoveImageToRightSide;

    void PreConstruct(bool IsDesignTime);
    void AddItem(class UWidget* Content, TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment, TEnumAsByte<EVerticalAlignment> InVerticalAlignment, FMargin InPadding, TEnumAsByte<ESlateSizeRule::Type> Size Rule);
    void SetAlignment(TEnumAsByte<ETextJustify::Type> Text, TEnumAsByte<EHorizontalAlignment> Image);
    void ExecuteUbergraph_Lore_Container_Basics_Info(int32 EntryPoint);
};

#endif
