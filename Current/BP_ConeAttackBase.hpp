#ifndef UE4SS_SDK_BP_ConeAttackBase_HPP
#define UE4SS_SDK_BP_ConeAttackBase_HPP

class UBP_ConeAttackBase_C : public USpecialAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPrimitiveComponent* ConeCollider;
    TSubclassOf<class UStatusEffect> StatusEffect;
    bool AttackIsActive;

    void ReceiveBeginPlay();
    void OnAttackActionNotify_Event(FName nameValue);
    void SetConeCollider(class UPrimitiveComponent* ConeCollider);
    void Cone_Begin_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Cone_End_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnFrozen(bool IsFrozen);
    void ReceiveAbortAttack();
    void ExecuteUbergraph_BP_ConeAttackBase(int32 EntryPoint);
};

#endif
