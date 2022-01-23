#ifndef UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_HPP
#define UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_HPP

class UITM_UpgGear_SideBar_GrenadeSelect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* ItemBox;
    class UWidgetSwitcher* UpgradeBuySwitcher;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    class UUpgradableGearComponent* Upgradable;
    class UBasic_Popup_YesNoPrompt_C* YesNoPrompt;
    EItemCategory Category;
    TArray<class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*> Grenades;
    FITM_UpgGear_SideBar_GrenadeSelect_COnItemSelected OnItemSelected;
    void OnItemSelected(TSubclassOf<class AActor> itemClass, bool Equip, bool IsUnlocked);
    class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* PurchaseWidget;
    class UPlayerCharacterID* PlayerId;
    TSubclassOf<class AActor> ActiveClass;
    FITM_UpgGear_SideBar_GrenadeSelect_COnGrenadePurchased OnGrenadePurchased;
    void OnGrenadePurchased();

    void SetActiveGrenade(TSubclassOf<class AActor> NewClass, bool InEquip, bool IsUnlocked, TSubclassOf<class AActor>& itemClass, bool CallFunc_NotEqual_ClassClass_ReturnValue);
    void SetItem(class UPlayerCharacterID* characterID, TSubclassOf<class AGrenade> Grenade, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, EItemUpgradeStatus CallFunc_Refresh_OutState, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, EItemUpgradeStatus CallFunc_SetItem_OutState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, class UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* CallFunc_Create_ReturnValue, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, TArray<class TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue, TSubclassOf<class AActor> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TSubclassOf<class AGrenade> K2Node_ClassDynamicCast_AsGrenade, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1);
    void OnWidgetCreated(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    void SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C* YesNoPrompt);
    void RefreshItems();
    void Reset Grenade Preview();
    void ItemEquipped_Event(TSubclassOf<class AActor> itemClass);
    void OnYesNo(bool Yes);
    void OnItemTryPurchase(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
    void OnItemUnhovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
    void OnItemHovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
    void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect(int32 EntryPoint, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* K2Node_CustomEvent_Widget, bool K2Node_CustomEvent_IsUnlocked, int32 Temp_int_Array_Index_Variable, TSubclassOf<class AActor> CallFunc_SetActiveGrenade_ItemClass, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* K2Node_CustomEvent_Widget_2, class UBasic_Popup_YesNoPrompt_C* K2Node_CustomEvent_YesNoPrompt, int32 Temp_int_Loop_Counter_Variable, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, EItemUpgradeStatus CallFunc_Refresh_OutState, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue, FExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelectK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, TSubclassOf<class AActor> CallFunc_SetActiveGrenade_ItemClass_1, TSubclassOf<class AActor> K2Node_CustomEvent_itemClass, TSubclassOf<class AActor> CallFunc_SetActiveGrenade_ItemClass_2, FExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelectK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelectK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelectK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_TryPurchaseItem_Success, FText CallFunc_GetGrenadeInfo_Name, FText CallFunc_GetGrenadeInfo_Description, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FCraftingCost>& CallFunc_GetCraftingCost_Cost, FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_Yes, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* K2Node_CustomEvent_GrenadeWidget, FExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelectK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* K2Node_CustomEvent_Widget_1);
    void OnGrenadePurchased__DelegateSignature();
    void OnItemSelected__DelegateSignature(TSubclassOf<class AActor> itemClass, bool Equip, bool IsUnlocked);
};

#endif
