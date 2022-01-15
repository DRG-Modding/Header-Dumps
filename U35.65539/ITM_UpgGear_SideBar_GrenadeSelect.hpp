#ifndef UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_HPP
#define UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_HPP

class UITM_UpgGear_SideBar_GrenadeSelect_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* ItemBox;
    UWidgetSwitcher* UpgradeBuySwitcher;
    TSubclassOf<APlayerCharacter> CharacterClass;
    TSubclassOf<AActor> itemClass;
    UUpgradableGearComponent* Upgradable;
    UBasic_Popup_YesNoPrompt_C* YesNoPrompt;
    EItemCategory Category;
    TArray<UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*> Grenades;
    FITM_UpgGear_SideBar_GrenadeSelect_COnItemSelected OnItemSelected;
    void OnItemSelected(TSubclassOf<AActor> itemClass, bool Equip, bool IsUnlocked);
    UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* PurchaseWidget;
    UPlayerCharacterID* PlayerId;
    TSubclassOf<AActor> ActiveClass;
    FITM_UpgGear_SideBar_GrenadeSelect_COnGrenadePurchased OnGrenadePurchased;
    void OnGrenadePurchased();

    void SetActiveGrenade(TSubclassOf<AActor> NewClass, bool InEquip, bool IsUnlocked, TSubclassOf<AActor>& itemClass, bool CallFunc_NotEqual_ClassClass_ReturnValue);
    void SetItem(UPlayerCharacterID* characterID, TSubclassOf<AGrenade> Grenade, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, EItemUpgradeStatus CallFunc_Refresh_OutState, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, EItemUpgradeStatus CallFunc_SetItem_OutState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* CallFunc_Create_ReturnValue, UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, TArray<TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue, TSubclassOf<AActor> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TSubclassOf<AGrenade> K2Node_ClassDynamicCast_AsGrenade, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1);
    void OnWidgetCreated(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    void SetYesNoPrompt(UBasic_Popup_YesNoPrompt_C* YesNoPrompt);
    void RefreshItems();
    void Reset Grenade Preview();
    void ItemEquipped_Event(TSubclassOf<AActor> itemClass);
    void OnYesNo(bool Yes);
    void OnItemTryPurchase(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
    void OnItemUnhovered(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    void OnItemHovered(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
    void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect(int32 EntryPoint, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* K2Node_CustomEvent_Widget, bool K2Node_CustomEvent_IsUnlocked, int32 Temp_int_Array_Index_Variable, TSubclassOf<AActor> CallFunc_SetActiveGrenade_ItemClass, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* K2Node_CustomEvent_Widget_2, UBasic_Popup_YesNoPrompt_C* K2Node_CustomEvent_YesNoPrompt, int32 Temp_int_Loop_Counter_Variable, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, EItemUpgradeStatus CallFunc_Refresh_OutState, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<AActor> CallFunc_GetEquippedItem_ReturnValue, ItemHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TSubclassOf<AActor> CallFunc_SetActiveGrenade_ItemClass_1, TSubclassOf<AActor> K2Node_CustomEvent_itemClass, TSubclassOf<AActor> CallFunc_SetActiveGrenade_ItemClass_2, ItemUnhovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ItemTryPurchase__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, OnYesNoClickedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_TryPurchaseItem_Success, FText CallFunc_GetGrenadeInfo_Name, FText CallFunc_GetGrenadeInfo_Description, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FCraftingCost>& CallFunc_GetCraftingCost_Cost, FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_Yes, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* K2Node_CustomEvent_GrenadeWidget, ItemEquipped__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* K2Node_CustomEvent_Widget_1);
    void OnGrenadePurchased__DelegateSignature();
    void OnItemSelected__DelegateSignature(TSubclassOf<AActor> itemClass, bool Equip, bool IsUnlocked);
}

#endif
