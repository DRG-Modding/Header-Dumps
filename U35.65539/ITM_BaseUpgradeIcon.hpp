#ifndef UE4SS_SDK_ITM_BaseUpgradeIcon_HPP
#define UE4SS_SDK_ITM_BaseUpgradeIcon_HPP

class UITM_BaseUpgradeIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Unlock;
    UWidgetAnimation* AnimHover;
    UImage* BG;
    UImage* Icon;
    UImage* Icon_Lock;
    UWidgetSwitcher* IconSwitch;
    UHorizontalBox* LockBar;
    UTextBlock* LockRequirementText;
    UImage* outline;
    UOverlay* Overlay_2;
    UImage* SelectionOutline;
    USizeBox* SizeBox_0;
    UButton* WidgetButton;
    UTexture2D* PreviewIcon;
    EItemUpgradeStatus PreviewStatus;
    int32 PreviewLockRequirement;
    bool PreviewShowEquippedAsBorder;
    bool PreviewShowLockIcon;
    bool PreviewShowLockRequirement;
    FITM_BaseUpgradeIcon_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(UITM_BaseUpgradeIcon_C* Widget);
    FITM_BaseUpgradeIcon_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(UITM_BaseUpgradeIcon_C* Widget);
    FITM_BaseUpgradeIcon_COnClicked OnClicked;
    void OnClicked(UITM_BaseUpgradeIcon_C* Widget);
    bool Hovered;
    bool PreviewTierLocked;

    bool IsInteractable();
    void Update(UTexture2D* InIcon, EItemUpgradeStatus InStatus, int32 InLockRequirement, UTexture2D* LockTexture, uint8 LockTint, bool InShowEquippedAsBorder, bool InShowLockIcon, bool InShowLockRequirement, bool InTierLocked, bool IsLocked, uint8 Temp_byte_Variable, bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_2, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, bool Temp_bool_Variable_3, uint8 Temp_byte_Variable_4, bool Temp_bool_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, uint8 Temp_byte_Variable_7, bool Temp_bool_Variable_7, uint8 Temp_byte_Variable_8, uint8 Temp_byte_Variable_9, bool Temp_bool_Variable_8, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, EItemUpgradeStatus Temp_byte_Variable_12, uint8 Temp_byte_Variable_13, uint8 Temp_byte_Variable_14, uint8 Temp_byte_Variable_15, uint8 Temp_byte_Variable_16, uint8 Temp_byte_Variable_17, bool Temp_bool_Variable_9, uint8 Temp_byte_Variable_18, uint8 Temp_byte_Variable_19, EItemUpgradeStatus Temp_byte_Variable_20, uint8 Temp_byte_Variable_21, uint8 Temp_byte_Variable_22, uint8 Temp_byte_Variable_23, bool Temp_bool_Variable_10, ESlateVisibility Temp_byte_Variable_24, ESlateVisibility Temp_byte_Variable_25, EItemUpgradeStatus Temp_byte_Variable_26, uint8 Temp_byte_Variable_27, uint8 Temp_byte_Variable_28, uint8 Temp_byte_Variable_29, uint8 Temp_byte_Variable_30, bool CallFunc_IsValid_ReturnValue, UTexture2D* K2Node_Select_Default, FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable_11, uint8 Temp_byte_Variable_31, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 K2Node_Select_Default_1, uint8 K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor, ESlateVisibility K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, UWidget* K2Node_Select_Default_4, bool CallFunc_BooleanAND_ReturnValue_2, uint8 K2Node_Select_Default_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, uint8 K2Node_Select_Default_6, bool CallFunc_BooleanAND_ReturnValue_3, ESlateVisibility K2Node_Select_Default_7, uint8 K2Node_Select_Default_8, uint8 K2Node_Select_Default_9, FLinearColor CallFunc_MenuColors_OutputColor_1, uint8 K2Node_Select_Default_10, uint8 K2Node_Select_Default_11, FLinearColor CallFunc_MenuColors_OutputColor_2, uint8 K2Node_Select_Default_12, bool CallFunc_IsValid_ReturnValue_1, uint8 K2Node_Select_Default_13, bool Temp_bool_Variable_12, ESlateVisibility K2Node_Select_Default_14, uint8 K2Node_Select_Default_15, FLinearColor CallFunc_MenuColors_OutputColor_3);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_BaseUpgradeIcon(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void OnClicked__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
    void OnHoverEnd__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
    void OnHoverBegin__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
}

#endif
