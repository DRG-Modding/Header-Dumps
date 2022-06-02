#ifndef UE4SS_SDK_ITM_Modding_Loadout_HPP
#define UE4SS_SDK_ITM_Modding_Loadout_HPP

class UITM_Modding_Loadout_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UBorder* Background;
    class UButton* Button_0;
    class UButton* IconButton;
    class UImage* Image_LoadoutIcon;
    class UBorder* SelectionBorder;
    class UTextBlock* TextBlock_ButtonText;
    FText ButtonText;
    FSlateColor IconSelectedColor;
    FSlateColor IconNotSelectedColor;
    class UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget;
    int32 SlotNumber;
    FTimerHandle HideButtonsTimer;
    class UBasic_ToolTip_C* Button0Tooltip;
    FITM_Modding_Loadout_COnSlotLoaded OnSlotLoaded;
    void OnSlotLoaded();
    FITM_Modding_Loadout_CIconButtonClicked IconButtonClicked;
    void IconButtonClicked(int32 SlotNumber);

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetIconFromIndex(int32 Index);
    void SetIcon(class UTexture2D* Texture);
    void Update();
    class UWidget* GetButtonToolTip();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void GenerateModNamesOfSlot();
    void OnSettingsUpdated();
    void BndEvt__ITM_Modding_Loadout_IconButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void PromptClearSlot();
    void ExecuteUbergraph_ITM_Modding_Loadout(int32 EntryPoint);
    void IconButtonClicked__DelegateSignature(int32 SlotNumber);
    void OnSlotLoaded__DelegateSignature();
};

#endif
