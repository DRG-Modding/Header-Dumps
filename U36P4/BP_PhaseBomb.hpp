#ifndef UE4SS_SDK_BP_PhaseBomb_HPP
#define UE4SS_SDK_BP_PhaseBomb_HPP

class ABP_PhaseBomb_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* TMP_Caretaker_Phasebomb_TeleportEnd;
    class UParticleSystemComponent* P_PhaseBomb_SpawnAtLocation;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh_Range;
    class USkeletalMeshComponent* SK_Phase_Bomb;
    class UAudioComponent* BuildupSound;
    class UDamageComponent* Damage;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_SpinRate_1825F49740C5EB02FEA5878F2184A8B0;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1825F49740C5EB02FEA5878F2184A8B0;
    class UTimelineComponent* Timeline_0;
    float ExplosionDelay;
    float SpinDelay;
    FBP_PhaseBomb_CEvent_StartSpin Event_StartSpin;
    void Event_StartSpin();
    float RiseDelay;
    FBP_PhaseBomb_CEvent_StartRise Event_StartRise;
    void Event_StartRise();
    class UNiagaraComponent* BuildUpSystem;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PhaseBomb(int32 EntryPoint);
    void Event_StartRise__DelegateSignature();
    void Event_StartSpin__DelegateSignature();
};

#endif
