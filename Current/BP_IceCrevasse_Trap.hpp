#ifndef UE4SS_SDK_BP_IceCrevasse_Trap_HPP
#define UE4SS_SDK_BP_IceCrevasse_Trap_HPP

class ABP_IceCrevasse_Trap_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Step6;
    class UStaticMeshComponent* Step5;
    class UStaticMeshComponent* Step4;
    class UStaticMeshComponent* Step3;
    class UStaticMeshComponent* Step2;
    class UStaticMeshComponent* Step1;
    class UStaticMeshComponent* Tell4;
    class UStaticMeshComponent* Tell3;
    class UStaticMeshComponent* Tell2;
    class UStaticMeshComponent* Tell1;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Crevasse;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_warning;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    TArray<FVector> ParticleLocations;
    TArray<FTransform> TellTransforms;
    int32 TellIndex;
    TArray<class UStaticMeshComponent*> RockSteps;
    float ChanceOfRockSteps;
    bool IsOpen;

    void OnRep_IsOpen();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OpenCrevasse();
    void ExecuteUbergraph_BP_IceCrevasse_Trap(int32 EntryPoint);
};

#endif
