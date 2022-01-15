#ifndef UE4SS_SDK_BP_Caretaker_AoE_Attack_HPP
#define UE4SS_SDK_BP_Caretaker_AoE_Attack_HPP

class UBP_Caretaker_AoE_Attack_C : UDamageAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle Timer_Charge;
    int32 ChargeCount;
    FBP_Caretaker_AoE_Attack_COnChargeCountChanged OnChargeCountChanged;
    void OnChargeCountChanged(int32 ChargeCount);
    float ChareUpStageTime;
    int32 AttackCountThisPhase;
    float ExtraDelayPerAttack;
    float MaxAllowedDelay;

    void SpawnBarriers(int32 Amount, float AngleOffset, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_2, int32 Temp_int_Variable, UCaretaker* K2Node_DynamicCast_AsCaretaker, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
    void OnRep_ChargeCount();
    void EnableAttack();
    void TickTimer();
    void StopAttack();
    void ReceiveAttackTarget(AActor* Target);
    void Cheat_TestAttack();
    void ExecuteUbergraph_BP_Caretaker_AoE_Attack(int32 EntryPoint, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 Temp_int_Variable, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, AActor* K2Node_Event_target, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, float CallFunc_GetBossDifficultyScaler_ReturnValue, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_2, UGM_Facility_C* K2Node_DynamicCast_AsGM_Facility, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue);
    void OnChargeCountChanged__DelegateSignature(int32 ChargeCount);
}

#endif
