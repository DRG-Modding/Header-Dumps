#ifndef UE4SS_SDK_BP_SmallLavaGeyser_HPP
#define UE4SS_SDK_BP_SmallLavaGeyser_HPP

class ABP_SmallLavaGeyser_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystemTell;
    UActorStateComponent* EndErruptionState;
    UTerrainPlacementComponent* terrainPlacement;
    UBillboardComponent* Billboard;
    UStaticMeshComponent* SM_Carver_DropPodDrill001;
    UTerrainDetectComponent* TerrainDetect;
    ULevelGenerationCarverComponent* LevelGenerationCarver_HotRockCore;
    UStaticMeshComponent* SM_Carver_DropPodDrill002;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Slag;
    UPointLightComponent* PointLight;
    UActorStateComponent* ErruptState;
    UParticleSystemComponent* ParticleSystem;
    UStaticMeshComponent* SM_Carver_Rock21;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    UCapsuleComponent* Capsule;
    USceneComponent* DefaultSceneRoot;
    float LightIntensity_Intensity_6E1A640541026D247C6B3FA0FE340F1B;
    TEnumAsByte<ETimelineDirection::Type> LightIntensity__Direction_6E1A640541026D247C6B3FA0FE340F1B;
    UTimelineComponent* LightIntensity;
    FVector2D ErruptionDurrationMinMax;
    float LightIntensityErrupt;
    float ChainReactionRadius;
    UHealthComponentBase* TargetHealthComponent;
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
    void BndEvt__ErruptState_K2Node_ComponentBoundEvent_0_StateDelegate__DelegateSignature(UActorStateComponent* State);
    void PlayErruptionAudio();
    void ShowErruptionGFX();
    void HideErruptionGFX();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__EndErruptionState_K2Node_ComponentBoundEvent_1_StateDelegate__DelegateSignature(UActorStateComponent* State);
    void ErruptionCycleLoop();
    void ExecuteUbergraph_BP_SmallLavaGeyser(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UActorStateComponent* K2Node_ComponentBoundEvent_state_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 Temp_int_Variable, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UActorStateComponent* K2Node_ComponentBoundEvent_state, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
}

#endif
