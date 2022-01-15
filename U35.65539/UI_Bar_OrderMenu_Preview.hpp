#ifndef UE4SS_SDK_UI_Bar_OrderMenu_Preview_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_Preview_HPP

class UUI_Bar_OrderMenu_Preview_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Open;
    UWidgetAnimation* FadeOut;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    UBlurBackground_C* BlurBackground;
    UTextBlock* BuffDescription;
    UTextBlock* PreviewDescription;
    UTextBlock* PreviewHeader;
    UImage* PreviewIcon;
    UTextBlock* PreviewStrength;
    UTextBlock* StrengthLabel;
    UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    USpaceRigBarMenuItem* PreviewItem;
    FUI_Bar_OrderMenu_Preview_COnPreviewItemChanged OnPreviewItemChanged;
    void OnPreviewItemChanged(USpaceRigBarMenuItem* Previous Item, USpaceRigBarMenuItem* New Item);
    UTemporaryBuff* PreviewBuf;

    void PreConstruct(bool IsDesignTime);
    void Set Preview Item(USpaceRigBarMenuItem* currentItem);
    void Construct();
    void Fade In();
    void Fade Out();
    void FadeOutFinished();
    void ExecuteUbergraph_UI_Bar_OrderMenu_Preview(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_2, FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, USpaceRigBarMenuItem* K2Node_CustomEvent_CurrentItem, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FText CallFunc_GetAlcoholStrengthName_Name, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsValid_ReturnValue_4, ESlateVisibility K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_5, FText CallFunc_Format_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_3, bool CallFunc_TextIsEmpty_ReturnValue, FText K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, FSlateColor K2Node_MakeStruct_SlateColor_3);
    void OnPreviewItemChanged__DelegateSignature(USpaceRigBarMenuItem* Previous Item, USpaceRigBarMenuItem* New Item);
}

#endif
