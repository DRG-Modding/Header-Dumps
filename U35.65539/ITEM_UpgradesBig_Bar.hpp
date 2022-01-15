#ifndef UE4SS_SDK_ITEM_UpgradesBig_Bar_HPP
#define UE4SS_SDK_ITEM_UpgradesBig_Bar_HPP

class UITEM_UpgradesBig_Bar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITEM_UpgradesBig_SingleIcon_Connector_C* Connector1-2;
    UITEM_UpgradesBig_SingleIcon_Connector_C* Connector2-3;
    UITEM_UpgradesBig_SingleIcon_Connector_C* Connector3-4;
    UITEM_UpgradesBig_SingleIcon_Connector_C* Connector4-5;
    UITEM_UpgradesBig_SingleIcon_C* Upgrade1;
    UITEM_UpgradesBig_SingleIcon_C* Upgrade2;
    UITEM_UpgradesBig_SingleIcon_C* Upgrade3;
    UITEM_UpgradesBig_SingleIcon_C* Upgrade4;
    UITEM_UpgradesBig_SingleIcon_C* Upgrade5;
    TArray<UITEM_UpgradesBig_SingleIcon_C*> upgrades;
    TArray<UITEM_UpgradesBig_SingleIcon_Connector_C*> Connectors;
    FITEM_UpgradesBig_Bar_COnUpgradeSelected OnUpgradeSelected;
    void OnUpgradeSelected(UItemUpgrade* Upgrade);
    FITEM_UpgradesBig_Bar_COnUpgradeHover OnUpgradeHover;
    void OnUpgradeHover(UItemUpgrade* Upgrade);
    TSubclassOf<AActor> Item;

    void GetFSDPlayerState(UFSDPlayerState*& AsFSDPlayer State, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess);
    void ShowUpgradeBar(TSubclassOf<AActor> Item, bool InBranch, int32 upgradeIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Variable, UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, FUpgradeTier CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UItemUpgrade* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, UITEM_UpgradesBig_SingleIcon_Connector_C* CallFunc_Array_Get_Item_2, UITEM_UpgradesBig_SingleIcon_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, ESlateVisibility K2Node_Select_Default, UITEM_UpgradesBig_SingleIcon_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UITEM_UpgradesBig_SingleIcon_Connector_C* CallFunc_Array_Get_Item_5);
    void Construct();
    void OnUpgradeClicked(UItemUpgrade* Upgrade);
    void OnHoverStart(UItemUpgrade* Upgrade);
    void OnHoverEnd(UItemUpgrade* Upgrade);
    void OnItemUpgraded();
    void OnCreditsChanged();
    void ExecuteUbergraph_ITEM_UpgradesBig_Bar(int32 EntryPoint, OnHoverEnd__DelegateSignature K2Node_CreateDelegate_OutputDelegate, CreditsChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, UItemUpgrade* K2Node_CustomEvent_Upgrade_2, UITEM_UpgradesBig_SingleIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UItemUpgrade* K2Node_CustomEvent_Upgrade_1, UItemUpgrade* K2Node_CustomEvent_Upgrade, bool CallFunc_IsValidClass_ReturnValue, UFSDPlayerState* CallFunc_GetFSDPlayerState_AsFSDPlayer_State, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, OnHoverStart__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, TArray<UITEM_UpgradesBig_SingleIcon_C*>& K2Node_MakeArray_Array, TArray<UITEM_UpgradesBig_SingleIcon_Connector_C*>& K2Node_MakeArray_Array_1);
    void OnUpgradeHover__DelegateSignature(UItemUpgrade* Upgrade);
    void OnUpgradeSelected__DelegateSignature(UItemUpgrade* Upgrade);
}

#endif
