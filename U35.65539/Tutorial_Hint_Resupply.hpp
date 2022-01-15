#ifndef UE4SS_SDK_Tutorial_Hint_Resupply_HPP
#define UE4SS_SDK_Tutorial_Hint_Resupply_HPP

class UTutorial_Hint_Resupply_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UResourceData* ResourceType;
    UCappedResource* Resource;
    float MinimumAmount;
    float DelayBeforeActive;
    bool HasMinedNitraSinceLastTutorial;
    bool IsTutorialActive;

    void ReceiveOnInitialized();
    void ReceiveOnHidden();
    void ResourceAdded(UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_Tutorial_Hint_Resupply(int32 EntryPoint, ResourceAddedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UInventoryList* CallFunc_GetInventoryList_ReturnValue, float CallFunc_GetSupplyAmmoStatus_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, AItem* CallFunc_GetItem_ReturnValue, URessuplyPodItem* K2Node_DynamicCast_AsRessuply_Pod_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetResourceCost_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, UCappedResource* K2Node_CustomEvent_Resource, float K2Node_CustomEvent_Amount, UCappedResource* CallFunc_GetResource_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
