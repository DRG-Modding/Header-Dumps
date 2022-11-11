#ifndef UE4SS_SDK_ENE_Spider_Grunt_Rock_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Rock_HPP

class AENE_Spider_Grunt_Rock_C : public AENE_Spider_Grunt_Normal_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool GetIsTargetable();
    void Play Body Death Effects();
    void BndEvt__ENE_Spider_Grunt_Rock_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_Spider_Grunt_Rock(int32 EntryPoint);
};

#endif
