#ifndef UE4SS_SDK_ENE_Maggot_HPP
#define UE4SS_SDK_ENE_Maggot_HPP

class AENE_Maggot_C : public AMaggot
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UAudioComponent* Audio;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UParticleSystem* DeathParticle;

    void OnRep_Moving(bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* K2Node_Select_Default);
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(EDeepMovementState State);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void Died();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Maggot(int32 EntryPoint, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, EDeepMovementState Temp_byte_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, EDeepMovementState K2Node_ComponentBoundEvent_state, class USoundBase* K2Node_Select_Default, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class AActor* K2Node_Event_source, class UAnimationSharingManager* CallFunc_GetAnimationSharingManager_ReturnValue);
};

#endif
