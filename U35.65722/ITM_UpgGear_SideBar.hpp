#ifndef UE4SS_SDK_ITM_UpgGear_SideBar_HPP
#define UE4SS_SDK_ITM_UpgGear_SideBar_HPP

class UITM_UpgGear_SideBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* BuyBox;
    class UITM_Overclocks_Equip_C* ITM_Loadout_Overclocks_Equip;
    class UITM_MasteryBar_C* ITM_MasteryBar_0;
    class UBasic_FlatButton_C* PurchaseButton;
    class UTextBlock* PurchaseDescription;
    class UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar;
    class UVerticalBox* UnlockBox;
    class UVerticalBox* UpgradeBox;
    class UWidgetSwitcher* UpgradeBuySwitcher;
    class UVerticalBox* UpgradeGearRows;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    class UUpgradableGearComponent* Upgradable;
    class UBasic_Popup_YesNoPrompt_C* YesNoPrompt;
    EItemCategory Category;
    FITM_UpgGear_SideBar_COnItemPurchased OnItemPurchased;
    void OnItemPurchased();
    class UDialogDataAsset* ShoutUpgradePurchased;

    void SetUpgradePurchasedShout(class UDialogDataAsset* ShoutUpgradePurchased, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UITM_UpgGear_TierRow_C* K2Node_DynamicCast_AsITM_Upg_Gear_Tier_Row, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void SetItem(TSubclassOf<class APlayerCharacter>& InCharacterClass, TSubclassOf<class AActor>& InItemClass, EItemCategory& InCategory, bool ItemUnlocked, bool ItemOwned, class AFSDPlayerState* PlayerState, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SetMasteryData_HasMasteryLevels, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, FText CallFunc_GetGearDescription_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue_1, bool CallFunc_IsItemUnlocked_ReturnValue_1, class UItemID* CallFunc_GetItemID_ReturnValue_2, bool CallFunc_IsItemOwned_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, TArray<FCraftingCost>& CallFunc_GetCraftingCost_ReturnValue, bool CallFunc_SetCraftingCost_OutCanAfford, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool CallFunc_BooleanOR_ReturnValue, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget* K2Node_Select_Default_1, class UITM_UpgGear_TierRow_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const TArray<FUpgradeTier>& CallFunc_GetItemUpgradeTiers_ReturnValue, FUpgradeTier CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C* Prompt);
    void BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
    void BuyConfirmation(bool Yes);
    void UpgradePurchased(class UITM_UpgGear_TierRow_C* Row);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_UpgGear_SideBar(int32 EntryPoint, class UBasic_Popup_YesNoPrompt_C* K2Node_CustomEvent_Prompt, class UBasic_FlatButton_C* K2Node_ComponentBoundEvent_Button, bool K2Node_CustomEvent_Yes, FText CallFunc_GetGearName_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_CanAffordItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_PurchaseItem_ReturnValue, int32 Temp_int_Variable, TArray<FCraftingCost>& CallFunc_GetCraftingCost_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UITM_UpgGear_TierRow_C* K2Node_CustomEvent_Row, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UITM_UpgGear_TierRow_C* K2Node_DynamicCast_AsITM_Upg_Gear_Tier_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FExecuteUbergraph_ITM_UpgGear_SideBarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue);
    void OnItemPurchased__DelegateSignature();
};

#endif
