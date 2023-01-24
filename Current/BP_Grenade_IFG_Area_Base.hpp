#ifndef UE4SS_SDK_BP_Grenade_IFG_Area_Base_HPP
#define UE4SS_SDK_BP_Grenade_IFG_Area_Base_HPP

class ABP_Grenade_IFG_Area_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UAudioComponent* audio;
    class UParticleSystemComponent* ColdCloud;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float LifeTime;
    float ParticleDeathDuration;
    bool Actice;
    class USoundBase* FieldStop_Cue;
    class USoundBase* Explosion_Cue;
    class USoundBase* EnterField_Cue;
    class USoundBase* LeaveField_Cue;

    void OnRep_Actice();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(class AActor* TargetActor, bool entered);
    void ActiveWeakeningEffect();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Grenade_IFG_Area_Base(int32 EntryPoint);
};

#endif
