#ifndef UE4SS_SDK_BP_RadioactiveGlowinggGreenCrystal_Hazard_HPP
#define UE4SS_SDK_BP_RadioactiveGlowinggGreenCrystal_Hazard_HPP

class ABP_RadioactiveGlowinggGreenCrystal_Hazard_C : public ABP_GlowingBlueCrystal_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UAudioComponent* audio;
    class UParticleSystemComponent* Particles;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USphereComponent* Sphere;
    float DamageGlowPulse_LightIntensity_72DD5E2D4AA96604D90633953576BD0B;
    TEnumAsByte<ETimelineDirection::Type> DamageGlowPulse__Direction_72DD5E2D4AA96604D90633953576BD0B;
    class UTimelineComponent* DamageGlowPulse;
    bool DoPulse;
    float LightIntensityBase;
    float LightIntensityIncrease;
    int32 ActorCount;

    void OnRep_DoPulse();
    void CanApplyEffect(TSubclassOf<class UStatusEffect> Effect, bool& Result);
    void UserConstructionScript();
    void DamageGlowPulse__FinishedFunc();
    void DamageGlowPulse__UpdateFunc();
    void BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(class AActor* TargetActor, bool entered);
    void StartGlow();
    void StopGlow();
    void ExecuteUbergraph_BP_RadioactiveGlowinggGreenCrystal_Hazard(int32 EntryPoint);
};

#endif
