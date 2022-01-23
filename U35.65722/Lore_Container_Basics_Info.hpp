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
    void ExecuteUbergraph_Lore_Container_Basics_Info(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_CustomEvent_Content, TEnumAsByte<EHorizontalAlignment> K2Node_CustomEvent_InHorizontalAlignment, TEnumAsByte<EVerticalAlignment> K2Node_CustomEvent_InVerticalAlignment, FMargin K2Node_CustomEvent_InPadding, TEnumAsByte<ESlateSizeRule::Type> K2Node_CustomEvent_Size_Rule, ESlateVisibility Temp_byte_Variable_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, TEnumAsByte<ETextJustify::Type> K2Node_CustomEvent_Text, TEnumAsByte<EHorizontalAlignment> K2Node_CustomEvent_Image, class UScaleBoxSlot* K2Node_DynamicCast_AsScale_Box_Slot, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, FText CallFunc_GetText_headline, FText CallFunc_GetText_richText, class UTexture2D* CallFunc_GetFrontImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility K2Node_Select_Default, class UTexture2D* CallFunc_GetBackgroundImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1);
};

#endif
