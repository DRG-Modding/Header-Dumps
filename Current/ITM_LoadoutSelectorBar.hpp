#ifndef UE4SS_SDK_ITM_LoadoutSelectorBar_HPP
#define UE4SS_SDK_ITM_LoadoutSelectorBar_HPP

class UITM_LoadoutSelectorBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_100;
    class UHorizontalBox* HorizontalBox_Buttons;
    class UImage* Image_Background;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_LoadoutIconSelector_C* ITM_LoadoutIconSelector;
    class UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_0;
    class UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_1;
    class UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_2;
    class UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_3;
    class UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_4;
    class UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_5;
    class UVerticalBox* VerticalBox_YesNoPrompt;
    FITM_LoadoutSelectorBar_CNewLoadoutSelected NewLoadoutSelected;
    void NewLoadoutSelected();
    class UPlayerCharacterID* characterID;
    TArray<class UITM_LoadoutSelectButton_C*> LoadoutButtons;
    class UITM_LoadoutSelectButton_C* SelectedLoadoutButton;
    class UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget;
    bool CanSwitchIcon;
    FITM_LoadoutSelectorBar_CCopyLoadoutAtIndex CopyLoadoutAtIndex;
    void CopyLoadoutAtIndex(int32 Index);
    bool ShowCopyPaste;
    bool CopyPasteHovered;
    class UITM_LoadoutSelectButton_C* HoveredLoadoutButton;
    bool CopyVanityLoadoutOnPaste;
    bool CopyWeaponLoadoutOnPaste;
    class UBasic_Popup_YesNoPrompt_C* YesNoPopup;
    bool CopyPickaxeLoadoutOnPaste;
    int32 PastedButtonIdx;

    void GetToolTipText(FText& Headline, FText& Text);
    void Get Selected Button(class UITM_LoadoutSelectButton_C*& Button, int32& Index);
    class UWidget* GetToolTipWidget();
    void SetData(class UPlayerCharacterID* CharacterClass);
    void SetSelected(int32 Index);
    void BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button);
    void BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button);
    void BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button);
    void BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature(class UTexture2D* Texture, int32 ImageIndex);
    void SelectPressed(class UITM_LoadoutSelectButton_C* Button, int32 Index);
    void SetLoadoutIcon(class UITM_LoadoutSelectButton_C* Button, int32 Index);
    void RefreshLoadout();
    void SetSelectorVisible(bool IsVisible);
    void BndEvt__Itm_LoadoutSelectButton_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button);
    void BndEvt__Itm_LoadoutSelectButton_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button);
    void BndEvt__ITM_LoadoutSelectorBar_Itm_LoadoutSelectButton_5_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C* Button);
    void OnPaste(class UITM_LoadoutSelectButton_C* LoadoutButton);
    void OnCopyPasteHovered(bool IsHovered, class UITM_LoadoutSelectButton_C* Button);
    void PreConstruct(bool IsDesignTime);
    void OnClicked(bool Yes);
    void ExecuteUbergraph_ITM_LoadoutSelectorBar(int32 EntryPoint);
    void CopyLoadoutAtIndex__DelegateSignature(int32 Index);
    void NewLoadoutSelected__DelegateSignature();
};

#endif
