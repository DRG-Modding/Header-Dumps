#ifndef UE4SS_SDK_Basic_ButtonMultiline_HPP
#define UE4SS_SDK_Basic_ButtonMultiline_HPP

class UBasic_ButtonMultiline_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_0;
    UImage* I_Background;
    UImage* I_Outline;
    UImage* IMG_Brackets;
    UImage* IMG_Overlay;
    USizeBox* SizeBox_0;
    UTextBlock* TXT_ButtonText;
    FBasic_ButtonMultiline_COn Clicked On Clicked;
    void On Clicked();
    FText Text;
    int32 Font Size;
    FVector2D Button Size;
    bool Overlay;
    USoundBase* HoveredSound;
    USoundBase* PressedSound;

    void SetButtonText(FText NewParam);
    void SetFontSize(int32 NewParam, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ButtonMultiline(int32 EntryPoint, bool Temp_bool_Variable, FSlateSound K2Node_MakeStruct_SlateSound, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, ESlateVisibility K2Node_Select_Default, FSlateSound K2Node_MakeStruct_SlateSound_1, FButtonStyle K2Node_MakeStruct_ButtonStyle);
    void On Clicked__DelegateSignature();
}

#endif
