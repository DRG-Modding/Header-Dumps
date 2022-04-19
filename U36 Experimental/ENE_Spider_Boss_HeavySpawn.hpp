#ifndef UE4SS_SDK_ENE_Spider_Boss_HeavySpawn_HPP
#define UE4SS_SDK_ENE_Spider_Boss_HeavySpawn_HPP

class AENE_Spider_Boss_HeavySpawn_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* CarveAttack;
    class UAlignEnemyComponent* AlignEnemy;
    class UCapsuleComponent* Capsule;
    class UMeleeAttackComponent* BiteAttack;
    class UMeleeAttackComponent* StabAttack;

    void OnRagdoll();
    void OnDeathBase();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void Play Frozen Death();
    void ExecuteUbergraph_ENE_Spider_Boss_HeavySpawn(int32 EntryPoint);
};

#endif
