#ifndef UE4SS_SDK_BP_Meet_Attack_HPP
#define UE4SS_SDK_BP_Meet_Attack_HPP

class UBP_Meet_Attack_C : public UAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float BurrowDuration;

    void ReceiveAbortAttack();
    void StartMeeting();
    void OnUnburrowed(bool IsEmerging);
    void OnBurrowedDone(bool IsEmerging);
    void ReceiveAttackTarget(class AActor* Target);
    void ExecuteUbergraph_BP_Meet_Attack(int32 EntryPoint, FExecuteUbergraph_BP_Meet_AttackK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base_1, bool K2Node_DynamicCast_bSuccess_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_CustomEvent_IsEmerging_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base_2, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class AENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, FExecuteUbergraph_BP_Meet_AttackK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_IsEmerging, class AActor* K2Node_Event_target, FName CallFunc_MakeLiteralName_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue);
};

#endif
