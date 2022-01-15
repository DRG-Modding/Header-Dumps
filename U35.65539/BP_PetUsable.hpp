#ifndef UE4SS_SDK_BP_PetUsable_HPP
#define UE4SS_SDK_BP_PetUsable_HPP

class UBP_PetUsable_C : UBPInstantUsable
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool BPCanUse(UPlayerCharacter* User, USceneComponent* UseCollider);
    void ReceiveBeginPlay();
    void OnUsedBy_Event_0(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_PetUsable(int32 EntryPoint, UsedBySignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPlayerCharacter* K2Node_CustomEvent_User, EInputKeys K2Node_CustomEvent_key, AActor* CallFunc_GetOwner_ReturnValue, USpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy, bool K2Node_DynamicCast_bSuccess, UAIController* CallFunc_GetAIController_ReturnValue, UBehaviorTreeComponent* K2Node_DynamicCast_AsBehavior_Tree_Component, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
