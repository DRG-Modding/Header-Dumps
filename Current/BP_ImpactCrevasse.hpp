#ifndef UE4SS_SDK_BP_ImpactCrevasse_HPP
#define UE4SS_SDK_BP_ImpactCrevasse_HPP

class ABP_ImpactCrevasse_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Crevasse;
    class UStaticMeshComponent* CrevasseHotRockFill;
    class USceneComponent* Crevace;
    class UStaticMeshComponent* Step11;
    class UStaticMeshComponent* Step8;
    class UStaticMeshComponent* Step6;
    class UStaticMeshComponent* Step5;
    class UStaticMeshComponent* Step4;
    class UStaticMeshComponent* Step3;
    class UStaticMeshComponent* Step1;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UStaticMeshComponent*> RockSteps;
    float ChanceOfRockSteps;
    int32 MinNumRockSteps;

    void UserConstructionScript();
    void OpenCrevessa();
    void ExecuteUbergraph_BP_ImpactCrevasse(int32 EntryPoint);
};

#endif
