#ifndef UE4SS_SDK_Basic_RadioButton_HPP
#define UE4SS_SDK_Basic_RadioButton_HPP

class UBasic_RadioButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TickShow;
    class UWidgetAnimation* Click;
    class UImage* BorderInner;
    class UImage* BorderOuter;
    class UButton* Checkbox_Button;
    class UHorizontalBox* Horizontal;
    class UTextBlock* RadioText;
    class USizeBox* SizeBox_1;
    class UImage* Tick;
    FBasic_RadioButton_COnCheckStateChanged OnCheckStateChanged;
    void OnCheckStateChanged(bool IsChecked);
    float Size;
    bool IsChecked;
    bool CanUncheck;
    FText Text;
    bool UpperCase;
    int32 Index;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;

    void GetText(FText& Text);
    void SetTextColor(TEnumAsByte<ENUM_MenuColors::Type> Color);
    void SetText(FText InText, bool InUpperCase, bool Temp_bool_Variable, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default_1);
    void SetIsChecked(bool InIsChecked, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, FVector2D K2Node_Select_Default);
    bool GetIsChecked();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Basic_RadioButton(int32 EntryPoint, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_Event_IsDesignTime, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void OnCheckStateChanged__DelegateSignature(bool IsChecked);
};

#endif
