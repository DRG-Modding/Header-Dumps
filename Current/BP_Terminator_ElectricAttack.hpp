#ifndef UE4SS_SDK_BP_Terminator_ElectricAttack_HPP
#define UE4SS_SDK_BP_Terminator_ElectricAttack_HPP

class UBP_Terminator_ElectricAttack_C : public UAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystem* ParticleSystem;
    class UParticleSystemComponent* ParticleInstance;
    class UDamageComponent* ParentDamage;
    float Delay;
    float CoolDown;
    class UAudioComponent* ChargeupSound;
    FTimerHandle Handle_ChargeDelay;

    void OnRep_Stage();
    void SetupDamage(class UDamageComponent* Damage);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveAttackTarget(class AActor* Target);
    void AttackEffets();
    void ReceiveAbortAttack();
    void ReceiveBeginPlay();
    void ParentDied(class UHealthComponentBase* HealthComponent);
    void DoAttack();
    void ExecuteUbergraph_BP_Terminator_ElectricAttack(int32 EntryPoint);
};

#endif
