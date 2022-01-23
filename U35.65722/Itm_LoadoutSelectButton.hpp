#ifndef UE4SS_SDK_Itm_LoadoutSelectButton_HPP
#define UE4SS_SDK_Itm_LoadoutSelectButton_HPP

class UITM_LoadoutSelectButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UBorder* Background;
    class UButton* Button_0;
    class UImage* Image_LoadoutIcon;
    class UBorder* SelectionBorder;
    class UTextBlock* TextBlock_ButtonText;
    FITM_LoadoutSelectButton_COnClicked OnClicked;
    void OnClicked(class UITM_LoadoutSelectButton_C* Button);
    bool IsSelected;
    FText ButtonText;
    FSlateColor IconSelectedColor;
    FSlateColor IconNotSelectedColor;
    class UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget;

    class UWidget* GetToolTipWidget(class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_HeadlineAndText_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetSelected(bool inSelected);
    void PreConstruct(bool IsDesignTime);
    void SetIcon(class UTexture2D* Texture);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_LoadoutSelectButton(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_inSelected, bool K2Node_Event_IsDesignTime, class UTexture2D* K2Node_CustomEvent_Texture, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FLinearColor CallFunc_MenuColors_OutputColor_3);
    void OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button);
};

#endif
