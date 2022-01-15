#ifndef UE4SS_SDK_Lore_List_Element_HPP
#define UE4SS_SDK_Lore_List_Element_HPP

class ULore_List_Element_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeOutNavigationIcon;
    UWidgetAnimation* IntroAnim;
    UButton* Button_Outer;
    UCategoryImage_C* CategoryImage;
    UImage* Image_Arrow;
    UImage* Image_ArrowDown;
    UImage* Image_ArrowUp;
    UImage* Image_DPad;
    UTextBlock* TextBlock_Header;
    UTextBlock* TextBlock_Subtext;
    UUI_AdvancedLabel_C* UI_AdvancedLabel;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_C_1;
    UWidgetSwitcher* WidgetSwitcher_Navigation;
    FText Header;
    FText SubText;
    UTexture2D* BGimage;
    FLinearColor BackgroundColor;
    UTexture2D* FrontImage;
    FObjectiveMissionIcon MissionIcon;
    TEnumAsByte<E_MM_ButtonStyle::Type> IsEnabled;
    int32 Index;
    bool IsSelected;
    FLore_List_Element_COnClicked OnClicked;
    void OnClicked(int32 Index);
    bool ShowArrow;

    void SetData(FText Header, FText SubText, UTexture2D* BackgroundImage, FLinearColor BackgroundColor, UTexture2D* FrontImage, int32 Index, FObjectiveMissionIcon MissionIcon, bool ShowArrow, uint8 IsEnabled);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetSelected(bool IsSelected);
    void Construct();
    void UpdateBorder();
    void PlayIntroAnim();
    void InputSourceChanged(EFSDInputSource InputSource);
    void HideNavIcon();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_List_Element(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float Temp_float_Variable, float Temp_float_Variable_1, EFSDTargetPlatform Temp_byte_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* Temp_object_Variable_4, FText K2Node_CustomEvent_Header, FText K2Node_CustomEvent_SubText, UTexture2D* K2Node_CustomEvent_BackgroundImage, FLinearColor K2Node_CustomEvent_BackgroundColor, UTexture2D* K2Node_CustomEvent_FrontImage, int32 K2Node_CustomEvent_Index, FObjectiveMissionIcon K2Node_CustomEvent_MissionIcon, bool K2Node_CustomEvent_ShowArrow, uint8 K2Node_CustomEvent_IsEnabled, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_CustomEvent_IsSelected, float K2Node_Select_Default, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText Temp_text_Variable, bool Temp_bool_Variable_1, FText K2Node_Select_Default_1, bool CallFunc_IsHovered_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, ESlateVisibility K2Node_Select_Default_2, FLinearColor K2Node_Select_Default_3, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_4, ESlateVisibility K2Node_Select_Default_4, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, UTexture2D* K2Node_Select_Default_5);
    void OnClicked__DelegateSignature(int32 Index);
}

#endif
