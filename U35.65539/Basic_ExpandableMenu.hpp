#ifndef UE4SS_SDK_Basic_ExpandableMenu_HPP
#define UE4SS_SDK_Basic_ExpandableMenu_HPP

class UBasic_ExpandableMenu_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimOpen;
    UBorder* Border_0;
    UButton* CategoryButton;
    UNamedSlot* Content;
    USizeBox* ContentSize;
    UTextBlock* Header1Text;
    UTextBlock* Header2Text;
    UImage* OpenImage;
    USizeBox* WidthSizeBox;
    bool Menu Open;
    float OpenHeight;
    float HeightScale;
    float Width;
    FText Header1;
    FText Header2;

    void SetWidth(float InWidth, float CallFunc_FMax_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void InstaOpenMenu(bool Open, bool Temp_bool_Variable, bool CallFunc_SetMenuOpen_OutIsOpen, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetFixedSizeOpenHeight(int32 Item Count, float Item Height, float CallFunc_Multiply_IntFloat_ReturnValue);
    void SetOpenHeight(float OpenHeight);
    void SetHovered(bool InHovered, FLinearColor CallFunc_SelectMenuColor_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetHeader2(FText InText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetHeader1(FText InText, FText CallFunc_TextToUpper_ReturnValue);
    void SetMenuOpen(bool IsOpen, bool& OutIsOpen, float CallFunc_SelectFloat_ReturnValue);
    void GetButtonStyle(uint8 Color, FSlateBrush& SlateBrush, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetHeightScale(float newScale);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ExpandableMenu(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, bool Temp_bool_Variable_2, float Temp_float_Variable_1, float Temp_float_Variable_2, FSlateBrush CallFunc_GetButtonStyle_SlateBrush, FSlateBrush CallFunc_GetButtonStyle_SlateBrush_1, FSlateBrush CallFunc_GetButtonStyle_SlateBrush_2, FSlateBrush CallFunc_GetButtonStyle_SlateBrush_3, bool CallFunc_SetMenuOpen_OutIsOpen, FButtonStyle K2Node_MakeStruct_ButtonStyle, float K2Node_Select_Default, float K2Node_CustomEvent_NewScale, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetMenuOpen_OutIsOpen_1, bool CallFunc_IsAnimationPlaying_ReturnValue, uint8 K2Node_Select_Default_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, float K2Node_Select_Default_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue);
}

#endif
