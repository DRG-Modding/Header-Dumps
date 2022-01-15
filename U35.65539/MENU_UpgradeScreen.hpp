#ifndef UE4SS_SDK_MENU_UpgradeScreen_HPP
#define UE4SS_SDK_MENU_UpgradeScreen_HPP

class UMENU_UpgradeScreen_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ItemDesc_Hover;
    UWidgetAnimation* ItemDesc_Click;
    UBasic_Popup_YesNoPrompt_C* Basic_Popup_YesNoPrompt;
    UButton* BTN_Info;
    UTextBlock* DATA_GearDesc;
    UTextBlock* DATA_ItemCategory;
    UBorder* Description_BG;
    UHorizontalBox* GearTabsHolder;
    UImage* Icon_Info_Base;
    UImage* Icon_Info_Brackets;
    UOverlay* InfoOverlay;
    UVerticalBox* ItemDescHolder;
    UTextBlock* ItemName;
    UWidgetSwitcher* ItemTypeSwitcher;
    UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    UWND_Skins_C* ITM_Skins_Color;
    UWND_Skins_C* ITM_Skins_Mesh;
    UITM_UnlockedCelebration_C* ITM_UnlockedCelebration;
    UITM_UpgGear_SideBar_GrenadeSelect_C* ITM_UpgGear_GrenadeSelect;
    UITM_UpgGear_SideBar_C* ITM_UpgGear_Upgrades;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    UNamedSlot* PutStuffHere;
    UBorder* StatBox_BG;
    UVerticalBox* StatBox_Holder;
    UBasic_Menu_ColorBar_C* StatsColorBar;
    FMENU_UpgradeScreen_COnCloseClicked OnCloseClicked;
    void OnCloseClicked();
    TSubclassOf<APlayerCharacter> CharacterClass;
    TSubclassOf<AActor> itemClass;
    UUpgradableGearComponent* Upgradable;
    EItemCategory ItemCategory;
    FMENU_UpgradeScreen_COnItemChanged OnItemChanged;
    void OnItemChanged(TSubclassOf<AActor> NewItemClass);
    bool ItemDescClicked;
    bool ShowTabsBar;
    FMENU_UpgradeScreen_COnItemPurchased OnItemPurchased;
    void OnItemPurchased();
    UDialogDataAsset* ShoutUpgradePurchased;
    bool LoadoutSwitched;
    bool IsBoscoUpgScreen;

    void Toggle Auto GearStats Preview(bool IsOn, UItemUpgradePreviewComponent* PreviewComponent, ItemUpgradeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void ChangeItemCustom(TSubclassOf<AActor> InItemClass, bool EquipItem, bool IsUnlocked, bool ItemOwned, TSubclassOf<AActor> Temp_class_Variable, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, TSubclassOf<AGrenade> K2Node_ClassDynamicCast_AsGrenade, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, TSubclassOf<AGrenade> K2Node_ClassDynamicCast_AsGrenade_1, bool K2Node_ClassDynamicCast_bSuccess_1, UItemID* CallFunc_GetItemID_ReturnValue, bool Temp_bool_Variable_1, UWidget* K2Node_Select_Default, TSubclassOf<AActor> K2Node_Select_Default_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UItemID* CallFunc_GetItemID_ReturnValue_1, bool CallFunc_IsItemOwned_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1);
    void GetItemTabIndex(TSubclassOf<AActor> InItemClass, int32& OutIndex, int32 CurrentIndex, UWidget* CallFunc_GetChildAt_ReturnValue, int32 Temp_int_Variable, UITM_UpgGear_GearTab_C* K2Node_DynamicCast_AsITM_Upg_Gear_Gear_Tab, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsItemClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SelectNextTab(int32 Direction, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetItemTabIndex_OutIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UITM_UpgGear_GearTab_C* K2Node_DynamicCast_AsITM_Upg_Gear_Gear_Tab, bool K2Node_DynamicCast_bSuccess, TSubclassOf<AActor> CallFunc_GetItemClass_ItemClass);
    void GetYesNoPrompt(UBasic_Popup_YesNoPrompt_C*& YesNoPrompt);
    void RefreshGearStats(FString Entry, int32 StatIndex, FGearStatEntry StatEntry, TArray<FGearStatEntry> Stats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, UItemID* CallFunc_GetItemID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_UpgGear_GearStat_C* CallFunc_Create_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, TArray<FGearStatEntry>& CallFunc_GetGearStats_ReturnValue, FGearStatEntry CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetTabItems(TSubclassOf<UPlayerCharacter> InCharacterClass, EItemCategory InCategory, TArray<TSubclassOf<AActor>>& Tab Items, TArray<TSubclassOf<AActor>> VisibleItems, UFSDPlayerState* PlayerState, TSubclassOf<AActor> currentItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, TArray<TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSubclassOf<AActor> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void BuildGearTabs(TArray<TSubclassOf<AActor>> TabItems, TSubclassOf<AActor> EquippedItem, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<AGrenade> K2Node_ClassDynamicCast_AsGrenade, bool K2Node_ClassDynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, TSubclassOf<AActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array, UItemID* CallFunc_GetItemID_ReturnValue_1, UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, bool CallFunc_IsItemOwned_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<TSubclassOf<AActor>>& CallFunc_GetTabItems_Tab_Items, bool CallFunc_EqualEqual_ClassClass_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<AActor> CallFunc_GetEquippedItem_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_UpgGear_GearTab_C* CallFunc_Create_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
    void ChangeItem(TSubclassOf<AActor> InItemClass, bool Unlocked, bool Equip, bool ItemOwned, bool CallFunc_IsValidClass_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue);
    void RefreshItemDetails(bool CallFunc_IsValidClass_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, ESlateVisibility Temp_byte_Variable, UItemID* CallFunc_GetItemID_ReturnValue, FText CallFunc_GetGearCategory_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility Temp_byte_Variable_1, FText CallFunc_GetGearDescription_ReturnValue, UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, FText CallFunc_GetGearName_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
    void Show(TSubclassOf<UPlayerCharacter> InCharacterClass, TSubclassOf<AActor> InItemClass, EItemCategory InItemCategory, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature();
    void ReceiveSelectNextCommand();
    void ReceiveSelectPreviousCommand();
    void Construct();
    void OnClosed();
    void OnShown();
    void BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ReceiveCloseCommand();
    void ReceiveOkCommand();
    void OnGrenadeSelected(TSubclassOf<AActor> itemClass, bool Equip, bool IsUnlocked);
    void OnPreviewUpgradeChangedEvent(UItemUpgrade* PreviewUpgrade);
    void OnItemRewarded(FMasteryItem Reward);
    void OnFinished(TArray<UUnlockReward*>& Rewards);
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature();
    void BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature();
    void BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature();
    void BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature();
    void ExecuteUbergraph_MENU_UpgradeScreen(int32 EntryPoint, OnItemSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnItemRewarded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, int32 Temp_int_Array_Index_Variable, TSubclassOf<AActor> K2Node_CustomEvent_itemClass, bool K2Node_CustomEvent_Equip, bool K2Node_CustomEvent_IsUnlocked, UInventoryComponent* CallFunc_GetComponentFromClass_ReturnValue, UItemUpgrade* K2Node_CustomEvent_PreviewUpgrade, FMasteryItem K2Node_CustomEvent_Reward, TArray<UUnlockReward*>& K2Node_CustomEvent_Rewards, UUnlockReward* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetWindowVisible_VisibilityChanged, bool CallFunc_SetWindowVisible_NewVisibility, bool CallFunc_SetWindowVisible_VisibilityChanged_1, bool CallFunc_SetWindowVisible_NewVisibility_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
    void OnItemPurchased__DelegateSignature();
    void OnItemChanged__DelegateSignature(TSubclassOf<AActor> NewItemClass);
    void OnCloseClicked__DelegateSignature();
}

#endif
