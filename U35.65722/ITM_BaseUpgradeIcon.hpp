#ifndef UE4SS_SDK_ITM_BaseUpgradeIcon_HPP
#define UE4SS_SDK_ITM_BaseUpgradeIcon_HPP

class UITM_BaseUpgradeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unlock;
    class UWidgetAnimation* AnimHover;
    class UImage* BG;
    class UImage* Icon;
    class UImage* Icon_Lock;
    class UWidgetSwitcher* IconSwitch;
    class UHorizontalBox* LockBar;
    class UTextBlock* LockRequirementText;
    class UImage* outline;
    class UOverlay* Overlay_2;
    class UImage* SelectionOutline;
    class USizeBox* SizeBox_0;
    class UButton* WidgetButton;
    class UTexture2D* PreviewIcon;
    EItemUpgradeStatus PreviewStatus;
    int32 PreviewLockRequirement;
    bool PreviewShowEquippedAsBorder;
    bool PreviewShowLockIcon;
    bool PreviewShowLockRequirement;
    FITM_BaseUpgradeIcon_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(class UITM_BaseUpgradeIcon_C* Widget);
    FITM_BaseUpgradeIcon_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UITM_BaseUpgradeIcon_C* Widget);
    FITM_BaseUpgradeIcon_COnClicked OnClicked;
    void OnClicked(class UITM_BaseUpgradeIcon_C* Widget);
    bool Hovered;
    bool PreviewTierLocked;

    bool IsInteractable();
    void Update(class UTexture2D* InIcon, EItemUpgradeStatus InStatus, int32 InLockRequirement, class UTexture2D* LockTexture, TEnumAsByte<ENUM_MenuColors::Type> LockTint, bool InShowEquippedAsBorder, bool InShowLockIcon, bool InShowLockRequirement, bool InTierLocked, bool IsLocked, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_3, bool Temp_bool_Variable_3, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_4, bool Temp_bool_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_7, bool Temp_bool_Variable_7, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_8, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_9, bool Temp_bool_Variable_8, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, EItemUpgradeStatus Temp_byte_Variable_12, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_13, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_14, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_15, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_16, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_17, bool Temp_bool_Variable_9, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_18, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_19, EItemUpgradeStatus Temp_byte_Variable_20, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_21, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_22, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_23, bool Temp_bool_Variable_10, ESlateVisibility Temp_byte_Variable_24, ESlateVisibility Temp_byte_Variable_25, EItemUpgradeStatus Temp_byte_Variable_26, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_27, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_28, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_29, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_30, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default, FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable_11, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_31, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor, ESlateVisibility K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UWidget* K2Node_Select_Default_4, bool CallFunc_BooleanAND_ReturnValue_2, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_6, bool CallFunc_BooleanAND_ReturnValue_3, ESlateVisibility K2Node_Select_Default_7, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_8, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_9, FLinearColor CallFunc_MenuColors_OutputColor_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_10, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_11, FLinearColor CallFunc_MenuColors_OutputColor_2, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_12, bool CallFunc_IsValid_ReturnValue_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_13, bool Temp_bool_Variable_12, ESlateVisibility K2Node_Select_Default_14, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_15, FLinearColor CallFunc_MenuColors_OutputColor_3);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_BaseUpgradeIcon(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
};

#endif
