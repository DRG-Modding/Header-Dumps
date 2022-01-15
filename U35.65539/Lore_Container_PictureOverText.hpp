#ifndef UE4SS_SDK_Lore_Container_PictureOverText_HPP
#define UE4SS_SDK_Lore_Container_PictureOverText_HPP

class ULore_Container_PictureOverText_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DataSwitch;
    UBasic_Menu_ColorBar_C* ColorbarTextSeparator;
    UImage* Image_Front;
    UImage* Image_Item;
    URichTextBlock* RichTextBlock_Body;
    UScaleBox* ScaleBox_FrontImage;
    USizeBox* SizeBox_Image;
    USpacer* Spacer_RightSideOfImage;
    UTextBlock* TextBlock_Header;
    UVerticalBox* VerticalBox_Text;
    UMinersManualData* Data;
    float ImageScale;
    float ImageRightSidePadding;

    void SequenceEvent__ENTRYPOINTLore_Container_PictureOverText_0();
    void SwitchDataEvent();
    void PreConstruct(bool IsDesignTime);
    void SetData(UMinersManualData* InData);
    void UpdateWidget();
    void ExecuteUbergraph_Lore_Container_PictureOverText(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, FVector2D CallFunc_MakeVector2D_ReturnValue, FText CallFunc_GetText_headline, FText CallFunc_GetText_richText, FText CallFunc_TextToUpper_ReturnValue, UTexture2D* CallFunc_GetBackgroundImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, UTexture2D* CallFunc_GetFrontImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, UMinersManualData* K2Node_CustomEvent_InData, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
