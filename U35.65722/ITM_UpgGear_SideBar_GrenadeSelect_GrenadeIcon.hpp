#ifndef UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_HPP
#define UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_HPP

class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class UImage* BorderOuter;
    class UImage* BorderOuterBG;
    class UButton* ClickButton;
    class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C* GrenadeLock;
    class UImage* Icon;
    class UImage* Icon_BG;
    class UPlayerCharacterID* PlayerId;
    TSubclassOf<class AGrenade> itemClass;
    FITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_CItemEquipped ItemEquipped;
    void ItemEquipped(TSubclassOf<class AActor> itemClass);
    EItemUpgradeStatus PreviewItemStatus;
    bool Hovered;
    class UTOOLTIP_UpgradeIcon_C* IconToolTip;
    FITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_CItemHovered ItemHovered;
    void ItemHovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
    FITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_CItemUnhovered ItemUnhovered;
    void ItemUnhovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    FITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_CItemTryPurchase ItemTryPurchase;
    void ItemTryPurchase(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
    class UUpgradableGearComponent* UpgradableGear;

    class UWidget* GetUpgradeToolTip(bool CallFunc_IsValid_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UTOOLTIP_UpgradeIcon_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void SetIsHovered(bool InHovered, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void EquipItem(class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue);
    void TryPurchaseItem(bool& success, EItemUpgradeStatus CallFunc_Refresh_OutState, EItemUpgradeStatus CallFunc_GetCurrentState_Item_State, class UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_PurchaseItem_ReturnValue);
    void GetGrenadeInfo(FText& Name, FText& Description, bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetGearDescription_ReturnValue, FText CallFunc_GetGearName_ReturnValue);
    void GetCraftingCost(TArray<FCraftingCost>& Cost, TArray<FCraftingCost> EmptyCost, bool CallFunc_IsValid_ReturnValue, TArray<FCraftingCost>& CallFunc_GetCraftingCost_ReturnValue);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_ToggleShowUpgradeExtraDetails_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void UpdateToolTip(bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetGearDescription_ReturnValue, FText CallFunc_GetGearName_ReturnValue, TArray<FCraftingCost>& CallFunc_GetCraftingCost_ReturnValue, EItemUpgradeStatus CallFunc_GetCurrentState_Item_State);
    bool IsInteractable();
    void GetCurrentState(EItemUpgradeStatus& Item State, EItemUpgradeStatus Temp_byte_Variable, EItemUpgradeStatus Temp_byte_Variable_1, bool Temp_bool_Variable, class UItemID* CallFunc_GetItemID_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue_1, bool CallFunc_IsItemEquipped_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue_2, bool CallFunc_CanAffordItem_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue_3, bool CallFunc_IsItemOwned_ReturnValue, EItemUpgradeStatus K2Node_Select_Default);
    void SetState(EItemUpgradeStatus InItemStatus, int32 InRequiredCharacterLevel, EItemUpgradeStatus Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_3, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_4, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_5, EItemUpgradeStatus Temp_byte_Variable_6, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_7, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_8, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_9, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_10, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_11, EItemUpgradeStatus Temp_byte_Variable_12, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_13, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_14, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_15, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_16, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_17, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FLinearColor CallFunc_MenuColors_OutputColor_2);
    void Refresh(EItemUpgradeStatus& OutState, EItemUpgradeStatus State, EItemUpgradeStatus CallFunc_GetCurrentState_Item_State, class UItemID* CallFunc_GetItemID_ReturnValue, int32 CallFunc_GetCharacterLevelRequiredForItem_ReturnValue);
    void SetItem(TSubclassOf<class AGrenade> GrenadeClass, class UPlayerCharacterID* characterID, EItemUpgradeStatus& OutState, class UTexture2D* CallFunc_GetIconBG_ReturnValue, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, EItemUpgradeStatus CallFunc_Refresh_OutState);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, EItemUpgradeStatus CallFunc_GetCurrentState_Item_State, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, EItemUpgradeStatus CallFunc_GetCurrentState_Item_State_1, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void ItemTryPurchase__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
    void ItemUnhovered__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    void ItemHovered__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
    void ItemEquipped__DelegateSignature(TSubclassOf<class AActor> itemClass);
};

#endif
