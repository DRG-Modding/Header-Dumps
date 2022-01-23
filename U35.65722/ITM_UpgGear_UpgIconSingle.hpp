#ifndef UE4SS_SDK_ITM_UpgGear_UpgIconSingle_HPP
#define UE4SS_SDK_ITM_UpgGear_UpgIconSingle_HPP

class UITM_UpgGear_UpgIconSingle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnPurchased;
    class UITM_BaseUpgradeIcon_C* UpgradeIcon;
    class UItemUpgrade* Upgrade;
    EItemUpgradeStatus Status;
    TSubclassOf<class AActor> itemClass;
    class AFSDPlayerState* PlayerState;
    bool IsItemHovered;
    FITM_UpgGear_UpgIconSingle_COnUpgradeHovered OnUpgradeHovered;
    void OnUpgradeHovered(class UITM_UpgGear_UpgIconSingle_C* Widget);
    FITM_UpgGear_UpgIconSingle_COnUpgradeUnhovered OnUpgradeUnhovered;
    void OnUpgradeUnhovered(class UITM_UpgGear_UpgIconSingle_C* Widget);
    FITM_UpgGear_UpgIconSingle_COnUpgradeClicked OnUpgradeClicked;
    void OnUpgradeClicked(class UITM_UpgGear_UpgIconSingle_C* Widget);
    bool OverrideStatus;
    bool ShowEquippedAsBorder;
    class UPlayerCharacterID* CharacerID;
    class UTOOLTIP_UpgradeIcon_C* IconToolTip;
    bool ShowStatusOnTooltip;
    bool TierLocked;

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventclass UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_ToggleShowUpgradeExtraDetails_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue);
    class UWidget* Get_UpgradeIcon_ToolTip(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UTOOLTIP_UpgradeIcon_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventclass UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_ToggleShowUpgradeExtraDetails_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void ToggleStatPreview(bool Preview, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1);
    void GetTierLock(class AFSDPlayerState* InPlayerState, FUpgradeTier InTierUpgrades, int32& LockLevel, class UTexture2D*& LockIcon, TEnumAsByte<ENUM_MenuColors::Type>& LockBackgroundTint, bool PlayerRankLock, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, int32 CallFunc_GetPlayerRank_ReturnValue, int32 K2Node_Select_Default_2, bool CallFunc_Less_IntInt_ReturnValue);
    void TryUnequipUpgrade(bool& success, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetUpgradeCategory(class UItemUpgradeCategory*& Category, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    class UTexture2D* GetUpgradeIcon(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void GetGoogleAnalytics(class UItemUpgrade* Upgrade, FString AnalyticsString, FString CallFunc_GetSourceName_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, FString CallFunc_GetGearSourceName_ReturnValue, int32 CallFunc_GetUpgradeTier_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, FString CallFunc_MakeLiteralString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6);
    bool IsInteractable();
    void GetTierStatus(FUpgradeTier InTier, int32 InTierIndex, class UPlayerCharacterID* InCharacterID, TSubclassOf<class AActor> InItem, class AFSDPlayerState* InPlayer, EItemUpgradeStatus& DefaultStatus, bool Affordable, bool Temp_bool_Variable, EItemUpgradeStatus Temp_byte_Variable, EItemUpgradeStatus Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetCharacterLevel_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasCharacterRetired_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, EItemUpgradeStatus K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, class UItemUpgrade* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void IsTierIsAffordable(FUpgradeTier& TierUpgrades, TSubclassOf<class AActor> InItemClass, class AFSDPlayerState* InPlayer, TSubclassOf<class APlayerCharacter> InCharacter, bool& Is Affordable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UItemUpgrade* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void ShowTier(TSubclassOf<class AActor> InItemClass, class UPlayerCharacterID* InCharacterID, int32 InTierIndex, FUpgradeTier InTier, class AFSDPlayerState* InPlayerState, bool InShowLockRequirement, bool ShowToolTip, int32 CallFunc_GetTierLock_LockLevel, class UTexture2D* CallFunc_GetTierLock_LockIcon, TEnumAsByte<ENUM_MenuColors::Type> CallFunc_GetTierLock_LockBackgroundTint, class UTexture2D* CallFunc_GetUpgradeIcon_ReturnValue, EItemUpgradeStatus CallFunc_GetTierStatus_DefaultStatus, class UItemUpgrade* CallFunc_GetEquippedUpgradeAtTier_ReturnValue);
    void GetPlayerState(class AFSDPlayerState*& PlayerState);
    void GetItemClass(TSubclassOf<class AActor>& itemClass);
    void GetItemUpgrade(class UItemUpgrade*& Upgrade);
    void TryEquipUpgrade(bool& Equipped, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue, EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void TryPurchaseUpgrade(bool& Purchased, class AFSDPlayerController* Controller, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetUpgradeStatus(EItemUpgradeStatus& Status, bool Temp_bool_Variable, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, EItemUpgradeStatus K2Node_Select_Default);
    void Show(class UItemUpgrade* InUpgrade, TSubclassOf<class AActor> InItemClass, class UPlayerCharacterID* PlayerCharacterID, class AFSDPlayerState* InPlayerState, bool ShowEquipAsBorder, bool InTierLocked);
    void Refresh(EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, class UTexture2D* CallFunc_GetUpgradeIcon_ReturnValue);
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void Refresh Tool Tip();
    void PlayPurchasedAnim();
    void ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UITM_BaseUpgradeIcon_C* K2Node_ComponentBoundEvent_Widget_2, class UITM_BaseUpgradeIcon_C* K2Node_ComponentBoundEvent_Widget_1, class UITM_BaseUpgradeIcon_C* K2Node_ComponentBoundEvent_Widget, EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, TArray<FCraftingCost>& CallFunc_GetUpgradeCost_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void OnUpgradeClicked__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgradeUnhovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgradeHovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
};

#endif
