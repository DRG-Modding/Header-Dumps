#ifndef UE4SS_SDK_ITM_UpgGear_UpgIconSingle_HPP
#define UE4SS_SDK_ITM_UpgGear_UpgIconSingle_HPP

class UITM_UpgGear_UpgIconSingle_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* OnPurchased;
    UITM_BaseUpgradeIcon_C* UpgradeIcon;
    UItemUpgrade* Upgrade;
    EItemUpgradeStatus Status;
    TSubclassOf<AActor> itemClass;
    AFSDPlayerState* PlayerState;
    bool IsItemHovered;
    FITM_UpgGear_UpgIconSingle_COnUpgradeHovered OnUpgradeHovered;
    void OnUpgradeHovered(UITM_UpgGear_UpgIconSingle_C* Widget);
    FITM_UpgGear_UpgIconSingle_COnUpgradeUnhovered OnUpgradeUnhovered;
    void OnUpgradeUnhovered(UITM_UpgGear_UpgIconSingle_C* Widget);
    FITM_UpgGear_UpgIconSingle_COnUpgradeClicked OnUpgradeClicked;
    void OnUpgradeClicked(UITM_UpgGear_UpgIconSingle_C* Widget);
    bool OverrideStatus;
    bool ShowEquippedAsBorder;
    UPlayerCharacterID* CharacerID;
    UTOOLTIP_UpgradeIcon_C* IconToolTip;
    bool ShowStatusOnTooltip;
    bool TierLocked;

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventUFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_ToggleShowUpgradeExtraDetails_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue);
    UWidget* Get_UpgradeIcon_ToolTip(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UTOOLTIP_UpgradeIcon_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventUFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_ToggleShowUpgradeExtraDetails_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void ToggleStatPreview(bool Preview, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1);
    void GetTierLock(UFSDPlayerState* InPlayerState, FUpgradeTier InTierUpgrades, int32& LockLevel, UTexture2D*& LockIcon, uint8& LockBackgroundTint, bool PlayerRankLock, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, uint8 K2Node_Select_Default, UTexture2D* K2Node_Select_Default_1, int32 CallFunc_GetPlayerRank_ReturnValue, int32 K2Node_Select_Default_2, bool CallFunc_Less_IntInt_ReturnValue);
    void TryUnequipUpgrade(bool& success, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetUpgradeCategory(UItemUpgradeCategory*& Category, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    UTexture2D* GetUpgradeIcon(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void GetGoogleAnalytics(UItemUpgrade* Upgrade, FString AnalyticsString, FString CallFunc_GetSourceName_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue, FString CallFunc_GetGearSourceName_ReturnValue, int32 CallFunc_GetUpgradeTier_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, FString CallFunc_MakeLiteralString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6);
    bool IsInteractable();
    void GetTierStatus(FUpgradeTier InTier, int32 InTierIndex, UPlayerCharacterID* InCharacterID, TSubclassOf<AActor> InItem, UFSDPlayerState* InPlayer, EItemUpgradeStatus& DefaultStatus, bool Affordable, bool Temp_bool_Variable, EItemUpgradeStatus Temp_byte_Variable, EItemUpgradeStatus Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetCharacterLevel_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasCharacterRetired_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, EItemUpgradeStatus K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, UItemUpgrade* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void IsTierIsAffordable(FUpgradeTier& TierUpgrades, TSubclassOf<AActor> InItemClass, UFSDPlayerState* InPlayer, TSubclassOf<UPlayerCharacter> InCharacter, bool& Is Affordable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, UItemUpgrade* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void ShowTier(TSubclassOf<AActor> InItemClass, UPlayerCharacterID* InCharacterID, int32 InTierIndex, FUpgradeTier InTier, UFSDPlayerState* InPlayerState, bool InShowLockRequirement, bool ShowToolTip, int32 CallFunc_GetTierLock_LockLevel, UTexture2D* CallFunc_GetTierLock_LockIcon, uint8 CallFunc_GetTierLock_LockBackgroundTint, UTexture2D* CallFunc_GetUpgradeIcon_ReturnValue, EItemUpgradeStatus CallFunc_GetTierStatus_DefaultStatus, UItemUpgrade* CallFunc_GetEquippedUpgradeAtTier_ReturnValue);
    void GetPlayerState(UFSDPlayerState*& PlayerState);
    void GetItemClass(TSubclassOf<AActor>& itemClass);
    void GetItemUpgrade(UItemUpgrade*& Upgrade);
    void TryEquipUpgrade(bool& Equipped, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue, EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void TryPurchaseUpgrade(bool& Purchased, UFSDPlayerController* Controller, bool CallFunc_IsValid_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetUpgradeStatus(EItemUpgradeStatus& Status, bool Temp_bool_Variable, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, EItemUpgradeStatus K2Node_Select_Default);
    void Show(UItemUpgrade* InUpgrade, TSubclassOf<AActor> InItemClass, UPlayerCharacterID* PlayerCharacterID, UFSDPlayerState* InPlayerState, bool ShowEquipAsBorder, bool InTierLocked);
    void Refresh(EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, UTexture2D* CallFunc_GetUpgradeIcon_ReturnValue);
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
    void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
    void Refresh Tool Tip();
    void PlayPurchasedAnim();
    void ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UITM_BaseUpgradeIcon_C* K2Node_ComponentBoundEvent_Widget_2, UITM_BaseUpgradeIcon_C* K2Node_ComponentBoundEvent_Widget_1, UITM_BaseUpgradeIcon_C* K2Node_ComponentBoundEvent_Widget, EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, TArray<FCraftingCost>& CallFunc_GetUpgradeCost_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void OnUpgradeClicked__DelegateSignature(UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgradeUnhovered__DelegateSignature(UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgradeHovered__DelegateSignature(UITM_UpgGear_UpgIconSingle_C* Widget);
}

#endif
