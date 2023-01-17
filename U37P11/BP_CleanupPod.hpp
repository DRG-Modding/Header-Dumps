#ifndef UE4SS_SDK_BP_CleanupPod_HPP
#define UE4SS_SDK_BP_CleanupPod_HPP

class ABP_CleanupPod_C : public ACleanupPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UBoxComponent* Box1;
    class UStaticMeshComponent* SM_Carver_AtLanding;
    class UBP_SupplyDropToTerrainLogic_C* BP_SupplyDropToTerrainLogic;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect4;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect1;
    class UAudioComponent* audio;
    class UActorTrackingComponent* ActorTracking;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UNiagaraComponent* ParticleSysyem_Idle;
    class UChildActorComponent* VacuumRack1;
    class UChildActorComponent* SoapRack2;
    class UChildActorComponent* SoapRack1;
    class UChildActorComponent* VacuumRack2;
    class USkeletalMeshComponent* BodyMesh;
    class UTerrainDetectComponent* TerrainDetect;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UDropToTerrainComponent* DropToTerrain;
    class UAutoCarverComponent* AutoCarver;
    class USkeletalMeshComponent* SkeletalMesh;
    class UParticleSystemComponent* ThrusterParticles;
    class UAudioComponent* ThrusterSound;
    FTimerHandle ResizeCarverTimer;
    class UParticleSystemComponent* DropParticles;
    class UParticleSystemComponent* DropParticles2;
    class UAudioComponent* DrillingSound;

    void ReceiveBeginPlay();
    void OnDroppodImpact();
    void OnDroppodCloseToImpact();
    void ResizeCarver();
    void OnDropStarted();
    void FinishTutorialTask();
    void OnObjectiveChanged(class UObjective* Objective);
    void ExecuteUbergraph_BP_CleanupPod(int32 EntryPoint);
};

#endif
