#ifndef UE4SS_SDK_BP_Refinery_Target_HPP
#define UE4SS_SDK_BP_Refinery_Target_HPP

class ABP_Refinery_Target_C : public APipelineFinish
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UAudioComponent* audio;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* ST_LiquidMorkite_Well;
    class UStaticMeshComponent* ST_LiquidMorkite_Well1;
    class USceneComponent* GroundRoot;
    class UOutlineComponent* outline;
    class UAudioComponent* AudioIdle;
    class UMeshCarverComponent* MeshCarver-MaterialVein2;
    class UMeshCarverComponent* MeshCarver-MaterialVein1;
    class ULevelGenerationDebris* LevelGenerationDebris;
    class UMeshCarverComponent* MeshCarver-MaterialBottom;
    class UMeshCarverComponent* MeshCarver-Outside;
    class UMeshCarverComponent* MeshCarver-Mid;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class UPointLightComponent* FindMe_PointLight;
    class UChildActorComponent* ExtractorBlueprintChildActor;
    class USphereComponent* OrderExtractorCollision;
    class USphereComponent* GroundCollision;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* ResourceMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    bool PlayerLookingAtTarget;
    bool PlacementValid;
    class APipelineStart* PipelineStart;
    ERefineryState RefineryState;
    bool IsRefining;

    FVector GetLandingOffset();
    void UpdateIsRefining();
    void UpdateState();
    void UserConstructionScript();
    void StartBlinking();
    void ReceiveExtractorPodSpawned(class APipelineExtractorPod* InExtractorPod);
    void BndEvt__PipelineEndConnection_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(class UTrackBuilderConnectPoint* InConnectPoint, class ATrackBuilderSegment* InSegment);
    void BndEvt__UsableOrderExtractor_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnRefineryStateChanged_Event(ERefineryState InRefineryState);
    void OnStateChanged_Event(class ARessuplyPod* InPod, ERessuplyPodState InState);
    void BndEvt__Outline_K2Node_ComponentBoundEvent_2_OutlineChanged__DelegateSignature(EOutline InOutline);
    void InitialCarve();
    void OnMatchStarted();
    void StopBlinking();
    void Ping(bool InValidPlacement);
    void ReceiveBeginPlay();
    void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void ExecuteUbergraph_BP_Refinery_Target(int32 EntryPoint);
};

#endif
