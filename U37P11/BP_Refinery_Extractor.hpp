#ifndef UE4SS_SDK_BP_Refinery_Extractor_HPP
#define UE4SS_SDK_BP_Refinery_Extractor_HPP

class ABP_Refinery_Extractor_C : public APipelineExtractorPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* BP_Extractor_Lamp02;
    class UChildActorComponent* BP_Extractor_Lamp01;
    class UStaticMeshComponent* SM_railconnector_02;
    class UStaticMeshComponent* SM_railconnector_01;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UOutlineComponent* outline;
    class UBP_Extractor_Shell_C* Door_Back;
    class UBP_Extractor_Shell_C* Door_Front;
    class UBP_Extractor_Shell_C* Door_Left;
    class UBP_Extractor_Shell_C* Door_Right;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* Doors;
    class UAudioComponent* AudioDropStarted;
    class USkeletalMeshComponent* Drill;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UAudioComponent* MineheadDrilling_Cue;
    class UAutoCarverComponent* AutoCarver;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class USceneComponent* ConnectedIndicator;
    class UActorTrackingComponent* ActorTrackingIcon;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* Scene;
    class UParticleSystemComponent* DrillParticles01;
    class UParticleSystemComponent* DrillParticles02;
    bool DoorsPushedAway;
    bool ItemEquipped;

    void UpdateState();
    void UserConstructionScript();
    void ExtractorPodOrderedEvent(class APlayerCharacter* InUser);
    void ReceiveBeginPlay();
    void OnDropStarted();
    void OnItemEquipped_Event(class AItem* Item);
    void SetPipelineBuilderEquipped(bool InEquipped);
    void ReceiveConnectedToSegment(class APipelineSegment* InConnectedSegment);
    void Setup ItemEquipped();
    void OnDroppodImpact();
    void OnPipelineStateChanged(EPipelineBuildState InPipelineState);
    void ExecuteUbergraph_BP_Refinery_Extractor(int32 EntryPoint);
};

#endif
