#ifndef UE4SS_SDK_ENE_Grabber_HPP
#define UE4SS_SDK_ENE_Grabber_HPP

class AENE_Grabber_C : public AFlyingLifter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    TEnumAsByte<MacteraDeathTypes::Type> DeathType;

    void OnRep_DeathType();
    void UserConstructionScript();
    void OnMessageAI(FName TriggerName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_3_GrabbedActorSig__DelegateSignature(class AActor* aGrabbedActor);
    void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_4_ReleasedActorSig__DelegateSignature(class AActor* aGrabbedActor, bool fullGrabElapsed);
    void OnFrozen(class AActor* Source);
    void MakeElite();
    void Death_Weakpoint();
    void Death_Corrosive();
    void Death_Normal();
    void BndEvt__ENE_Grabber_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void FadeMaterials();
    void ExecuteUbergraph_ENE_Grabber(int32 EntryPoint);
};

#endif
