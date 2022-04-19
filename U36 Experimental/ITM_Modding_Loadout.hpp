#ifndef UE4SS_SDK_ITM_Modding_Loadout_HPP
#define UE4SS_SDK_ITM_Modding_Loadout_HPP

class UITM_Modding_Loadout_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UBorder* Background;
    class UButton* Button_0;
    class UWidgetSwitcher* ButtonSwitcher;
    class UBasic_ButtonScalable2_C* LoadButton;
    class UBasic_ButtonScalable2_C* SaveButton;
    class UBasic_ButtonScalable2_C* SaveButtonAlone;
    class UBorder* SelectionBorder;
    class UImage* SlotHaveSavedModsImg;
    class UTextBlock* TextBlock_ButtonText;
    FText ButtonText;
    FSlateColor IconSelectedColor;
    FSlateColor IconNotSelectedColor;
    class UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget;
    int32 slotNumber;
    FTimerHandle HideButtonsTimer;
    class UBasic_ToolTip_C* Button0Tooltip;
    FITM_Modding_Loadout_COnSlotLoaded OnSlotLoaded;
    void OnSlotLoaded();
    FITM_Modding_Loadout_COnSlotClicked OnSlotClicked;
    void OnSlotClicked(class UITM_Modding_Loadout_C* ModSlot);

    void Update();
    class UWidget* GetButtonToolTip();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__LoadButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__SaveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void HideLoadAndSaveButtons();
    void Construct();
    void GenerateModNamesOfSlot();
    void OnSettingsUpdated();
    void BndEvt__ITM_Modding_Loadout_SaveButtonAlone_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void ExecuteUbergraph_ITM_Modding_Loadout(int32 EntryPoint);
    void OnSlotClicked__DelegateSignature(class UITM_Modding_Loadout_C* ModSlot);
    void OnSlotLoaded__DelegateSignature();
};

#endif
