#ifndef UE4SS_SDK_BP_SmallLavaGeyser_HPP
#define UE4SS_SDK_BP_SmallLavaGeyser_HPP

class ABP_SmallLavaGeyser_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystemTell;
    class UActorStateComponent* EndErruptionState;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* Billboard;
    class UStaticMeshComponent* SM_Carver_DropPodDrill001;
    class UTerrainDetectComponent* TerrainDetect;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_HotRockCore;
    class UStaticMeshComponent* SM_Carver_DropPodDrill002;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Slag;
    class UPointLightComponent* PointLight;
    class UActorStateComponent* ErruptState;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* SM_Carver_Rock21;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UCapsuleComponent* Capsule;
    class USceneComponent* DefaultSceneRoot;
    float LightIntensity_Intensity_6E1A640541026D247C6B3FA0FE340F1B;
    TEnumAsByte<ETimelineDirection::Type> LightIntensity__Direction_6E1A640541026D247C6B3FA0FE340F1B;
    class UTimelineComponent* LightIntensity;
    FVector2D ErruptionDurrationMinMax;
    float LightIntensityErrupt;
    float ChainReactionRadius;
    class UHealthComponentBase* TargetHealthComponent;
    float ErruptionDelay;
    float OverallErruptionCycleLength;
    float IdleLength;
    int32 ErruptionDelayMin;
    int32 ErruptionDelayMax;
    int32 ErruptionDelayMultiplier;
    float TellLength;
    int32 NumLoopsInErruptionCycle;
    int32 NumLoops;
    float TimeBetweenCycles;
    float ErruptionDelayVariation;
    FVector2D ErruptionVariationDellayMinMax;

    void LightIntensity__FinishedFunc();
    void LightIntensity__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__ErruptState_K2Node_ComponentBoundEvent_0_StateDelegate__DelegateSignature(class UActorStateComponent* State);
    void PlayErruptionAudio();
    void ShowErruptionGFX();
    void HideErruptionGFX();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__EndErruptionState_K2Node_ComponentBoundEvent_1_StateDelegate__DelegateSignature(class UActorStateComponent* State);
    void ErruptionCycleLoop();
    void ExecuteUbergraph_BP_SmallLavaGeyser(int32 EntryPoint);
};

#endif
