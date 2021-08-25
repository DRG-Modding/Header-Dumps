// Class MeshDescription.MeshDescription
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescription : UObject {
};

// Class MeshDescription.MeshDescriptionBase
// Size: 0x390 (Inherited: 0x28)
struct UMeshDescriptionBase : UObject {
	char UnknownData_28[0x368]; // 0x28(0x368)

	void SetVertexPosition(struct FVertexID VertexID, struct FVector Position); // Function MeshDescription.MeshDescriptionBase.SetVertexPosition
	void SetPolygonVertexInstance(struct FPolygonID PolygonID, int32_t PerimeterIndex, struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	void SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	void ReversePolygonFacing(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	void ReserveNewVertices(int32_t NumberOfNewVertices); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	void ReserveNewTriangles(int32_t NumberOfNewTriangles); // Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	void ReserveNewPolygons(int32_t NumberOfNewPolygons); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	void ReserveNewEdges(int32_t NumberOfNewEdges); // Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
	bool IsVertexValid(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexValid
	bool IsVertexOrphaned(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	bool IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	bool IsTriangleValid(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTriangleValid
	bool IsTrianglePartOfNgon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	bool IsPolygonValid(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsPolygonValid
	bool IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	bool IsEmpty(); // Function MeshDescription.MeshDescriptionBase.IsEmpty
	bool IsEdgeValid(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeValid
	bool IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	bool IsEdgeInternal(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
	void GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	struct FVector GetVertexPosition(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexPosition
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1); // Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID> OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	void GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID> OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID> OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID> OutAdjacentVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	void GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID> OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
	void GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	struct FPolygonID GetTrianglePolygon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	void GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID> OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
	void GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID> OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	void GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID> OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
	void GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	void GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID> OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID> OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	void GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID> OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	void GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID> OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID> OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	int32_t GetNumVertexVertexInstances(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	int32_t GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	int32_t GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	int32_t GetNumVertexConnectedTriangles(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	int32_t GetNumVertexConnectedPolygons(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	int32_t GetNumVertexConnectedEdges(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	int32_t GetNumPolygonVertices(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	int32_t GetNumPolygonTriangles(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	int32_t GetNumPolygonInternalEdges(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	int32_t GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	int32_t GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	int32_t GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	void GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID> OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
	void GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID> OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	void Empty(); // Function MeshDescription.MeshDescriptionBase.Empty
	void DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID> OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	void DeleteVertex(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.DeleteVertex
	void DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID> OrphanedEdges, struct TArray<struct FVertexInstanceID> OrphanedVertexInstances, struct TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr); // Function MeshDescription.MeshDescriptionBase.DeleteTriangle
	void DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	void DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID> OrphanedEdges, struct TArray<struct FVertexInstanceID> OrphanedVertexInstances, struct TArray<struct FPolygonGroupID> OrphanedPolygonGroups); // Function MeshDescription.MeshDescriptionBase.DeletePolygon
	void DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID> OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteEdge
	void CreateVertexWithID(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
	void CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
	struct FVertexID CreateVertex(); // Function MeshDescription.MeshDescriptionBase.CreateVertex
	void CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID> VertexInstanceIDs, struct TArray<struct FEdgeID> NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	struct FTriangleID CreateTriangle(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID> VertexInstanceIDs, struct TArray<struct FEdgeID> NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangle
	void CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID> VertexInstanceIDs, struct TArray<struct FEdgeID> NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	void CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	struct FPolygonGroupID CreatePolygonGroup(); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	struct FPolygonID CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID> VertexInstanceIDs, struct TArray<struct FEdgeID> NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygon
	void CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	struct FEdgeID CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdge
	void ComputePolygonTriangulation(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
};

