#ifndef UE4SS_SDK_EditableMesh_HPP
#define UE4SS_SDK_EditableMesh_HPP

#include "EditableMesh_enums.hpp"

class UEditableMeshAdapter : UObject
{
}

class UEditableGeometryCollectionAdapter : UEditableMeshAdapter
{
    UGeometryCollection* GeometryCollection;
    UGeometryCollection* OriginalGeometryCollection;
    int32 GeometryCollectionLODIndex;
}

class UEditableMesh : UObject
{
    TArray<UEditableMeshAdapter*> Adapters;
    int32 TextureCoordinateCount;
    int32 PendingCompactCounter;
    int32 SubdivisionCount;

    void WeldVertices(const TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);
    void TryToRemoveVertex(const FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);
    void TryToRemovePolygonEdge(const FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);
    void TriangulatePolygons(const TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);
    void TessellatePolygons(const TArray<FPolygonID>& PolygonIDs, const ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs);
    void StartModification(const EMeshModificationType MeshModificationType, const EMeshTopologyChange MeshTopologyChange);
    void SplitPolygons(const TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);
    void SplitPolygonalMesh(const FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs);
    void SplitEdge(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);
    void SetVerticesCornerSharpness(const TArray<FVertexID>& VertexIDs, const TArray<float>& VerticesNewCornerSharpness);
    void SetVerticesAttributes(const TArray<FAttributesForVertex>& AttributesForVertices);
    void SetVertexInstancesAttributes(const TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);
    void SetTextureCoordinateCount(const int32 NumTexCoords);
    void SetSubdivisionCount(const int32 NewSubdivisionCount);
    void SetPolygonsVertexAttributes(const TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);
    void SetEdgesHardnessAutomatically(const TArray<FEdgeID>& EdgeIDs, const float MaxDotProductForSoftEdge);
    void SetEdgesHardness(const TArray<FEdgeID>& EdgeIDs, const TArray<bool>& EdgesNewIsHard);
    void SetEdgesCreaseSharpness(const TArray<FEdgeID>& EdgeIDs, const TArray<float>& EdgesNewCreaseSharpness);
    void SetEdgesAttributes(const TArray<FAttributesForEdge>& AttributesForEdges);
    void SetAllowUndo(const bool bInAllowUndo);
    void SetAllowSpatialDatabase(const bool bInAllowSpatialDatabase);
    void SetAllowCompact(const bool bInAllowCompact);
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const FPlane& InPlane, TArray<FPolygonID>& OutPolygons);
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const FVector LineSegmentStart, const FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons);
    void SearchSpatialDatabaseForPolygonsInVolume(const TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons);
    UEditableMesh* RevertInstance();
    void Revert();
    void RebuildRenderMesh();
    void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);
    void PropagateInstanceChanges();
    void MoveVertices(const TArray<FVertexToMove>& VerticesToMove);
    FVertexID MakeVertexID(const int32 VertexIndex);
    FPolygonID MakePolygonID(const int32 PolygonIndex);
    FPolygonGroupID MakePolygonGroupID(const int32 PolygonGroupIndex);
    FEdgeID MakeEdgeID(const int32 EdgeIndex);
    bool IsValidVertex(const FVertexID VertexID);
    bool IsValidPolygonGroup(const FPolygonGroupID PolygonGroupID);
    bool IsValidPolygon(const FPolygonID PolygonID);
    bool IsValidEdge(const FEdgeID EdgeID);
    bool IsUndoAllowed();
    bool IsSpatialDatabaseAllowed();
    bool IsPreviewingSubdivisions();
    bool IsOrphanedVertex(const FVertexID VertexID);
    bool IsCompactAllowed();
    bool IsCommittedAsInstance();
    bool IsCommitted();
    bool IsBeingModified();
    FVertexID InvalidVertexID();
    FPolygonID InvalidPolygonID();
    FPolygonGroupID InvalidPolygonGroupID();
    FEdgeID InvalidEdgeID();
    void InsetPolygons(const TArray<FPolygonID>& PolygonIDs, const float InsetFixedDistance, const float InsetProgressTowardCenter, const EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    void InsertEdgeLoop(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);
    void InitializeAdapters();
    FEdgeID GetVertexPairEdge(const FVertexID VertexID, const FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed);
    FVertexID GetVertexInstanceVertex(const FVertexInstanceID VertexInstanceID);
    int32 GetVertexInstanceCount();
    void GetVertexInstanceConnectedPolygons(const FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    int32 GetVertexInstanceConnectedPolygonCount(const FVertexInstanceID VertexInstanceID);
    FPolygonID GetVertexInstanceConnectedPolygon(const FVertexInstanceID VertexInstanceID, const int32 ConnectedPolygonNumber);
    int32 GetVertexCount();
    void GetVertexConnectedPolygons(const FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    void GetVertexConnectedEdges(const FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs);
    int32 GetVertexConnectedEdgeCount(const FVertexID VertexID);
    FEdgeID GetVertexConnectedEdge(const FVertexID VertexID, const int32 ConnectedEdgeNumber);
    void GetVertexAdjacentVertices(const FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);
    int32 GetTextureCoordinateCount();
    FSubdivisionLimitData GetSubdivisionLimitData();
    int32 GetSubdivisionCount();
    int32 GetPolygonTriangulatedTriangleCount(const FPolygonID PolygonID);
    FTriangleID GetPolygonTriangulatedTriangle(const FPolygonID PolygonID, int32 PolygonTriangleNumber);
    void GetPolygonPerimeterVertices(const FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs);
    void GetPolygonPerimeterVertexInstances(const FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs);
    FVertexInstanceID GetPolygonPerimeterVertexInstance(const FPolygonID PolygonID, const int32 PolygonVertexNumber);
    int32 GetPolygonPerimeterVertexCount(const FPolygonID PolygonID);
    FVertexID GetPolygonPerimeterVertex(const FPolygonID PolygonID, const int32 PolygonVertexNumber);
    void GetPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs);
    int32 GetPolygonPerimeterEdgeCount(const FPolygonID PolygonID);
    FEdgeID GetPolygonPerimeterEdge(const FPolygonID PolygonID, const int32 PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon);
    FPolygonID GetPolygonInGroup(const FPolygonGroupID PolygonGroupID, const int32 PolygonNumber);
    int32 GetPolygonGroupCount();
    int32 GetPolygonCountInGroup(const FPolygonGroupID PolygonGroupID);
    int32 GetPolygonCount();
    void GetPolygonAdjacentPolygons(const FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons);
    FPolygonGroupID GetGroupForPolygon(const FPolygonID PolygonID);
    FPolygonGroupID GetFirstValidPolygonGroup();
    void GetEdgeVertices(const FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1);
    FVertexID GetEdgeVertex(const FEdgeID EdgeID, const int32 EdgeVertexNumber);
    FEdgeID GetEdgeThatConnectsVertices(const FVertexID VertexID0, const FVertexID VertexID1);
    void GetEdgeLoopElements(const FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs);
    int32 GetEdgeCount();
    void GetEdgeConnectedPolygons(const FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    int32 GetEdgeConnectedPolygonCount(const FEdgeID EdgeID);
    FPolygonID GetEdgeConnectedPolygon(const FEdgeID EdgeID, const int32 ConnectedPolygonNumber);
    void GeneratePolygonTangentsAndNormals(const TArray<FPolygonID>& PolygonIDs);
    void FlipPolygons(const TArray<FPolygonID>& PolygonIDs);
    int32 FindPolygonPerimeterVertexNumberForVertex(const FPolygonID PolygonID, const FVertexID VertexID);
    int32 FindPolygonPerimeterEdgeNumberForVertices(const FPolygonID PolygonID, const FVertexID EdgeVertexID0, const FVertexID EdgeVertexID1);
    void FindPolygonLoop(const FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit);
    void ExtrudePolygons(const TArray<FPolygonID>& Polygons, const float ExtrudeDistance, const bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons);
    void ExtendVertices(const TArray<FVertexID>& VertexIDs, const bool bOnlyExtendClosestEdge, const FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs);
    void ExtendEdges(const TArray<FEdgeID>& EdgeIDs, const bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);
    void EndModification(const bool bFromUndo);
    void DeleteVertexInstances(const TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, const bool bDeleteOrphanedVertices);
    void DeleteVertexAndConnectedEdgesAndPolygons(const FVertexID VertexID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    void DeletePolygons(const TArray<FPolygonID>& PolygonIDsToDelete, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    void DeletePolygonGroups(const TArray<FPolygonGroupID>& PolygonGroupIDs);
    void DeleteOrphanVertices(const TArray<FVertexID>& VertexIDsToDelete);
    void DeleteEdges(const TArray<FEdgeID>& EdgeIDsToDelete, const bool bDeleteOrphanedVertices);
    void DeleteEdgeAndConnectedPolygons(const FEdgeID EdgeID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    void CreateVertices(const TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    void CreateVertexInstances(const TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs);
    void CreatePolygons(const TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs);
    void CreatePolygonGroups(const TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs);
    void CreateMissingPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);
    void CreateEmptyVertexRange(const int32 NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    void CreateEdges(const TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);
    void ComputePolygonsSharedEdges(const TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs);
    FPlane ComputePolygonPlane(const FPolygonID PolygonID);
    FVector ComputePolygonNormal(const FPolygonID PolygonID);
    FVector ComputePolygonCenter(const FPolygonID PolygonID);
    FBoxSphereBounds ComputeBoundingBoxAndSphere();
    FBox ComputeBoundingBox();
    UEditableMesh* CommitInstance(UPrimitiveComponent* ComponentToInstanceTo);
    void Commit();
    void ChangePolygonsVertexInstances(const TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);
    void BevelPolygons(const TArray<FPolygonID>& PolygonIDs, const float BevelFixedDistance, const float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    void AssignPolygonsToPolygonGroups(const TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, const bool bDeleteOrphanedPolygonGroups);
    bool AnyChangesToUndo();
}

class UEditableMeshFactory : UObject
{

    UEditableMesh* MakeEditableMesh(UPrimitiveComponent* PrimitiveComponent, const int32 LODIndex);
}

class UEditableStaticMeshAdapter : UEditableMeshAdapter
{
    UStaticMesh* StaticMesh;
    UStaticMesh* OriginalStaticMesh;
    int32 StaticMeshLODIndex;
}

struct UAdaptorPolygon2Group
{
    uint32 RenderingSectionIndex;
    int32 MaterialIndex;
    int32 MaxTriangles;
}

struct UAdaptorPolygon
{
    FPolygonGroupID PolygonGroupID;
    TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices;
}

struct UAdaptorTriangleID : FElementID
{
}

struct UPolygonGroupForPolygon
{
    FPolygonID PolygonID;
    FPolygonGroupID PolygonGroupID;
}

struct UPolygonGroupToCreate
{
    FMeshElementAttributeList PolygonGroupAttributes;
    FPolygonGroupID OriginalPolygonGroupID;
}

struct UMeshElementAttributeList
{
    TArray<FMeshElementAttributeData> Attributes;
}

struct UMeshElementAttributeData
{
    FName AttributeName;
    int32 AttributeIndex;
    FMeshElementAttributeValue AttributeValue;
}

struct UMeshElementAttributeValue
{
}

struct UVertexToMove
{
    FVertexID VertexID;
    FVector NewVertexPosition;
}

struct UChangeVertexInstancesForPolygon
{
    FPolygonID PolygonID;
    TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs;
    TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;
}

struct UVertexInstancesForPolygonHole
{
    TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs;
}

struct UVertexIndexAndInstanceID
{
    int32 ContourIndex;
    FVertexInstanceID VertexInstanceID;
}

struct UVertexAttributesForPolygon
{
    FPolygonID PolygonID;
    TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists;
    TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;
}

struct UVertexAttributesForPolygonHole
{
    TArray<FMeshElementAttributeList> VertexAttributeList;
}

struct UAttributesForEdge
{
    FEdgeID EdgeID;
    FMeshElementAttributeList EdgeAttributes;
}

struct UAttributesForVertexInstance
{
    FVertexInstanceID VertexInstanceID;
    FMeshElementAttributeList VertexInstanceAttributes;
}

struct UAttributesForVertex
{
    FVertexID VertexID;
    FMeshElementAttributeList VertexAttributes;
}

struct UPolygonToSplit
{
    FPolygonID PolygonID;
    TArray<FVertexPair> VertexPairsToSplitAt;
}

struct UVertexPair
{
    FVertexID VertexID0;
    FVertexID VertexID1;
}

struct UPolygonToCreate
{
    FPolygonGroupID PolygonGroupID;
    TArray<FVertexAndAttributes> PerimeterVertices;
    FPolygonID OriginalPolygonID;
    EPolygonEdgeHardness PolygonEdgeHardness;
}

struct UVertexAndAttributes
{
    FVertexInstanceID VertexInstanceID;
    FVertexID VertexID;
    FMeshElementAttributeList PolygonVertexAttributes;
}

struct UEdgeToCreate
{
    FVertexID VertexID0;
    FVertexID VertexID1;
    FMeshElementAttributeList EdgeAttributes;
    FEdgeID OriginalEdgeID;
}

struct UVertexInstanceToCreate
{
    FVertexID VertexID;
    FMeshElementAttributeList VertexInstanceAttributes;
    FVertexInstanceID OriginalVertexInstanceID;
}

struct UVertexToCreate
{
    FMeshElementAttributeList VertexAttributes;
    FVertexID OriginalVertexID;
}

struct USubdivisionLimitData
{
    TArray<FVector> VertexPositions;
    TArray<FSubdivisionLimitSection> Sections;
    TArray<FSubdividedWireEdge> SubdividedWireEdges;
}

struct USubdividedWireEdge
{
    int32 EdgeVertex0PositionIndex;
    int32 EdgeVertex1PositionIndex;
}

struct USubdivisionLimitSection
{
    TArray<FSubdividedQuad> SubdividedQuads;
}

struct USubdividedQuad
{
    FSubdividedQuadVertex QuadVertex0;
    FSubdividedQuadVertex QuadVertex1;
    FSubdividedQuadVertex QuadVertex2;
    FSubdividedQuadVertex QuadVertex3;
}

struct USubdividedQuadVertex
{
    int32 VertexPositionIndex;
    FVector2D TextureCoordinate0;
    FVector2D TextureCoordinate1;
    FColor VertexColor;
    FVector VertexNormal;
    FVector VertexTangent;
    float VertexBinormalSign;
}

struct URenderingPolygonGroup
{
    uint32 RenderingSectionIndex;
    int32 MaterialIndex;
    int32 MaxTriangles;
}

struct URenderingPolygon
{
    FPolygonGroupID PolygonGroupID;
    TArray<FTriangleID> TriangulatedPolygonTriangleIndices;
}

#endif
