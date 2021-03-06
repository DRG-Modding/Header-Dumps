#ifndef UE4SS_SDK_Cheat_MiscUpgradesItem_HPP
#define UE4SS_SDK_Cheat_MiscUpgradesItem_HPP

class UCheat_MiscUpgradesItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ItemName;
    class UComboBoxString* ItemSelect;
    class UScrollBox* SB_MiscUpgrades;
    EItemCategory ItemCategory;

    void Initiate widget(EItemCategory First Upgrade Item);
    void BndEvt__ItemSelect_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Initialize Current Item();
    void ExecuteUbergraph_Cheat_MiscUpgradesItem(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, EItemCategory K2Node_CustomEvent_First_Upgrade_Item, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue, FString K2Node_ComponentBoundEvent_SelectedItem, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, TArray<class TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue, TSubclassOf<class AActor> CallFunc_Array_Get_Item, TArray<class TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue_1, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class AActor> CallFunc_Array_Get_Item_1, FString CallFunc_GetClassDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetClassDisplayName_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue, FString CallFunc_GetClassDisplayName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_FindOptionIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheat_PerkListTier_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue_1, const TArray<FUpgradeTier>& CallFunc_GetItemUpgradeTiers_ReturnValue, FString CallFunc_GetClassDisplayName_ReturnValue_3, FUpgradeTier CallFunc_Array_Get_Item_2, FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
};

#endif
