#ifndef UE4SS_SDK_ENE_Spider_ShieldTank_HPP
#define UE4SS_SDK_ENE_Spider_ShieldTank_HPP

class AENE_Spider_ShieldTank_C : UENE_Spider_Tank_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMeleeAttackComponent* CarveAttack;
    UMeleeAttackComponent* GroundSlam;
    UMeleeAttackComponent* MeleeAttack;
    UParticleSystemComponent* TremorParticles;
    UTremorAttackComponent* TremorAttack;
    UBoxComponent* Box;
    UAlignEnemyComponent* AlignEnemy;

    void UserConstructionScript();
    void BndEvt__GroundSlamDamage_K2Node_ComponentBoundEvent_0_OnEnemyDamagedDelegate__DelegateSignature(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysicalMaterial);
    void All_PlayImpactSound(AActor* Actor);
    void ExecuteUbergraph_ENE_Spider_ShieldTank(int32 EntryPoint, AActor* K2Node_CustomEvent_actor, FVector CallFunc_K2_GetActorLocation_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_health, float K2Node_ComponentBoundEvent_Amount, UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, AActor* CallFunc_GetOwner_ReturnValue);
}

#endif
