#ifndef UE4SS_SDK_Cheat_PerkListTier_HPP
#define UE4SS_SDK_Cheat_PerkListTier_HPP

class UCheat_PerkListTier_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TierText;
    UVerticalBox* VerticalBox_113;
    FUpgradeTier myUpgradeTier;
    EItemCategory myCategory;
    FCheat_PerkListTier_COnItemActivationStateChange OnItemActivationStateChange;
    void OnItemActivationStateChange(bool is Checked, UItemUpgrade* Upgrade item, EItemCategory Category);
    TArray<UCheat_PerkListItem_C*> my PerkList items;
    int32 my Tier index;

    void Initiate widget(EItemCategory input category, FUpgradeTier Upgrade struct, int32 Tier Index, TSubclassOf<AActor> itemClass);
    void On state change(bool is Checked, UItemUpgrade* Item, EItemCategory Item Category);
    void Initiate Bosco-tier(FUpgradeTier Upgrade struct, int32 Tier Index, TSubclassOf<AActor> Item Class);
    void On bosco state change(bool is Checked, UItemUpgrade* Item, EItemCategory Item Category);
    void ExecuteUbergraph_Cheat_PerkListTier(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, OnCheckStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, EItemCategory K2Node_CustomEvent_input_category, FUpgradeTier K2Node_CustomEvent_Upgrade_struct_1, int32 K2Node_CustomEvent_Tier_Index_1, TSubclassOf<AActor> K2Node_CustomEvent_itemClass, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UCheat_PerkListItem_C* CallFunc_Create_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool K2Node_CustomEvent_Is_Checked_1, UItemUpgrade* K2Node_CustomEvent_Item_1, EItemCategory K2Node_CustomEvent_item_category_1, UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_AddUnique_ReturnValue, UItemUpgrade* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UCheat_PerkListItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, TSubclassOf<AActor> CallFunc_GetEquippedItem_ReturnValue, FUpgradeTier K2Node_CustomEvent_Upgrade_struct, int32 K2Node_CustomEvent_Tier_Index, TSubclassOf<AActor> K2Node_CustomEvent_Item_Class, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UCheat_PerkListItem_C* CallFunc_Create_ReturnValue_1, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_1, UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool K2Node_CustomEvent_Is_Checked, UItemUpgrade* K2Node_CustomEvent_Item, EItemCategory K2Node_CustomEvent_item_category, int32 CallFunc_Array_AddUnique_ReturnValue_1, UCheat_PerkListItem_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue_1, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue_1, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor_1, bool K2Node_ClassDynamicCast_bSuccess_1, UItemUpgrade* CallFunc_GetEquippedUpgradeAtTier_ReturnValue, UItemUpgrade* CallFunc_Array_Get_Item_3, UItemUpgrade* CallFunc_GetEquippedUpgradeAtTier_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, OnCheckStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
    void OnItemActivationStateChange__DelegateSignature(bool is Checked, UItemUpgrade* Upgrade item, EItemCategory Category);
}

#endif
