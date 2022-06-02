#ifndef UE4SS_SDK_BP_FacilityElectricAttack_HPP
#define UE4SS_SDK_BP_FacilityElectricAttack_HPP

class UBP_FacilityElectricAttack_C : public UAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystem* ParticleSystem;
    class UParticleSystemComponent* ParticleInstance;
    class UDamageComponent* ParentDamage;
    float Delay;
    TArray<int32> Feedbackbar;
    float Progress;
    int32 Stage;
    TArray<FName> Ring_A_Sockets;
    TArray<FName> Ring_B_Sockets;
    TArray<FName> Ring_C_Sockets;
    TArray<FName> Ring_D_Sockets;
    TArray<class ABP_Electrical_Antenna_C*> Antennaes;

    void OnRep_Stage();
    void SetupDamage(class UDamageComponent* Damage, TArray<int32>& Feedbackbar);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveAttackTarget(class AActor* Target);
    void AttackEffets();
    void ReceiveAbortAttack();
    void ExecuteUbergraph_BP_FacilityElectricAttack(int32 EntryPoint);
};

#endif
