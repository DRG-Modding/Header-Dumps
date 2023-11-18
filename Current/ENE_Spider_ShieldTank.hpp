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
    float MovementSpeedPenaltyReduction;

    void UserConstructionScript();
    void All_PlayImpactSound(class AActor* Actor);
    void ReceiveBeginPlay();
    void TargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysicalMaterial);
    void ExecuteUbergraph_ENE_Spider_ShieldTank(int32 EntryPoint);
};

#endif
