#ifndef UE4SS_SDK_Lore_List_Element_HPP
#define UE4SS_SDK_Lore_List_Element_HPP

class ULore_List_Element_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOutNavigationIcon;
    class UWidgetAnimation* IntroAnim;
    class UButton* Button_Outer;
    class UCategoryImage_C* CategoryImage;
    class UImage* Image_Arrow;
    class UImage* Image_ArrowDown;
    class UImage* Image_ArrowUp;
    class UImage* Image_DPad;
    class UTextBlock* TextBlock_Header;
    class UTextBlock* TextBlock_Subtext;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_C_1;
    class UWidgetSwitcher* WidgetSwitcher_Navigation;
    FText Header;
    FText SubText;
    class UTexture2D* BGimage;
    FLinearColor BackgroundColor;
    class UTexture2D* FrontImage;
    FObjectiveMissionIcon MissionIcon;
    TEnumAsByte<E_MM_ButtonStyle::Type> IsEnabled;
    int32 Index;
    bool IsSelected;
    FLore_List_Element_COnClicked OnClicked;
    void OnClicked(int32 Index);
    bool ShowArrow;

    void SetData(FText Header, FText SubText, class UTexture2D* BackgroundImage, FLinearColor BackgroundColor, class UTexture2D* FrontImage, int32 Index, FObjectiveMissionIcon MissionIcon, bool ShowArrow, TEnumAsByte<E_MM_ButtonStyle::Type> IsEnabled);
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
    void ExecuteUbergraph_Lore_List_Element(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float Temp_float_Variable, float Temp_float_Variable_1, EFSDTargetPlatform Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, FText K2Node_CustomEvent_Header, FText K2Node_CustomEvent_SubText, class UTexture2D* K2Node_CustomEvent_BackgroundImage, FLinearColor K2Node_CustomEvent_BackgroundColor, class UTexture2D* K2Node_CustomEvent_FrontImage, int32 K2Node_CustomEvent_Index, FObjectiveMissionIcon K2Node_CustomEvent_MissionIcon, bool K2Node_CustomEvent_ShowArrow, TEnumAsByte<E_MM_ButtonStyle::Type> K2Node_CustomEvent_IsEnabled, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_CustomEvent_IsSelected, float K2Node_Select_Default, FExecuteUbergraph_Lore_List_ElementK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FText Temp_text_Variable, bool Temp_bool_Variable_1, FText K2Node_Select_Default_1, bool CallFunc_IsHovered_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, ESlateVisibility K2Node_Select_Default_2, FLinearColor K2Node_Select_Default_3, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_4, ESlateVisibility K2Node_Select_Default_4, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, class UTexture2D* K2Node_Select_Default_5);
    void OnClicked__DelegateSignature(int32 Index);
};

#endif
