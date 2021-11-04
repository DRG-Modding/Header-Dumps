// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8 {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2
};

// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8 {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8 {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4
};

// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8 {
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7,
	EMeshElementAttributeType_MAX = 8
};

// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8 {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2
};

// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8 {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3
};

// ScriptStruct EditableMesh.AdaptorPolygon2Group
// Size: 0x48 (Inherited: 0x00)
struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x00(0x04)
	int32_t MaterialIndex; // 0x04(0x04)
	int32_t MaxTriangles; // 0x08(0x04)
};

// ScriptStruct EditableMesh.AdaptorPolygon
// Size: 0x18 (Inherited: 0x00)
struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x08(0x10)
};

// ScriptStruct EditableMesh.AdaptorTriangleID
// Size: 0x04 (Inherited: 0x04)
struct FAdaptorTriangleID : FElementID {
};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// Size: 0x08 (Inherited: 0x00)
struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x00(0x04)
	FPolygonGroupID PolygonGroupID; // 0x04(0x04)
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// Size: 0x18 (Inherited: 0x00)
struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x00(0x10)
	FPolygonGroupID OriginalPolygonGroupID; // 0x10(0x04)
};

// ScriptStruct EditableMesh.MeshElementAttributeList
// Size: 0x10 (Inherited: 0x00)
struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x00(0x10)
};

// ScriptStruct EditableMesh.MeshElementAttributeData
// Size: 0x60 (Inherited: 0x00)
struct FMeshElementAttributeData {
	FName AttributeName; // 0x00(0x08)
	int32_t AttributeIndex; // 0x08(0x04)
	FMeshElementAttributeValue AttributeValue; // 0x10(0x50)
};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// Size: 0x50 (Inherited: 0x00)
struct FMeshElementAttributeValue {
};

// ScriptStruct EditableMesh.VertexToMove
// Size: 0x10 (Inherited: 0x00)
struct FVertexToMove {
	FVertexID VertexID; // 0x00(0x04)
	FVector NewVertexPosition; // 0x04(0x0c)
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// Size: 0x28 (Inherited: 0x00)
struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x00(0x04)
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x08(0x10)
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18(0x10)
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// Size: 0x10 (Inherited: 0x00)
struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x00(0x10)
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// Size: 0x08 (Inherited: 0x00)
struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x00(0x04)
	FVertexInstanceID VertexInstanceID; // 0x04(0x04)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// Size: 0x28 (Inherited: 0x00)
struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x00(0x04)
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x08(0x10)
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18(0x10)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// Size: 0x10 (Inherited: 0x00)
struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x00(0x10)
};

// ScriptStruct EditableMesh.AttributesForEdge
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x00(0x04)
	FMeshElementAttributeList EdgeAttributes; // 0x08(0x10)
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x00(0x04)
	FMeshElementAttributeList VertexInstanceAttributes; // 0x08(0x10)
};

// ScriptStruct EditableMesh.AttributesForVertex
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForVertex {
	FVertexID VertexID; // 0x00(0x04)
	FMeshElementAttributeList VertexAttributes; // 0x08(0x10)
};

// ScriptStruct EditableMesh.PolygonToSplit
// Size: 0x18 (Inherited: 0x00)
struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x00(0x04)
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x08(0x10)
};

// ScriptStruct EditableMesh.VertexPair
// Size: 0x08 (Inherited: 0x00)
struct FVertexPair {
	FVertexID VertexID0; // 0x00(0x04)
	FVertexID VertexID1; // 0x04(0x04)
};

// ScriptStruct EditableMesh.PolygonToCreate
// Size: 0x20 (Inherited: 0x00)
struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x08(0x10)
	FPolygonID OriginalPolygonID; // 0x18(0x04)
	enum class EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c(0x01)
};

// ScriptStruct EditableMesh.VertexAndAttributes
// Size: 0x18 (Inherited: 0x00)
struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x00(0x04)
	FVertexID VertexID; // 0x04(0x04)
	FMeshElementAttributeList PolygonVertexAttributes; // 0x08(0x10)
};

// ScriptStruct EditableMesh.EdgeToCreate
// Size: 0x20 (Inherited: 0x00)
struct FEdgeToCreate {
	FVertexID VertexID0; // 0x00(0x04)
	FVertexID VertexID1; // 0x04(0x04)
	FMeshElementAttributeList EdgeAttributes; // 0x08(0x10)
	FEdgeID OriginalEdgeID; // 0x18(0x04)
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// Size: 0x20 (Inherited: 0x00)
struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x00(0x04)
	FMeshElementAttributeList VertexInstanceAttributes; // 0x08(0x10)
	FVertexInstanceID OriginalVertexInstanceID; // 0x18(0x04)
};

// ScriptStruct EditableMesh.VertexToCreate
// Size: 0x18 (Inherited: 0x00)
struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x00(0x10)
	FVertexID OriginalVertexID; // 0x10(0x04)
};

// ScriptStruct EditableMesh.SubdivisionLimitData
// Size: 0x30 (Inherited: 0x00)
struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x00(0x10)
	TArray<FSubdivisionLimitSection> Sections; // 0x10(0x10)
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20(0x10)
};

// ScriptStruct EditableMesh.SubdividedWireEdge
// Size: 0x0c (Inherited: 0x00)
struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x00(0x04)
	int32_t EdgeVertex1PositionIndex; // 0x04(0x04)
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// Size: 0x10 (Inherited: 0x00)
struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x00(0x10)
};

// ScriptStruct EditableMesh.SubdividedQuad
// Size: 0xd0 (Inherited: 0x00)
struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x00(0x34)
	FSubdividedQuadVertex QuadVertex1; // 0x34(0x34)
	FSubdividedQuadVertex QuadVertex2; // 0x68(0x34)
	FSubdividedQuadVertex QuadVertex3; // 0x9c(0x34)
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// Size: 0x34 (Inherited: 0x00)
struct FSubdividedQuadVertex {
	int32_t VertexPositionIndex; // 0x00(0x04)
	FVector2D TextureCoordinate0; // 0x04(0x08)
	FVector2D TextureCoordinate1; // 0x0c(0x08)
	FColor VertexColor; // 0x14(0x04)
	FVector VertexNormal; // 0x18(0x0c)
	FVector VertexTangent; // 0x24(0x0c)
	float VertexBinormalSign; // 0x30(0x04)
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// Size: 0x48 (Inherited: 0x00)
struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x00(0x04)
	int32_t MaterialIndex; // 0x04(0x04)
	int32_t MaxTriangles; // 0x08(0x04)
};

// ScriptStruct EditableMesh.RenderingPolygon
// Size: 0x18 (Inherited: 0x00)
struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x08(0x10)
};

