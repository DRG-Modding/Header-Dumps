#ifndef UE4SS_SDK_ENE_Spider_Boss_TwinA_HPP
#define UE4SS_SDK_ENE_Spider_Boss_TwinA_HPP

class AENE_Spider_Boss_TwinA_C : public AENE_Spider_Boss_TwinBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileAttackComponent* Projectile_MinesBarrage;
    class UMeleeAttackComponent* MeleeAttack;
    class UProjectileAttackComponent* Projectile_Mines;
    class UProjectileAttackComponent* Projectile_Fireball;

    void ReceiveBeginPlay();
    void BndEvt__Projectile_MinesBarrage_K2Node_ComponentBoundEvent_1_ProjectileAttackDelegate__DelegateSignature();
    void ExecuteUbergraph_ENE_Spider_Boss_TwinA(int32 EntryPoint);
};

#endif
