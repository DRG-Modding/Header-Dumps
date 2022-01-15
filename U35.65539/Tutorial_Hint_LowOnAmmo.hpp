#ifndef UE4SS_SDK_Tutorial_Hint_LowOnAmmo_HPP
#define UE4SS_SDK_Tutorial_Hint_LowOnAmmo_HPP

class UTutorial_Hint_LowOnAmmo_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UResourceData* ResourceType;
    UCappedResource* Resource;
    float MinimumAmount;
    float DelayBeforeActive;
    bool HasMinedNitraSinceLastTutorial;
    bool IsTutorialActive;

    void ReceiveOnInitialized();
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void OnResourceMined(UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_Tutorial_Hint_LowOnAmmo(int32 EntryPoint, SupplyStatusChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, UInventoryList* CallFunc_GetInventoryList_ReturnValue, AItem* CallFunc_GetItem_ReturnValue, URessuplyPodItem* K2Node_DynamicCast_AsRessuply_Pod_Item, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_GetResourceCost_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UCappedResource* CallFunc_GetResource_ReturnValue, UInventoryList* CallFunc_GetInventoryList_ReturnValue_1, AItem* CallFunc_GetItem_ReturnValue_1, ResourceAddedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, URessuplyPodItem* K2Node_DynamicCast_AsRessuply_Pod_Item_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetResourceCost_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, UCappedResource* CallFunc_GetResource_ReturnValue_1, UGameData* CallFunc_GetFSDGameData_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, UInventoryList* CallFunc_GetInventoryList_ReturnValue_2, UCappedResource* CallFunc_GetResource_ReturnValue_2, AItem* CallFunc_GetItem_ReturnValue_2, URessuplyPodItem* K2Node_DynamicCast_AsRessuply_Pod_Item_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetResourceCost_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, float K2Node_CustomEvent_ammoStatus01, float K2Node_CustomEvent_healthStatus01, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, UGameData* CallFunc_GetFSDGameData_ReturnValue_3, UCappedResource* CallFunc_GetResource_ReturnValue_3, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif