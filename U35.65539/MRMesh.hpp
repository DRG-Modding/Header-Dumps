#ifndef UE4SS_SDK_MRMesh_HPP
#define UE4SS_SDK_MRMesh_HPP

#include "MRMesh_enums.hpp"

class UMeshReconstructorBase : UObject
{

    void StopReconstruction();
    void StartReconstruction();
    void PauseReconstruction();
    bool IsReconstructionStarted();
    bool IsReconstructionPaused();
    void DisconnectMRMesh();
    void ConnectMRMesh(UMRMeshComponent* Mesh);
}

class UMockDataMeshTrackerComponent : USceneComponent
{
    FMockDataMeshTrackerComponentOnMeshTrackerUpdated OnMeshTrackerUpdated;
    void OnMockDataMeshTrackerUpdated(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    bool ScanWorld;
    bool RequestNormals;
    bool RequestVertexConfidence;
    EMeshTrackerVertexColorMode VertexColorMode;
    TArray<FColor> BlockVertexColors;
    FLinearColor VertexColorFromConfidenceZero;
    FLinearColor VertexColorFromConfidenceOne;
    float UpdateInterval;
    UMRMeshComponent* MRMesh;

    void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
}

class UMRMeshComponent : UPrimitiveComponent
{
    UMaterialInterface* Material;
    bool bCreateMeshProxySections;
    bool bUpdateNavMeshOnMeshUpdate;
    bool bNeverCreateCollisionMesh;
    UBodySetup* CachedBodySetup;
    TArray<UBodySetup*> BodySetups;
    UMaterialInterface* WireframeMaterial;

    bool IsConnected();
    void ForceNavMeshUpdate();
    void Clear();
}

struct UMRMeshConfiguration
{
}

#endif
