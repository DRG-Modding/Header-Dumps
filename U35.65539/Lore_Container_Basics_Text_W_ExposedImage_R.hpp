#ifndef UE4SS_SDK_Lore_Container_Basics_Text_W_ExposedImage_R_HPP
#define UE4SS_SDK_Lore_Container_Basics_Text_W_ExposedImage_R_HPP

class ULore_Container_Basics_Text_W_ExposedImage_R_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* ColorbarTextSeparator;
    UHorizontalBox* HorizontalBox_Outer;
    UImage* Image_Item;
    URichTextBlock* RichTextBlock_Body;
    USizeBox* SizeBox_Image;
    UTextBlock* TextBlock_Header;
    UVerticalBox* VerticalBox_Text;
    FText Headline;
    FText Text;
    UTexture2D* Image;
    FVector2D ImageSize;

    void SetText(FText Headline, FText Body);
    void ExecuteUbergraph_Lore_Container_Basics_Text_W_ExposedImage_R(int32 EntryPoint, FText K2Node_CustomEvent_Headline, FText K2Node_CustomEvent_Body);
}

#endif
