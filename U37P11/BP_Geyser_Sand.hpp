#ifndef UE4SS_SDK_BP_Geyser_Sand_HPP
#define UE4SS_SDK_BP_Geyser_Sand_HPP

class ABP_Geyser_Sand_C : public ABP_Geyser_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GeyserSandIdle_Cue;
    class UAudioComponent* GeyserSandErupt_Cue;
    class UCapsuleComponent* Capsule-Inside;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* LevelGenerationCarver-Outside;
    class ULevelGenerationCarverComponent* LevelGenerationCarver-Inside;
    class UStaticMeshComponent* Cylender;
    class UTerrainPlacementComponent* terrainPlacement;
    class UCapsuleComponent* Capsule-Outside;
    class UParticleSystemComponent* Particle_Erupt;
    class UParticleSystemComponent* Particle_Idle;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USceneComponent* SharedRoot;
    float Shake_Scale_4B8AF2A244F1B3750EBFBBA5C371D0D3;
    TEnumAsByte<ETimelineDirection::Type> Shake__Direction_4B8AF2A244F1B3750EBFBBA5C371D0D3;
    class UTimelineComponent* Shake;
    FVector2D Idle Min / Max;
    FVector2D Erupt Min / Max;
    float TraceDown;
    bool VolcanoEruptionDanger;
    float AirPush;
    FVector StartScale;
    TArray<class APlayerCharacter*> playersInside;
    TArray<class APlayerCharacter*> PlayersOutside;

    void OnRep_Explode();
    void OnRep_VolcanoEruptionDanger();
    void Shake__FinishedFunc();
    void Shake__UpdateFunc();
    void ReceiveBeginPlay();
    void EnterGeyser();
    void OpenGeyser();
    void CloseGeyser();
    void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void InternalAirPush();
    void ExecuteUbergraph_BP_Geyser_Sand(int32 EntryPoint);
};

#endif
