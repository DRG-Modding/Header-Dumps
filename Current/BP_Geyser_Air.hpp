#ifndef UE4SS_SDK_BP_Geyser_Air_HPP
#define UE4SS_SDK_BP_Geyser_Air_HPP

class ABP_Geyser_Air_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UAudioComponent* BublingAudio;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Geyser;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UStaticMeshComponent* Cube_1-1-1;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Sphere;
    class UStaticMeshComponent* PreviewMesh;
    class UExplosionComponent* Explosion;
    class UTerrainDetectComponent* TerrainDetect4;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UBillboardComponent* Billboard;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UCapsuleComponent* Capsule;
    class UParticleSystemComponent* Particle_Erupt;
    class UParticleSystemComponent* Particle_Idle;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent;
    class USceneComponent* SharedRoot;
    FVector2D Idle Min / Max;
    FVector2D Erupt Min / Max;
    float TraceDown;
    bool Explode;
    FGeyserTimeStruct State;
    TSet<APlayerCharacter*> PlayerInCollision;
    FRuntimeFloatCurve GravityCurve;
    bool EffectsActivated;

    void OnRep_State();
    void OnRep_Explode();
    void ReceiveBeginPlay();
    void PlayDamageSound(FVector Location);
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void Boom();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_DamageTriggerComponent_K2Node_ComponentBoundEvent_0_ActorExited__DelegateSignature(class UHealthComponent* OtherHealthComponent);
    void BndEvt__BP_DamageTriggerComponent_K2Node_ComponentBoundEvent_5_ActorEntered__DelegateSignature(class UHealthComponent* OtherHealthComponent);
    void ExecuteUbergraph_BP_Geyser_Air(int32 EntryPoint);
};

#endif
