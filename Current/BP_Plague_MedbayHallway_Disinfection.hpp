#ifndef UE4SS_SDK_BP_Plague_MedbayHallway_Disinfection_HPP
#define UE4SS_SDK_BP_Plague_MedbayHallway_Disinfection_HPP

class ABP_Plague_MedbayHallway_Disinfection_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;
    class UCapsuleComponent* TriggerCapsule;
    class UNiagaraComponent* NS_Disinfection_Smoke_06;
    class UNiagaraComponent* NS_Disinfection_Smoke_05;
    class UNiagaraComponent* NS_Disinfection_Smoke_04;
    class UNiagaraComponent* NS_Disinfection_Smoke_03;
    class UNiagaraComponent* NS_Disinfection_Smoke_02;
    class UNiagaraComponent* NS_Disinfection_Smoke_01;
    class UStaticMeshComponent* Hole_06;
    class UStaticMeshComponent* Hole_05;
    class UStaticMeshComponent* Hole_04;
    class UStaticMeshComponent* Hole_03;
    class UStaticMeshComponent* Hole_02;
    class UStaticMeshComponent* Hole_01;
    class UStaticMeshComponent* SM_Lamp;
    class UPointLightComponent* Light_Lamp;
    class USceneComponent* DefaultSceneRoot;
    float Delay_Time;

    void BndEvt__BP_SpaceRig_Cabin01_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Plague_MedbayHallway_Disinfection(int32 EntryPoint);
};

#endif
