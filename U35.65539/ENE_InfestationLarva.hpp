#ifndef UE4SS_SDK_ENE_InfestationLarva_HPP
#define UE4SS_SDK_ENE_InfestationLarva_HPP

class AENE_InfestationLarva_C : UEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMeleeAttackComponent* MeleeAttack;
    UEnemyComponent* enemy;
    UCapsuleComponent* Capsule;
    UOutlineComponent* outline;
    UStaticMeshComponent* DropShadow;
    UParticleSystemComponent* P_Larva_Move_Spray;
    UDamageComponent* Damage;

    void OnMessageAI(FName TriggerName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_ENE_InfestationLarva(int32 EntryPoint, FName K2Node_Event_triggerName, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
