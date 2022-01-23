#ifndef UE4SS_SDK_UI_Bar_OrderMenu_Preview_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_Preview_HPP

class UUI_Bar_OrderMenu_Preview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Open;
    class UWidgetAnimation* FadeOut;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    class UBlurBackground_C* BlurBackground;
    class UTextBlock* BuffDescription;
    class UTextBlock* PreviewDescription;
    class UTextBlock* PreviewHeader;
    class UImage* PreviewIcon;
    class UTextBlock* PreviewStrength;
    class UTextBlock* StrengthLabel;
    class UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    class USpaceRigBarMenuItem* PreviewItem;
    FUI_Bar_OrderMenu_Preview_COnPreviewItemChanged OnPreviewItemChanged;
    void OnPreviewItemChanged(class USpaceRigBarMenuItem* Previous Item, class USpaceRigBarMenuItem* New Item);
    class UTemporaryBuff* PreviewBuf;

    void PreConstruct(bool IsDesignTime);
    void Set Preview Item(class USpaceRigBarMenuItem* currentItem);
    void Construct();
    void Fade In();
    void Fade Out();
    void FadeOutFinished();
    void ExecuteUbergraph_UI_Bar_OrderMenu_Preview(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_UI_Bar_OrderMenu_PreviewK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_2, FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class USpaceRigBarMenuItem* K2Node_CustomEvent_CurrentItem, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FText CallFunc_GetAlcoholStrengthName_Name, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsValid_ReturnValue_4, ESlateVisibility K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_5, FText CallFunc_Format_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_3, bool CallFunc_TextIsEmpty_ReturnValue, FText K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, FSlateColor K2Node_MakeStruct_SlateColor_3);
    void OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem* Previous Item, class USpaceRigBarMenuItem* New Item);
};

#endif
