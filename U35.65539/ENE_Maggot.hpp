#ifndef UE4SS_SDK_ENE_Maggot_HPP
#define UE4SS_SDK_ENE_Maggot_HPP

class AENE_Maggot_C : UMaggot
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UAudioComponent* Audio;
    UOutlineComponent* outline;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UParticleSystem* DeathParticle;

    void OnRep_Moving(bool Temp_bool_Variable, USoundBase* Temp_object_Variable, USoundBase* Temp_object_Variable_1, USoundBase* K2Node_Select_Default);
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(EDeepMovementState State);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void Died();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Maggot(int32 EntryPoint, USoundBase* Temp_object_Variable, USoundBase* Temp_object_Variable_1, USoundBase* Temp_object_Variable_2, USoundBase* Temp_object_Variable_3, USoundBase* Temp_object_Variable_4, USoundBase* Temp_object_Variable_5, EDeepMovementState Temp_byte_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, EDeepMovementState K2Node_ComponentBoundEvent_state, USoundBase* K2Node_Select_Default, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, AActor* K2Node_Event_source, UAnimationSharingManager* CallFunc_GetAnimationSharingManager_ReturnValue);
}

#endif
