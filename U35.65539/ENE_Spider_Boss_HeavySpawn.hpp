#ifndef UE4SS_SDK_ENE_Spider_Boss_HeavySpawn_HPP
#define UE4SS_SDK_ENE_Spider_Boss_HeavySpawn_HPP

class AENE_Spider_Boss_HeavySpawn_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMeleeAttackComponent* CarveAttack;
    UAlignEnemyComponent* AlignEnemy;
    UCapsuleComponent* Capsule;
    UMeleeAttackComponent* BiteAttack;
    UMeleeAttackComponent* StabAttack;

    void OnRagdoll();
    void OnDeathBase();
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void Play Frozen Death();
    void ExecuteUbergraph_ENE_Spider_Boss_HeavySpawn(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, AActor* K2Node_Event_source, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_SentinelGoo_Puddle_C* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
