#ifndef UE4SS_SDK_BP_PhaseBomb_HPP
#define UE4SS_SDK_BP_PhaseBomb_HPP

class ABP_PhaseBomb_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* TMP_Caretaker_Phasebomb_TeleportEnd;
    UParticleSystemComponent* P_PhaseBomb_SpawnAtLocation;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* Mesh_Range;
    USkeletalMeshComponent* SK_Phase_Bomb;
    UAudioComponent* BuildupSound;
    UDamageComponent* Damage;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_SpinRate_1825F49740C5EB02FEA5878F2184A8B0;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1825F49740C5EB02FEA5878F2184A8B0;
    UTimelineComponent* Timeline_0;
    float ExplosionDelay;
    float SpinDelay;
    FBP_PhaseBomb_CEvent_StartSpin Event_StartSpin;
    void Event_StartSpin();
    float RiseDelay;
    FBP_PhaseBomb_CEvent_StartRise Event_StartRise;
    void Event_StartRise();
    UNiagaraComponent* BuildUpSystem;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PhaseBomb(int32 EntryPoint, FVector CallFunc_GetSocketLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, FVector CallFunc_GetSocketLocation_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue);
    void Event_StartRise__DelegateSignature();
    void Event_StartSpin__DelegateSignature();
}

#endif
