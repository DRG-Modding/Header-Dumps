#ifndef UE4SS_SDK_ENE_Spider_Boss_TwinB_HPP
#define UE4SS_SDK_ENE_Spider_Boss_TwinB_HPP

class AENE_Spider_Boss_TwinB_C : public AENE_Spider_Boss_TwinBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAttackCooldownComponent* AttackCooldown;
    class UMeleeAttackComponent* BiteAttack;
    class UEnemyBufferComponent* EnemyBuffer;
    class UMeleeAttackComponent* CarveAttack;
    class UProjectileAttackComponent* ThreeWayAttack;
    class UBP_ConeAttackBase_C* ConeAttack;
    class UBP_BurrowAttackComponent_C* BurrowAttack;
    class UCapsuleComponent* SpecialAttackCollider;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnDeathBase();
    void OnMessageAI(FName TriggerName);
    void ApplyDR();
    void RemoveDR();
    void Grieve(FVector GreeveLocation);
    void ExecuteUbergraph_ENE_Spider_Boss_TwinB(int32 EntryPoint);
};

#endif
