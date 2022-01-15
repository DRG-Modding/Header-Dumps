#ifndef UE4SS_SDK_Bp_Azure_Nenup_HPP
#define UE4SS_SDK_Bp_Azure_Nenup_HPP

class ABp_Azure_Nenup_C : ABP_Foliage_OpenOnProximity_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystem;
    UPointLightComponent* PointLight;
    USimpleHealthComponent* SimpleHealth;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    float Timeline_0_NewTrack_0_CCE667474C695780AD163197E2E87F35;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CCE667474C695780AD163197E2E87F35;
    UTimelineComponent* Timeline_0;
    int32 LightIntensity;
    int32 LightAttenuation;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void PlayCloseSequence();
    void ExecuteUbergraph_Bp_Azure_Nenup(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue);
}

#endif
