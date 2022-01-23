#ifndef UE4SS_SDK_Bp_Azure_CallowSeeder_HPP
#define UE4SS_SDK_Bp_Azure_CallowSeeder_HPP

class ABp_Azure_CallowSeeder_C : public ABP_Foliage_OpenOnProximity_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule1;
    class UCapsuleComponent* Capsule;
    class USimpleHealthComponent* SimpleHealth;
    class USimpleObjectInfoComponent* SimpleObjectInfo;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_Bp_Azure_CallowSeeder(int32 EntryPoint, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

#endif
