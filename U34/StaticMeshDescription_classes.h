// Class StaticMeshDescription.StaticMeshDescription
// Size: 0x390 (Inherited: 0x390)
struct UStaticMeshDescription : UMeshDescriptionBase {

	void SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName slotName); // Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	void CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID PolygonID_PlusX, struct FPolygonID PolygonID_MinusX, struct FPolygonID PolygonID_PlusY, struct FPolygonID PolygonID_MinusY, struct FPolygonID PolygonID_PlusZ, struct FPolygonID PolygonID_MinusZ); // Function StaticMeshDescription.StaticMeshDescription.CreateCube
};

