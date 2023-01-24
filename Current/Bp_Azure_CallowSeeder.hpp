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
    void ExecuteUbergraph_Bp_Azure_CallowSeeder(int32 EntryPoint);
};

#endif
