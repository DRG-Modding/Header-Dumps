#ifndef UE4SS_SDK_BP_Caretaker_AoE_Attack_HPP
#define UE4SS_SDK_BP_Caretaker_AoE_Attack_HPP

class UBP_Caretaker_AoE_Attack_C : public UDamageAttackComponent
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
    FBP_Caretaker_AoE_Attack_COnTentaclePause OnTentaclePause;
    void OnTentaclePause(float Duration);

    void SpawnBarriers(int32 Amount, float AngleOffset);
    void OnRep_ChargeCount();
    void EnableAttack();
    void TickTimer();
    void StopAttack();
    void ReceiveAttackTarget(class AActor* Target);
    void Cheat_TestAttack();
    void ExecuteUbergraph_BP_Caretaker_AoE_Attack(int32 EntryPoint);
    void OnTentaclePause__DelegateSignature(float Duration);
    void OnChargeCountChanged__DelegateSignature(int32 ChargeCount);
};

#endif
