#ifndef UE4SS_SDK_BP_Geyser_Lava_HPP
#define UE4SS_SDK_BP_Geyser_Lava_HPP

class ABP_Geyser_Lava_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* BoilingAudio;
    class UDamageComponent* Damage;
    class UCapsuleComponent* Capsule;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Sphere1;
    class UStaticMeshComponent* PreviewCube;
    class UStaticMeshComponent* PreviewMesh;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class USceneComponent* TerrainDetectors;
    class UExplosionComponent* Explosion;
    class UParticleSystemComponent* Particle_Idle;
    class UParticleSystemComponent* Particle_Erupt;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Geyser;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Cube;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent;
    class USceneComponent* SharedRoot;
    float TL_LightIdle_Animation_B5F889F4441C038D5B643AB1334A0B57;
    TEnumAsByte<ETimelineDirection::Type> TL_LightIdle__Direction_B5F889F4441C038D5B643AB1334A0B57;
    class UTimelineComponent* TL_LightIdle;
    float TL_LightErupt_Animation_7348656F4781FB277E0ACBB9184D718A;
    TEnumAsByte<ETimelineDirection::Type> TL_LightErupt__Direction_7348656F4781FB277E0ACBB9184D718A;
    class UTimelineComponent* TL_LightErupt;
    FVector2D Idle Min / Max;
    FVector2D Erupt Min / Max;
    float TraceDown;
    bool VolcanoEruptionDanger;
    bool Explode;
    float LightIntensityErupt;
    float LightIntensityIdle;

    void OnRep_Explode();
    void OnRep_VolcanoEruptionDanger();
    void TL_LightErupt__FinishedFunc();
    void TL_LightErupt__UpdateFunc();
    void TL_LightIdle__FinishedFunc();
    void TL_LightIdle__UpdateFunc();
    void ReceiveBeginPlay();
    void BurnPlayers();
    void PlayDamageSound(FVector Location);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void Boom();
    void LightOn();
    void LightOff();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Geyser_Lava(int32 EntryPoint);
};

#endif
