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
    void ExecuteUbergraph_Lore_Container_PictureOverText(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, FVector2D CallFunc_MakeVector2D_ReturnValue, FText CallFunc_GetText_headline, FText CallFunc_GetText_richText, FText CallFunc_TextToUpper_ReturnValue, class UTexture2D* CallFunc_GetBackgroundImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetFrontImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class UMinersManualData* K2Node_CustomEvent_InData, FVector2D CallFunc_MakeVector2D_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
