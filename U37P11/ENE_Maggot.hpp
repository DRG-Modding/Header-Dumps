#ifndef UE4SS_SDK_ENE_Maggot_HPP
#define UE4SS_SDK_ENE_Maggot_HPP

class AENE_Maggot_C : public AMaggot
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UAudioComponent* audio;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UParticleSystem* DeathParticle;

    void OnRep_Moving();
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(EDeepMovementState State);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void Died();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Maggot(int32 EntryPoint);
};

#endif
