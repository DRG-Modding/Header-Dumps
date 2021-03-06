#ifndef UE4SS_SDK_Basic_ButtonScalable2_HPP
#define UE4SS_SDK_Basic_ButtonScalable2_HPP

class UBasic_ButtonScalable2_C : public UFSDAdvancedLabel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim_Btn_Click;
    class UWidgetAnimation* Anim_Unhover;
    class UWidgetAnimation* Anim_Hover;
    class USizeBox* Bar_Left_Sizer;
    class USizeBox* Bar_Right_Sizer;
    class UBorder* BaseLeft;
    class UBorder* BaseMid;
    class UBorder* BaseRight;
    class UButton* Button_0;
    class UTextBlock* CountDownLabel;
    class UImage* LeftIcon;
    class UVerticalBox* Lines;
    class UImage* RightIcon;
    class USizeBox* Sizer;
    class USpacer* Spacer_0;
    class USpacer* Spacer_1;
    class UHorizontalBox* CurrentLine;
    bool Thick Bars;
    float Width (minimum);
    float Height (minimum);
    int32 Icon Size;
    int32 Icon Size - Controller Override;
    FLinearColor Tint - PC Icon;
    FLinearColor Tint - Controller Icon;
    FSlateFontInfo Font;
    FBasic_ButtonScalable2_COnClicked OnClicked;
    void OnClicked();
    FSlateBrush LeftIconBrush;
    FMargin LeftIconPadding;
    FSlateBrush RightIconBrush;
    FMargin RightIconPadding;
    TEnumAsByte<ENUM_MenuColors::Type> BackgroundNormal;
    TEnumAsByte<ENUM_MenuColors::Type> BackgroundHover;
    FLinearColor Font Color;
    float Width2;
    float Width4;
    bool ToggledOn;
    FBasic_ButtonScalable2_COnHovered OnHovered;
    void OnHovered();
    FBasic_ButtonScalable2_COnUnhovered OnUnhovered;
    void OnUnhovered();

    void HideCountDown();
    void SetCountDown(int32 SecondsRemaining, int32 MinimumIntegralDigits, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void SetBackgroundColor(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector, FLinearColor CallFunc_MenuColors_OutputColor);
    void SetIconBrush(class UImage*& Icon, FSlateBrush InBrush, FMargin InPadding, bool Temp_bool_Variable, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
    void SetTints(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
    void SetIconTint(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
    void OnNewLine(int32 Index);
    void OnAddIcon(FString Name, const FActionIconMapping& Icon);
    void OnAddKeyName(FString Name);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void OnAddString(FString Value);
    void OnReset();
    void Toggle(bool IsToggledOn);
    void SetToggled();
    void SetUntoggled();
    void Click();
    void ExecuteUbergraph_Basic_ButtonScalable2(int32 EntryPoint, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, int32 K2Node_Event_Index, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FSlateChildSize K2Node_MakeStruct_SlateChildSize, bool Temp_bool_Variable, FString K2Node_Event_Name_1, const FActionIconMapping K2Node_Event_Icon, FString K2Node_Event_Name, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UTextBlock* CallFunc_CreateTextBlock_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, FString K2Node_Event_value, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_CustomEvent_IsToggledOn, FString K2Node_Select_Default, class UTextBlock* CallFunc_CreateTextBlock_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, FSlateColor K2Node_MakeStruct_SlateColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_Variable_2, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FLinearColor K2Node_Select_Default_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Select_Default_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UImage* CallFunc_CreateImageSized_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature();
    void OnClicked__DelegateSignature();
};

#endif
