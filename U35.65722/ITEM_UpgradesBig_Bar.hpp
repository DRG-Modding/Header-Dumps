#ifndef UE4SS_SDK_ITEM_UpgradesBig_Bar_HPP
#define UE4SS_SDK_ITEM_UpgradesBig_Bar_HPP

class UITEM_UpgradesBig_Bar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITEM_UpgradesBig_SingleIcon_Connector_C* Connector1-2;
    class UITEM_UpgradesBig_SingleIcon_Connector_C* Connector2-3;
    class UITEM_UpgradesBig_SingleIcon_Connector_C* Connector3-4;
    class UITEM_UpgradesBig_SingleIcon_Connector_C* Connector4-5;
    class UITEM_UpgradesBig_SingleIcon_C* Upgrade1;
    class UITEM_UpgradesBig_SingleIcon_C* Upgrade2;
    class UITEM_UpgradesBig_SingleIcon_C* Upgrade3;
    class UITEM_UpgradesBig_SingleIcon_C* Upgrade4;
    class UITEM_UpgradesBig_SingleIcon_C* Upgrade5;
    TArray<class UITEM_UpgradesBig_SingleIcon_C*> upgrades;
    TArray<class UITEM_UpgradesBig_SingleIcon_Connector_C*> Connectors;
    FITEM_UpgradesBig_Bar_COnUpgradeSelected OnUpgradeSelected;
    void OnUpgradeSelected(class UItemUpgrade* Upgrade);
    FITEM_UpgradesBig_Bar_COnUpgradeHover OnUpgradeHover;
    void OnUpgradeHover(class UItemUpgrade* Upgrade);
    TSubclassOf<class AActor> Item;

    void GetFSDPlayerState(class AFSDPlayerState*& AsFSDPlayer State, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess);
    void ShowUpgradeBar(TSubclassOf<class AActor> Item, bool InBranch, int32 upgradeIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Variable, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, FUpgradeTier CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UItemUpgrade* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UITEM_UpgradesBig_SingleIcon_Connector_C* CallFunc_Array_Get_Item_2, class UITEM_UpgradesBig_SingleIcon_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, ESlateVisibility K2Node_Select_Default, class UITEM_UpgradesBig_SingleIcon_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UITEM_UpgradesBig_SingleIcon_Connector_C* CallFunc_Array_Get_Item_5);
    void Construct();
    void OnUpgradeClicked(class UItemUpgrade* Upgrade);
    void OnHoverStart(class UItemUpgrade* Upgrade);
    void OnHoverEnd(class UItemUpgrade* Upgrade);
    void OnItemUpgraded();
    void OnCreditsChanged();
    void ExecuteUbergraph_ITEM_UpgradesBig_Bar(int32 EntryPoint, FExecuteUbergraph_ITEM_UpgradesBig_BarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITEM_UpgradesBig_BarK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, class UItemUpgrade* K2Node_CustomEvent_Upgrade_2, class UITEM_UpgradesBig_SingleIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UItemUpgrade* K2Node_CustomEvent_Upgrade_1, class UItemUpgrade* K2Node_CustomEvent_Upgrade, bool CallFunc_IsValidClass_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_AsFSDPlayer_State, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FExecuteUbergraph_ITEM_UpgradesBig_BarK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_ITEM_UpgradesBig_BarK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, TArray<class UITEM_UpgradesBig_SingleIcon_C*>& K2Node_MakeArray_Array, TArray<class UITEM_UpgradesBig_SingleIcon_Connector_C*>& K2Node_MakeArray_Array_1);
    void OnUpgradeHover__DelegateSignature(class UItemUpgrade* Upgrade);
    void OnUpgradeSelected__DelegateSignature(class UItemUpgrade* Upgrade);
};

#endif
