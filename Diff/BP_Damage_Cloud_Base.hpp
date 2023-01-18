#ifndef UE4SS_SDK_BP_Damage_Cloud_Base_HPP
#define UE4SS_SDK_BP_Damage_Cloud_Base_HPP

class ABP_Damage_Cloud_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UParticleSystemComponent* AcidCloud;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float TriggerGrowth_Size_1DEB14DB4E8233F87D25DBAB1B0C1325;
    TEnumAsByte<ETimelineDirection::Type> TriggerGrowth__Direction_1DEB14DB4E8233F87D25DBAB1B0C1325;
    class UTimelineComponent* TriggerGrowth;
    float LifeTime;
    float ParticleDeactivationAdvance;
    float TriggerRadius;

    void UserConstructionScript();
    void TriggerGrowth__FinishedFunc();
    void TriggerGrowth__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Damage_Cloud_Base(int32 EntryPoint);
};

#endif
