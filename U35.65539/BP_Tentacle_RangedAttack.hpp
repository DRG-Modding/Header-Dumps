#ifndef UE4SS_SDK_BP_Tentacle_RangedAttack_HPP
#define UE4SS_SDK_BP_Tentacle_RangedAttack_HPP

class UBP_Tentacle_RangedAttack_C : UProjectileAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle LookAtHandle;

    void ReceiveAttackTarget(AActor* Target);
    void ReceiveCompleteAttack();
    void ReceiveAbortAttack();
    void Face();
    void ExecuteUbergraph_BP_Tentacle_RangedAttack(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AActor* K2Node_Event_target, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_TriggerMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, UENE_FacilityTentacle_C* K2Node_DynamicCast_AsENE_Facility_Tentacle, bool K2Node_DynamicCast_bSuccess, UFacilityTentacle* K2Node_DynamicCast_AsFacility_Tentacle, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue);
}

#endif
