#ifndef UE4SS_SDK_Bp_Azure_Nenup_HPP
#define UE4SS_SDK_Bp_Azure_Nenup_HPP

class ABp_Azure_Nenup_C : public ABP_Foliage_OpenOnProximity_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class UPointLightComponent* PointLight;
    class USimpleHealthComponent* SimpleHealth;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    float Timeline_0_NewTrack_0_CCE667474C695780AD163197E2E87F35;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CCE667474C695780AD163197E2E87F35;
    class UTimelineComponent* Timeline_0;
    int32 LightIntensity;
    int32 LightAttenuation;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void PlayCloseSequence();
    void ExecuteUbergraph_Bp_Azure_Nenup(int32 EntryPoint);
};

#endif
