#ifndef UE4SS_SDK_Lore_Container_Text_W_Image_HPP
#define UE4SS_SDK_Lore_Container_Text_W_Image_HPP

class ULore_Container_Text_W_Image_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* ColorbarTextSeparator;
    UHorizontalBox* HorizontalBox_Outer;
    UImage* Image_Item;
    UBorder* ImageBorder;
    URichTextBlock* RichTextBlock_Body;
    USizeBox* SizeBox_Image;
    UTextBlock* TextBlock_Header;
    UVerticalBox* VerticalBox_Text;
    UBasic_Menu_ColorBar_C* WindowColorBar;
    UMinersManualData* Data;
    FText Headline;
    FText Text;
    UTexture2D* Image;
    bool UseStyle2;
    bool MoveImageToRightSide;
    FVector2D ImageSize;

    void PreConstruct(bool IsDesignTime);
    void AddItem(UWidget* Content, uint8 InHorizontalAlignment, uint8 InVerticalAlignment, FMargin InPadding, uint8 Size Rule);
    void SetData(UMinersManualData* Data);
    void Refresh();
    void ExecuteUbergraph_Lore_Container_Text_W_Image(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UWidget* K2Node_CustomEvent_Content, uint8 K2Node_CustomEvent_InHorizontalAlignment, uint8 K2Node_CustomEvent_InVerticalAlignment, FMargin K2Node_CustomEvent_InPadding, uint8 K2Node_CustomEvent_Size_Rule, bool Temp_bool_Variable_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, ESlateVisibility Temp_byte_Variable_4, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, ESlateVisibility K2Node_Select_Default, FMargin K2Node_MakeStruct_Margin, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FText CallFunc_GetText_headline, FText CallFunc_GetText_richText, ESlateVisibility K2Node_Select_Default_2, FText CallFunc_TextToUpper_ReturnValue, UTexture2D* CallFunc_GetBackgroundImage_ReturnValue, UMinersManualData* K2Node_CustomEvent_Data);
}

#endif
