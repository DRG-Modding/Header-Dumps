#ifndef UE4SS_SDK_BP_PlagueGroundSpike_HPP
#define UE4SS_SDK_BP_PlagueGroundSpike_HPP

class ABP_PlagueGroundSpike_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* TEMP_WalkingPlagueHeart_SpikeBurst_Cue;
    class UPointLightComponent* PointLight;
    class UArrowComponent* Arrow;
    class UNiagaraComponent* NS_Ground_Spike;
    class USphereComponent* SphereDamageTrigger;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    float SpikeDurationFade_NewTrack_0_598055184F53D08F9DFFFC9BD3409EFF;
    TEnumAsByte<ETimelineDirection::Type> SpikeDurationFade__Direction_598055184F53D08F9DFFFC9BD3409EFF;
    class UTimelineComponent* SpikeDurationFade;
    float Rotation;
    float Height;
    bool Return;
    class USoundBase* BurstFromGround_Cue;
    float InitialLightIntensity;

    void SpikeDurationFade__FinishedFunc();
    void SpikeDurationFade__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PlagueGroundSpike(int32 EntryPoint);
};

#endif
