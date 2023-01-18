#ifndef UE4SS_SDK_ENE_PlagueLarva_HPP
#define UE4SS_SDK_ENE_PlagueLarva_HPP

class AENE_PlagueLarva_C : public AEnemyDeepPathfinderCharacter
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
    void ExecuteUbergraph_ENE_PlagueLarva(int32 EntryPoint);
};

#endif
