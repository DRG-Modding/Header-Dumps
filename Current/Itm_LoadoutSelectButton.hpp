#ifndef UE4SS_SDK_Itm_LoadoutSelectButton_HPP
#define UE4SS_SDK_Itm_LoadoutSelectButton_HPP

class UITM_LoadoutSelectButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UBorder* Background;
    class UButton* Button_CopyPaste;
    class UButton* Button_Loadout;
    class UBorder* FrameBorder_Paste;
    class UImage* Image_BackgroundPaste;
    class UImage* Image_LoadoutIcon;
    class UImage* Image_LoadoutIcon_Paste;
    class UOverlay* Overlay_CopyPaste;
    class UOverlay* Overlay_Paste;
    class UOverlay* Overlay_PasteOuter;
    class UBorder* SelectionBorder;
    class UTextBlock* TextBlock_ButtonText;
    FITM_LoadoutSelectButton_COnClicked OnClicked;
    void OnClicked(class UITM_LoadoutSelectButton_C* Button);
    bool IsSelected;
    FText ButtonText;
    FSlateColor IconSelectedColor;
    FSlateColor IconNotSelectedColor;
    class UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget;
    FITM_LoadoutSelectButton_COnPaste OnPaste;
    void OnPaste(class UITM_LoadoutSelectButton_C* LoadoutButton);
    FITM_LoadoutSelectButton_COnCopyPasteHovered OnCopyPasteHovered;
    void OnCopyPasteHovered(bool IsHovered, class UITM_LoadoutSelectButton_C* Button);

    void PreConstruct(bool IsDesignTime);
    void SetIcon(class UTexture2D* Texture);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ITM_LoadoutSelectButton_Button_Paste_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetPasteButtonHover(bool IsHovered);
    void BndEvt__ITM_LoadoutSelectButton_Button_CopyPaste_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ITM_LoadoutSelectButton_Button_CopyPaste_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void SetButtonPressed(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector, bool IsPressed);
    void SetSelected(bool InSelected);
    void SetData(bool ShowCopyPaste);
    void ExecuteUbergraph_ITM_LoadoutSelectButton(int32 EntryPoint);
    void OnCopyPasteHovered__DelegateSignature(bool IsHovered, class UITM_LoadoutSelectButton_C* Button);
    void OnPaste__DelegateSignature(class UITM_LoadoutSelectButton_C* LoadoutButton);
    void OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button);
};

#endif
