#ifndef UE4SS_SDK_MRMesh_HPP
#define UE4SS_SDK_MRMesh_HPP

#include "MRMesh_enums.hpp"

struct FMRMeshConfiguration
{
};

class UMRMeshComponent : public UPrimitiveComponent
{
    class UMaterialInterface* Material;
    class UMaterialInterface* WireframeMaterial;
    bool bCreateMeshProxySections;
    bool bUpdateNavMeshOnMeshUpdate;
    bool bNeverCreateCollisionMesh;
    class UBodySetup* CachedBodySetup;
    TArray<class UBodySetup*> BodySetups;

    void SetWireframeMaterial(class UMaterialInterface* InMaterial);
    void SetWireframeColor(const FLinearColor& InColor);
    void SetUseWireframe(bool bUseWireframe);
    void SetEnableMeshOcclusion(bool bEnable);
    bool IsConnected();
    FLinearColor GetWireframeColor();
    bool GetUseWireframe();
    bool GetEnableMeshOcclusion();
    void ForceNavMeshUpdate();
    void Clear();
};

class UMeshReconstructorBase : public UObject
{

    void StopReconstruction();
    void StartReconstruction();
    void PauseReconstruction();
    bool IsReconstructionStarted();
    bool IsReconstructionPaused();
    void DisconnectMRMesh();
    void ConnectMRMesh(class UMRMeshComponent* Mesh);
};

class UMockDataMeshTrackerComponent : public USceneComponent
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
    class UMRMeshComponent* MRMesh;

    void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

#endif
