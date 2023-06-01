#ifndef UE4SS_SDK_ENE_Spider_Stalker_HPP
#define UE4SS_SDK_ENE_Spider_Stalker_HPP

class AENE_Spider_Stalker_C : public AENE_Spider_Stalker_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* MeleeAttack;

    void BndEvt__ENE_Spider_Stalker_MeleeAttack_K2Node_ComponentBoundEvent_0_MeleeAttackDelegate__DelegateSignature();
    void ExecuteUbergraph_ENE_Spider_Stalker(int32 EntryPoint);
};

#endif
