#ifndef UE4SS_SDK_MENU_UpgradeScreen_HPP
#define UE4SS_SDK_MENU_UpgradeScreen_HPP

class UMENU_UpgradeScreen_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ItemDesc_Hover;
    class UWidgetAnimation* ItemDesc_Click;
    class UBasic_Popup_YesNoPrompt_C* Basic_Popup_YesNoPrompt;
    class UButton* BTN_Info;
    class UTextBlock* DATA_GearDesc;
    class UTextBlock* DATA_ItemCategory;
    class UBorder* Description_BG;
    class UHorizontalBox* GearTabsHolder;
    class UImage* Icon_Info_Base;
    class UImage* Icon_Info_Brackets;
    class UOverlay* InfoOverlay;
    class UVerticalBox* ItemDescHolder;
    class UTextBlock* ItemName;
    class UWidgetSwitcher* ItemTypeSwitcher;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class UWND_Skins_C* ITM_Skins_Color;
    class UWND_Skins_C* ITM_Skins_Mesh;
    class UITM_UnlockedCelebration_C* ITM_UnlockedCelebration;
    class UITM_UpgGear_SideBar_GrenadeSelect_C* ITM_UpgGear_GrenadeSelect;
    class UITM_UpgGear_SideBar_C* ITM_UpgGear_Upgrades;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UNamedSlot* PutStuffHere;
    class UBorder* StatBox_BG;
    class UVerticalBox* StatBox_Holder;
    class UBasic_Menu_ColorBar_C* StatsColorBar;
    FMENU_UpgradeScreen_COnCloseClicked OnCloseClicked;
    void OnCloseClicked();
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    class UUpgradableGearComponent* Upgradable;
    EItemCategory ItemCategory;
    FMENU_UpgradeScreen_COnItemChanged OnItemChanged;
    void OnItemChanged(TSubclassOf<class AActor> NewItemClass);
    bool ItemDescClicked;
    bool ShowTabsBar;
    FMENU_UpgradeScreen_COnItemPurchased OnItemPurchased;
    void OnItemPurchased();
    class UDialogDataAsset* ShoutUpgradePurchased;
    bool LoadoutSwitched;
    bool IsBoscoUpgScreen;

    void Toggle Auto GearStats Preview(bool IsOn, class UItemUpgradePreviewComponent* PreviewComponent, FToggle Auto GearStats PreviewK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void ChangeItemCustom(TSubclassOf<class AActor> InItemClass, bool EquipItem, bool IsUnlocked, bool ItemOwned, TSubclassOf<class AActor> Temp_class_Variable, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, TSubclassOf<class AGrenade> K2Node_ClassDynamicCast_AsGrenade, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, TSubclassOf<class AGrenade> K2Node_ClassDynamicCast_AsGrenade_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UItemID* CallFunc_GetItemID_ReturnValue, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, TSubclassOf<class AActor> K2Node_Select_Default_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UItemID* CallFunc_GetItemID_ReturnValue_1, bool CallFunc_IsItemOwned_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1);
    void GetItemTabIndex(TSubclassOf<class AActor> InItemClass, int32& OutIndex, int32 CurrentIndex, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 Temp_int_Variable, class UITM_UpgGear_GearTab_C* K2Node_DynamicCast_AsITM_Upg_Gear_Gear_Tab, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsItemClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SelectNextTab(int32 Direction, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetItemTabIndex_OutIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UITM_UpgGear_GearTab_C* K2Node_DynamicCast_AsITM_Upg_Gear_Gear_Tab, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class AActor> CallFunc_GetItemClass_ItemClass);
    void GetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C*& YesNoPrompt);
    void RefreshGearStats(FString Entry, int32 StatIndex, FGearStatEntry StatEntry, TArray<FGearStatEntry> Stats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UItemID* CallFunc_GetItemID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_UpgGear_GearStat_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, TArray<FGearStatEntry>& CallFunc_GetGearStats_ReturnValue, FGearStatEntry CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetTabItems(TSubclassOf<class APlayerCharacter> InCharacterClass, EItemCategory InCategory, TArray<class TSubclassOf<AActor>>& Tab Items, TArray<class TSubclassOf<AActor>> VisibleItems, class AFSDPlayerState* PlayerState, TSubclassOf<class AActor> currentItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, TArray<class TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSubclassOf<class AActor> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void BuildGearTabs(TArray<class TSubclassOf<AActor>> TabItems, TSubclassOf<class AActor> EquippedItem, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<class AGrenade> K2Node_ClassDynamicCast_AsGrenade, bool K2Node_ClassDynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, TSubclassOf<class AActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, class UItemID* CallFunc_GetItemID_ReturnValue_1, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, bool CallFunc_IsItemOwned_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class TSubclassOf<AActor>>& CallFunc_GetTabItems_Tab_Items, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_UpgGear_GearTab_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
    void ChangeItem(TSubclassOf<class AActor> InItemClass, bool Unlocked, bool Equip, bool ItemOwned, bool CallFunc_IsValidClass_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue);
    void RefreshItemDetails(bool CallFunc_IsValidClass_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, ESlateVisibility Temp_byte_Variable, class UItemID* CallFunc_GetItemID_ReturnValue, FText CallFunc_GetGearCategory_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility Temp_byte_Variable_1, FText CallFunc_GetGearDescription_ReturnValue, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, FText CallFunc_GetGearName_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
    void Show(TSubclassOf<class APlayerCharacter> InCharacterClass, TSubclassOf<class AActor> InItemClass, EItemCategory InItemCategory, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
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
    void OnGrenadeSelected(TSubclassOf<class AActor> itemClass, bool Equip, bool IsUnlocked);
    void OnPreviewUpgradeChangedEvent(class UItemUpgrade* PreviewUpgrade);
    void OnItemRewarded(FMasteryItem Reward);
    void OnFinished(TArray<class UUnlockReward*>& Rewards);
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature();
    void BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature();
    void BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature();
    void BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature();
    void ExecuteUbergraph_MENU_UpgradeScreen(int32 EntryPoint, FExecuteUbergraph_MENU_UpgradeScreenK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_MENU_UpgradeScreenK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_MENU_UpgradeScreenK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, int32 Temp_int_Array_Index_Variable, TSubclassOf<class AActor> K2Node_CustomEvent_itemClass, bool K2Node_CustomEvent_Equip, bool K2Node_CustomEvent_IsUnlocked, class UInventoryComponent* CallFunc_GetComponentFromClass_ReturnValue, class UItemUpgrade* K2Node_CustomEvent_PreviewUpgrade, FMasteryItem K2Node_CustomEvent_Reward, TArray<class UUnlockReward*>& K2Node_CustomEvent_Rewards, class UUnlockReward* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetWindowVisible_VisibilityChanged, bool CallFunc_SetWindowVisible_NewVisibility, bool CallFunc_SetWindowVisible_VisibilityChanged_1, bool CallFunc_SetWindowVisible_NewVisibility_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
    void OnItemPurchased__DelegateSignature();
    void OnItemChanged__DelegateSignature(TSubclassOf<class AActor> NewItemClass);
    void OnCloseClicked__DelegateSignature();
};

#endif
