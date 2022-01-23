#ifndef UE4SS_SDK_Lore_Container_Basics_Text_W_ExposedImage_L_HPP
#define UE4SS_SDK_Lore_Container_Basics_Text_W_ExposedImage_L_HPP

class ULore_Container_Basics_Text_W_ExposedImage_L_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* ColorbarTextSeparator;
    class UHorizontalBox* HorizontalBox_Outer;
    class UImage* Image_Item;
    class URichTextBlock* RichTextBlock_Body;
    class USizeBox* SizeBox_Image;
    class UTextBlock* TextBlock_Header;
    class UVerticalBox* VerticalBox_Text;
    FText Headline;
    FText Text;
    class UTexture2D* Image;
    FVector2D ImageSize;

    void SetText(FText Headline, FText Body);
    void ExecuteUbergraph_Lore_Container_Basics_Text_W_ExposedImage_L(int32 EntryPoint, FText K2Node_CustomEvent_Headline, FText K2Node_CustomEvent_Body);
};

#endif
