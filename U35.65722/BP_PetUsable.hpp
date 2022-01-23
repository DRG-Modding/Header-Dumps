#ifndef UE4SS_SDK_BP_PetUsable_HPP
#define UE4SS_SDK_BP_PetUsable_HPP

class UBP_PetUsable_C : public UBPInstantUsable
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool BPCanUse(class APlayerCharacter* User, class USceneComponent* UseCollider);
    void ReceiveBeginPlay();
    void OnUsedBy_Event_0(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_PetUsable(int32 EntryPoint, FExecuteUbergraph_BP_PetUsableK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerCharacter* K2Node_CustomEvent_User, EInputKeys K2Node_CustomEvent_key, class AActor* CallFunc_GetOwner_ReturnValue, class ASpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy, bool K2Node_DynamicCast_bSuccess, class AAIController* CallFunc_GetAIController_ReturnValue, class UBehaviorTreeComponent* K2Node_DynamicCast_AsBehavior_Tree_Component, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
