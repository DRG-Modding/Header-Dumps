// Class MeshDescription.MeshDescription
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescription : UObject {
};

// Class MeshDescription.MeshDescriptionBase
// Size: 0x390 (Inherited: 0x28)
struct UMeshDescriptionBase : UObject {

	void SetVertexPosition(FVertexID VertexID, FVector Position);
	void SetPolygonVertexInstance(FPolygonID PolygonID, int32_t PerimeterIndex, FVertexInstanceID VertexInstanceID);
	void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);
	void ReversePolygonFacing(FPolygonID PolygonID);
	void ReserveNewVertices(int32_t NumberOfNewVertices);
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);
	void ReserveNewTriangles(int32_t NumberOfNewTriangles);
	void ReserveNewPolygons(int32_t NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);
	void ReserveNewEdges(int32_t NumberOfNewEdges);
	bool IsVertexValid(FVertexID VertexID);
	bool IsVertexOrphaned(FVertexID VertexID);
	bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID);
	bool IsTriangleValid(FTriangleID TriangleID);
	bool IsTrianglePartOfNgon(FTriangleID TriangleID);
	bool IsPolygonValid(FPolygonID PolygonID);
	bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID);
	bool IsEmpty();
	bool IsEdgeValid(FEdgeID EdgeID);
	bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID);
	bool IsEdgeInternal(FEdgeID EdgeID);
	void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID> OutVertexInstanceIDs);
	FVector GetVertexPosition(FVertexID VertexID);
	FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1);
	FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);
	FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1);
	FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID);
	FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID);
	void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID> OutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID> OutConnectedPolygonIDs);
	void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID> OutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID> OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID> OutEdgeIDs);
	void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID> OutAdjacentVertexIDs);
	void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID> OutVertexIDs);
	void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID> OutVertexInstanceIDs);
	FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index);
	FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID);
	FPolygonID GetTrianglePolygon(FTriangleID TriangleID);
	void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID> OutEdgeIDs);
	void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID> OutTriangleIDs);
	void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID> OutVertexIDs);
	void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID> OutVertexInstanceIDs);
	void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID> OutTriangleIDs);
	FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID);
	void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID> OutEdgeIDs);
	void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID> OutEdgeIDs);
	void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID> OutPolygonIDs);
	void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID> OutPolygonIDs);
	int32_t GetNumVertexVertexInstances(FVertexID VertexID);
	int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID);
	int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID);
	int32_t GetNumVertexConnectedTriangles(FVertexID VertexID);
	int32_t GetNumVertexConnectedPolygons(FVertexID VertexID);
	int32_t GetNumVertexConnectedEdges(FVertexID VertexID);
	int32_t GetNumPolygonVertices(FPolygonID PolygonID);
	int32_t GetNumPolygonTriangles(FPolygonID PolygonID);
	int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID);
	int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID);
	int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID);
	int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID);
	void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID> OutVertexIDs);
	FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber);
	void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID> OutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID> OutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID> OrphanedVertices);
	void DeleteVertex(FVertexID VertexID);
	void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID> OrphanedEdges, TArray<FVertexInstanceID> OrphanedVertexInstances, TArray<FPolygonGroupID> OrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);
	void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID> OrphanedEdges, TArray<FVertexInstanceID> OrphanedVertexInstances, TArray<FPolygonGroupID> OrphanedPolygonGroups);
	void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID> OrphanedVertices);
	void CreateVertexWithID(FVertexID VertexID);
	void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);
	FVertexInstanceID CreateVertexInstance(FVertexID VertexID);
	FVertexID CreateVertex();
	void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID> VertexInstanceIDs, TArray<FEdgeID> NewEdgeIDs);
	FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID> VertexInstanceIDs, TArray<FEdgeID> NewEdgeIDs);
	void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID> VertexInstanceIDs, TArray<FEdgeID> NewEdgeIDs);
	void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);
	FPolygonGroupID CreatePolygonGroup();
	FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID> VertexInstanceIDs, TArray<FEdgeID> NewEdgeIDs);
	void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);
	FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);
	void ComputePolygonTriangulation(FPolygonID PolygonID);
};

