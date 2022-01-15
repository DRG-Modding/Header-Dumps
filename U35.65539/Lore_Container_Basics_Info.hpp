#ifndef UE4SS_SDK_Lore_Container_Basics_Info_HPP
#define UE4SS_SDK_Lore_Container_Basics_Info_HPP

class ULore_Container_Basics_Info_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* ColorbarTextSeparator;
    UHorizontalBox* HorizontalBox_Outer;
    UImage* Image_Front;
    UImage* Image_Item;
    URichTextBlock* RichTextBlock_Body;
    USizeBox* SizeBox_Image;
    UTextBlock* TextBlock_Header;
    UVerticalBox* VerticalBox_Text;
    UMinersManualData* Data;
    bool MoveImageToRightSide;

    void PreConstruct(bool IsDesignTime);
    void AddItem(UWidget* Content, uint8 InHorizontalAlignment, uint8 InVerticalAlignment, FMargin InPadding, uint8 Size Rule);
    void SetAlignment(uint8 Text, uint8 Image);
    void ExecuteUbergraph_Lore_Container_Basics_Info(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, UWidget* K2Node_CustomEvent_Content, uint8 K2Node_CustomEvent_InHorizontalAlignment, uint8 K2Node_CustomEvent_InVerticalAlignment, FMargin K2Node_CustomEvent_InPadding, uint8 K2Node_CustomEvent_Size_Rule, ESlateVisibility Temp_byte_Variable_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, uint8 K2Node_CustomEvent_Text, uint8 K2Node_CustomEvent_Image, UScaleBoxSlot* K2Node_DynamicCast_AsScale_Box_Slot, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, FText CallFunc_GetText_headline, FText CallFunc_GetText_richText, UTexture2D* CallFunc_GetFrontImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility K2Node_Select_Default, UTexture2D* CallFunc_GetBackgroundImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1);
}

#endif
