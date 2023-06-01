#ifndef UE4SS_SDK_ENE_Bomber_HPP
#define UE4SS_SDK_ENE_Bomber_HPP

class AENE_Bomber_C : public ABomber
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDashPoints* DashPoints;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UParticleSystemComponent* ParticleSystem;
    int32 Dashes;
    TEnumAsByte<MacteraDeathTypes::Type> DeathType;

    void OnRep_DeathType();
    void InitCharge();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void OnStartDeathPanic();
    void OnFrozen(class AActor* Source);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__ENE_Bomber_HealthComponent_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void BndEvt__ENE_Bomber_HealthComponent_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void ExecuteUbergraph_ENE_Bomber(int32 EntryPoint);
};

#endif
