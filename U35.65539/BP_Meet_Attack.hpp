#ifndef UE4SS_SDK_BP_Meet_Attack_HPP
#define UE4SS_SDK_BP_Meet_Attack_HPP

class UBP_Meet_Attack_C : UAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float BurrowDuration;

    void ReceiveAbortAttack();
    void StartMeeting();
    void OnUnburrowed(bool IsEmerging);
    void OnBurrowedDone(bool IsEmerging);
    void ReceiveAttackTarget(AActor* Target);
    void ExecuteUbergraph_BP_Meet_Attack(int32 EntryPoint, OnBurrowComplete__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AActor* CallFunc_GetOwner_ReturnValue, UENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetOwner_ReturnValue_1, UENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base_1, bool K2Node_DynamicCast_bSuccess_1, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_CustomEvent_IsEmerging_1, AActor* CallFunc_GetOwner_ReturnValue_2, UENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base_2, bool K2Node_DynamicCast_bSuccess_2, AActor* CallFunc_GetOwner_ReturnValue_3, UENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, OnBurrowComplete__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_IsEmerging, AActor* K2Node_Event_target, FName CallFunc_MakeLiteralName_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue);
}

#endif
