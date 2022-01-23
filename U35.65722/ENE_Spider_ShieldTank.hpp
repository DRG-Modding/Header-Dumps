#ifndef UE4SS_SDK_ENE_Spider_ShieldTank_HPP
#define UE4SS_SDK_ENE_Spider_ShieldTank_HPP

class AENE_Spider_ShieldTank_C : public AENE_Spider_Tank_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* CarveAttack;
    class UMeleeAttackComponent* GroundSlam;
    class UMeleeAttackComponent* MeleeAttack;
    class UParticleSystemComponent* TremorParticles;
    class UTremorAttackComponent* TremorAttack;
    class UBoxComponent* Box;
    class UAlignEnemyComponent* AlignEnemy;

    void UserConstructionScript();
    void BndEvt__GroundSlamDamage_K2Node_ComponentBoundEvent_0_OnEnemyDamagedDelegate__DelegateSignature(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysicalMaterial);
    void All_PlayImpactSound(class AActor* Actor);
    void ExecuteUbergraph_ENE_Spider_ShieldTank(int32 EntryPoint, class AActor* K2Node_CustomEvent_actor, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_health, float K2Node_ComponentBoundEvent_Amount, class UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, class AActor* CallFunc_GetOwner_ReturnValue);
};

#endif
