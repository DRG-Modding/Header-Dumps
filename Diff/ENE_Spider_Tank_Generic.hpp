#ifndef UE4SS_SDK_ENE_Spider_Tank_Generic_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Generic_HPP

class AENE_Spider_Tank_Generic_C : public AENE_Spider_Tank_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* BiteAttack;
    class UMeleeAttackComponent* StabAttack;

    void ReceiveBeginPlay();
    void MakeElite();
    void ExecuteUbergraph_ENE_Spider_Tank_Generic(int32 EntryPoint);
};

#endif
