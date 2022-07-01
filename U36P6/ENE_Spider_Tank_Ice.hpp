#ifndef UE4SS_SDK_ENE_Spider_Tank_Ice_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Ice_HPP

class AENE_Spider_Tank_Ice_C : public AENE_Spider_Tank_Generic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* ConeCapsule;
    class UBP_ConeAttackBase_C* ConeAttack;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Spider_Tank_Ice(int32 EntryPoint);
};

#endif
