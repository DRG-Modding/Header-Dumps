#ifndef UE4SS_SDK_Bp_Azure_CallowSeeder_HPP
#define UE4SS_SDK_Bp_Azure_CallowSeeder_HPP

class ABp_Azure_CallowSeeder_C : ABP_Foliage_OpenOnProximity_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule1;
    UCapsuleComponent* Capsule;
    USimpleHealthComponent* SimpleHealth;
    USimpleObjectInfoComponent* SimpleObjectInfo;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_Bp_Azure_CallowSeeder(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
