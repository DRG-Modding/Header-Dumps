#ifndef UE4SS_SDK_ENE_Spider_Tank_Normal_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Normal_HPP

class AENE_Spider_Tank_Normal_C : public AENE_Spider_Tank_Generic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* ConeCapsule;
    class UBP_ConeAttackBase_C* ConeAttack;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Spider_Tank_Normal(int32 EntryPoint);
};

#endif
