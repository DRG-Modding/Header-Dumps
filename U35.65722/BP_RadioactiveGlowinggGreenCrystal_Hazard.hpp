#ifndef UE4SS_SDK_BP_RadioactiveGlowinggGreenCrystal_Hazard_HPP
#define UE4SS_SDK_BP_RadioactiveGlowinggGreenCrystal_Hazard_HPP

class ABP_RadioactiveGlowinggGreenCrystal_Hazard_C : public ABP_GlowingBlueCrystal_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UAudioComponent* Audio;
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
    void CanApplyEffect(TSubclassOf<class UStatusEffect> effect, bool& Result, class UPawnStatsComponent* StatComponent, float CallFunc_GetMaxResistance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDamageClass* CallFunc_GetDamageClass_ReturnValue, float CallFunc_GetStatValue_ReturnValue, class UPawnStatsComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void UserConstructionScript();
    void DamageGlowPulse__FinishedFunc();
    void DamageGlowPulse__UpdateFunc();
    void BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(class AActor* TargetActor, bool entered);
    void StartGlow();
    void StopGlow();
    void ExecuteUbergraph_BP_RadioactiveGlowinggGreenCrystal_Hazard(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class AActor* K2Node_ComponentBoundEvent_targetActor, bool K2Node_ComponentBoundEvent_entered, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
};

#endif
