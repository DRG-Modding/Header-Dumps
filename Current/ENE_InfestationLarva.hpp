#ifndef UE4SS_SDK_ENE_InfestationLarva_HPP
#define UE4SS_SDK_ENE_InfestationLarva_HPP

class AENE_InfestationLarva_C : public AEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* MeleeAttack;
    class UEnemyComponent* enemy;
    class UCapsuleComponent* Capsule;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* DropShadow;
    class UParticleSystemComponent* P_Larva_Move_Spray;

    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnMessageAI(FName TriggerName);
    void ExecuteUbergraph_ENE_InfestationLarva(int32 EntryPoint);
};

#endif
