#ifndef UE4SS_SDK_Tutorial_Hint_Resupply_HPP
#define UE4SS_SDK_Tutorial_Hint_Resupply_HPP

class UTutorial_Hint_Resupply_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UResourceData* ResourceType;
    class UCappedResource* Resource;
    float MinimumAmount;
    float DelayBeforeActive;
    bool HasMinedNitraSinceLastTutorial;
    bool IsTutorialActive;

    void ReceiveOnInitialized();
    void ReceiveOnHidden();
    void ResourceAdded(class UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_Tutorial_Hint_Resupply(int32 EntryPoint, FExecuteUbergraph_Tutorial_Hint_ResupplyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryList* CallFunc_GetInventoryList_ReturnValue, float CallFunc_GetSupplyAmmoStatus_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AItem* CallFunc_GetItem_ReturnValue, class ARessuplyPodItem* K2Node_DynamicCast_AsRessuply_Pod_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetResourceCost_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, class UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, class UCappedResource* CallFunc_GetResource_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
