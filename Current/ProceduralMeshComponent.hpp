#ifndef UE4SS_SDK_ProceduralMeshComponent_HPP
#define UE4SS_SDK_ProceduralMeshComponent_HPP

#include "ProceduralMeshComponent_enums.hpp"

struct FProcMeshSection
{
    TArray<FProcMeshVertex> ProcVertexBuffer;
    TArray<uint32> ProcIndexBuffer;
    FBox SectionLocalBox;
    bool bEnableCollision;
    bool bSectionVisible;

};

struct FProcMeshTangent
{
    FVector TangentX;
    bool bFlipTangentY;

};

struct FProcMeshVertex
{
    FVector Position;
    FVector Normal;
    FProcMeshTangent Tangent;
    FColor Color;
    FVector2D UV0;
    FVector2D UV1;
    FVector2D UV2;
    FVector2D UV3;

};

class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{

    void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
    void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing);
    void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>& Triangles);
    void CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing);
    void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
    void ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
    void CalculateTangentsForMesh(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents);
};

class UProceduralMeshComponent : public UMeshComponent
{
    bool bUseComplexAsSimpleCollision;
    bool bUseAsyncCooking;
    class UBodySetup* ProcMeshBodySetup;
    TArray<FProcMeshSection> ProcMeshSections;
    TArray<FKConvexElem> CollisionConvexElems;
    FBoxSphereBounds LocalBounds;
    TArray<class UBodySetup*> AsyncBodySetupQueue;

    void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    void UpdateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    bool IsMeshSectionVisible(int32 SectionIndex);
    int32 GetNumSections();
    void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    void CreateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    void ClearMeshSection(int32 SectionIndex);
    void ClearCollisionConvexMeshes();
    void ClearAllMeshSections();
    void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);
};

#endif
