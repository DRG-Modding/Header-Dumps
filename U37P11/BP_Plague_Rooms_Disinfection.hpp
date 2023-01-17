#ifndef UE4SS_SDK_BP_Plague_Rooms_Disinfection_HPP
#define UE4SS_SDK_BP_Plague_Rooms_Disinfection_HPP

class ABP_Plague_Rooms_Disinfection_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UNiagaraComponent* NS_Disinfection_Bubbles1;
    class UNiagaraComponent* NS_Disinfection_Bubbles;
    class URectLightComponent* RectLight1;
    class URectLightComponent* RectLight;
    class UNiagaraComponent* NS_Disinfection_Smoke1;
    class UNiagaraComponent* NS_Disinfection_Smoke;
    class UAudioComponent* audio;
    class UCapsuleComponent* TriggerCapsule;
    class UStaticMeshComponent* SM_Plague_DisinfectionSprayer1;
    class UStaticMeshComponent* SM_Plague_DisinfectionSprayer;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__BP_SpaceRig_Cabin01_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Plague_Rooms_Disinfection(int32 EntryPoint);
};

#endif
