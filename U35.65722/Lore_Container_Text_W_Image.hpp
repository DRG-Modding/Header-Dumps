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
    void ExecuteUbergraph_Lore_Container_Text_W_Image(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UWidget* K2Node_CustomEvent_Content, TEnumAsByte<EHorizontalAlignment> K2Node_CustomEvent_InHorizontalAlignment, TEnumAsByte<EVerticalAlignment> K2Node_CustomEvent_InVerticalAlignment, FMargin K2Node_CustomEvent_InPadding, TEnumAsByte<ESlateSizeRule::Type> K2Node_CustomEvent_Size_Rule, bool Temp_bool_Variable_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, ESlateVisibility Temp_byte_Variable_4, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, ESlateVisibility K2Node_Select_Default, FMargin K2Node_MakeStruct_Margin, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FText CallFunc_GetText_headline, FText CallFunc_GetText_richText, ESlateVisibility K2Node_Select_Default_2, FText CallFunc_TextToUpper_ReturnValue, class UTexture2D* CallFunc_GetBackgroundImage_ReturnValue, class UMinersManualData* K2Node_CustomEvent_Data);
};

#endif
