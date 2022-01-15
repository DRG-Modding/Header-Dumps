#ifndef UE4SS_SDK_ITM_Overclocks_Equip_Item_HPP
#define UE4SS_SDK_ITM_Overclocks_Equip_Item_HPP

class UITM_Overclocks_Equip_Item_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimHover;
    UButton* ClickButton;
    UImage* HoveringImg;
    USizeBox* ItemSizer;
    UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    UITM_ItemUnlockedIcon_C* Notification_NewOverclock;
    UImage* SelectionImg;
    int32 IconSize;
    FITM_Overclocks_Equip_Item_COnHovered OnHovered;
    void OnHovered(UITM_Overclocks_Equip_Item_C* Item);
    FITM_Overclocks_Equip_Item_COnUnhovered OnUnhovered;
    void OnUnhovered(UITM_Overclocks_Equip_Item_C* Item);
    FITM_Overclocks_Equip_Item_COnClicked OnClicked;
    void OnClicked(UITM_Overclocks_Equip_Item_C* Item);
    UItemUpgrade* Overclock;
    EItemUpgradeStatus State;

    UWidget* GetToolTipWidget(UBasic_ToolTip_C* ToolTip, bool CallFunc_IsValid_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void SetState(EItemUpgradeStatus InState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void GetOverClock(UItemUpgrade*& Overclock);
    void SetOverclock(UItemUpgrade* InOverclock, USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory);
    void SetIconSize(int32 NewSize, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_Overclocks_Equip_Item(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void OnClicked__DelegateSignature(UITM_Overclocks_Equip_Item_C* Item);
    void OnUnhovered__DelegateSignature(UITM_Overclocks_Equip_Item_C* Item);
    void OnHovered__DelegateSignature(UITM_Overclocks_Equip_Item_C* Item);
}

#endif
