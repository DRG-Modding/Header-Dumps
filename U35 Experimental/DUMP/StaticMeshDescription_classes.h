// Class StaticMeshDescription.StaticMeshDescription
// Size: 0x390 (Inherited: 0x390)
struct UStaticMeshDescription : UMeshDescriptionBase {

	void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex);
	void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName slotName);
	FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex);
	void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID PolygonID_PlusX, FPolygonID PolygonID_MinusX, FPolygonID PolygonID_PlusY, FPolygonID PolygonID_MinusY, FPolygonID PolygonID_PlusZ, FPolygonID PolygonID_MinusZ);
};

