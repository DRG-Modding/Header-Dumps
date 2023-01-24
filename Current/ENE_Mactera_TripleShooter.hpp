#ifndef UE4SS_SDK_ENE_Mactera_TripleShooter_HPP
#define UE4SS_SDK_ENE_Mactera_TripleShooter_HPP

class AENE_Mactera_TripleShooter_C : public AENE_Mactera_Shooter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileAttackComponent* ProjectileAttack;

    void MakeElite();
    void ExecuteUbergraph_ENE_Mactera_TripleShooter(int32 EntryPoint);
};

#endif
