#ifndef UE4SS_SDK_Itm_HeaderCategory_HPP
#define UE4SS_SDK_Itm_HeaderCategory_HPP

class UItm_HeaderCategory_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_Main;
    UTextBlock* ButtonText;
    UImage* Filled_Left;
    UImage* Filled_Middle;
    UImage* Filled_Right;
    UImage* Outline_Left;
    UImage* Outline_Middle;
    UImage* Outline_Right;
    FText Text;
    bool IsSelected;
    bool UseFlatLeftside;
    FItm_HeaderCategory_COnClicked OnClicked;
    void OnClicked();

    void PreConstruct(bool IsDesignTime);
    void SetSelected(bool IsSelected);
    void SetColor(FSlateColor Filled, FSlateColor outline, FSlateColor Text);
    void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetText(FText Text);
    void ExecuteUbergraph_Itm_HeaderCategory(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_IsSelected, FText CallFunc_TextToUpper_ReturnValue, FSlateColor K2Node_CustomEvent_Filled, FSlateColor K2Node_CustomEvent_Outline, FSlateColor K2Node_CustomEvent_Text_1, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MakeColor_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_2, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MakeColor_ReturnValue_1, FSlateColor K2Node_MakeStruct_SlateColor_3, FSlateColor K2Node_MakeStruct_SlateColor_4, FSlateColor K2Node_MakeStruct_SlateColor_5, FSlateColor K2Node_MakeStruct_SlateColor_6, FSlateColor K2Node_MakeStruct_SlateColor_7, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_8, FLinearColor CallFunc_MenuColors_OutputColor_3, FSlateColor K2Node_MakeStruct_SlateColor_9, FSlateColor K2Node_MakeStruct_SlateColor_10, FSlateColor K2Node_MakeStruct_SlateColor_11, FSlateColor K2Node_MakeStruct_SlateColor_12, FLinearColor CallFunc_MenuColors_OutputColor_4, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, FLinearColor CallFunc_MakeColor_ReturnValue_2, FSlateColor K2Node_MakeStruct_SlateColor_13, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FLinearColor CallFunc_MakeColor_ReturnValue_3, FSlateColor K2Node_MakeStruct_SlateColor_14, FText K2Node_CustomEvent_Text, FText CallFunc_TextToUpper_ReturnValue_1);
    void OnClicked__DelegateSignature();
}

#endif
