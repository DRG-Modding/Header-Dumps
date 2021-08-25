// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t {
	ThreeTriangles,
	FourTriangles,
	ETriangleTessellationMode_MAX,
};

// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t {
	All,
	CenterPolygonOnly,
	SidePolygonsOnly,
	EInsetPolygonsMode_MAX,
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t {
	NewEdgesSoft,
	NewEdgesHard,
	AllEdgesSoft,
	AllEdgesHard,
	EPolygonEdgeHardness_MAX,
};

// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t {
	None,
	FVector4,
	FVector,
	FVector2D,
	Float,
	Int,
	Bool,
	FName,
	EMeshElementAttributeType_MAX,
};

// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t {
	NoTopologyChange,
	TopologyChange,
	EMeshTopologyChange_MAX,
};

// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t {
	FirstInterim,
	Interim,
	Final,
	EMeshModificationType_MAX,
};

// ScriptStruct EditableMesh.AdaptorPolygon2Group
// Size: 0x48 (Inherited: 0x00)
struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x00(0x04)
	int32_t MaterialIndex; // 0x04(0x04)
	int32_t MaxTriangles; // 0x08(0x04)
	char UnknownData_C[0x3c]; // 0x0c(0x3c)
};

// ScriptStruct EditableMesh.AdaptorPolygon
// Size: 0x18 (Inherited: 0x00)
struct FAdaptorPolygon {
	struct FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x08(0x10)
};

// ScriptStruct EditableMesh.AdaptorTriangleID
// Size: 0x04 (Inherited: 0x04)
struct FAdaptorTriangleID : FElementID {
};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// Size: 0x08 (Inherited: 0x00)
struct FPolygonGroupForPolygon {
	struct FPolygonID PolygonID; // 0x00(0x04)
	struct FPolygonGroupID PolygonGroupID; // 0x04(0x04)
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// Size: 0x18 (Inherited: 0x00)
struct FPolygonGroupToCreate {
	struct FMeshElementAttributeList PolygonGroupAttributes; // 0x00(0x10)
	struct FPolygonGroupID OriginalPolygonGroupID; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct EditableMesh.MeshElementAttributeList
// Size: 0x10 (Inherited: 0x00)
struct FMeshElementAttributeList {
	struct TArray<struct FMeshElementAttributeData> Attributes; // 0x00(0x10)
};

// ScriptStruct EditableMesh.MeshElementAttributeData
// Size: 0x60 (Inherited: 0x00)
struct FMeshElementAttributeData {
	struct FName AttributeName; // 0x00(0x08)
	int32_t AttributeIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FMeshElementAttributeValue AttributeValue; // 0x10(0x50)
};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// Size: 0x50 (Inherited: 0x00)
struct FMeshElementAttributeValue {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct EditableMesh.VertexToMove
// Size: 0x10 (Inherited: 0x00)
struct FVertexToMove {
	struct FVertexID VertexID; // 0x00(0x04)
	struct FVector NewVertexPosition; // 0x04(0x0c)
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// Size: 0x28 (Inherited: 0x00)
struct FChangeVertexInstancesForPolygon {
	struct FPolygonID PolygonID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x08(0x10)
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18(0x10)
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// Size: 0x10 (Inherited: 0x00)
struct FVertexInstancesForPolygonHole {
	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x00(0x10)
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// Size: 0x08 (Inherited: 0x00)
struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x00(0x04)
	struct FVertexInstanceID VertexInstanceID; // 0x04(0x04)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// Size: 0x28 (Inherited: 0x00)
struct FVertexAttributesForPolygon {
	struct FPolygonID PolygonID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x08(0x10)
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18(0x10)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// Size: 0x10 (Inherited: 0x00)
struct FVertexAttributesForPolygonHole {
	struct TArray<struct FMeshElementAttributeList> VertexAttributeList; // 0x00(0x10)
};

// ScriptStruct EditableMesh.AttributesForEdge
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForEdge {
	struct FEdgeID EdgeID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FMeshElementAttributeList EdgeAttributes; // 0x08(0x10)
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForVertexInstance {
	struct FVertexInstanceID VertexInstanceID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x08(0x10)
};

// ScriptStruct EditableMesh.AttributesForVertex
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForVertex {
	struct FVertexID VertexID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FMeshElementAttributeList VertexAttributes; // 0x08(0x10)
};

// ScriptStruct EditableMesh.PolygonToSplit
// Size: 0x18 (Inherited: 0x00)
struct FPolygonToSplit {
	struct FPolygonID PolygonID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVertexPair> VertexPairsToSplitAt; // 0x08(0x10)
};

// ScriptStruct EditableMesh.VertexPair
// Size: 0x08 (Inherited: 0x00)
struct FVertexPair {
	struct FVertexID VertexID0; // 0x00(0x04)
	struct FVertexID VertexID1; // 0x04(0x04)
};

// ScriptStruct EditableMesh.PolygonToCreate
// Size: 0x20 (Inherited: 0x00)
struct FPolygonToCreate {
	struct FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVertexAndAttributes> PerimeterVertices; // 0x08(0x10)
	struct FPolygonID OriginalPolygonID; // 0x18(0x04)
	enum class EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct EditableMesh.VertexAndAttributes
// Size: 0x18 (Inherited: 0x00)
struct FVertexAndAttributes {
	struct FVertexInstanceID VertexInstanceID; // 0x00(0x04)
	struct FVertexID VertexID; // 0x04(0x04)
	struct FMeshElementAttributeList PolygonVertexAttributes; // 0x08(0x10)
};

// ScriptStruct EditableMesh.EdgeToCreate
// Size: 0x20 (Inherited: 0x00)
struct FEdgeToCreate {
	struct FVertexID VertexID0; // 0x00(0x04)
	struct FVertexID VertexID1; // 0x04(0x04)
	struct FMeshElementAttributeList EdgeAttributes; // 0x08(0x10)
	struct FEdgeID OriginalEdgeID; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// Size: 0x20 (Inherited: 0x00)
struct FVertexInstanceToCreate {
	struct FVertexID VertexID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x08(0x10)
	struct FVertexInstanceID OriginalVertexInstanceID; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct EditableMesh.VertexToCreate
// Size: 0x18 (Inherited: 0x00)
struct FVertexToCreate {
	struct FMeshElementAttributeList VertexAttributes; // 0x00(0x10)
	struct FVertexID OriginalVertexID; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct EditableMesh.SubdivisionLimitData
// Size: 0x30 (Inherited: 0x00)
struct FSubdivisionLimitData {
	struct TArray<struct FVector> VertexPositions; // 0x00(0x10)
	struct TArray<struct FSubdivisionLimitSection> Sections; // 0x10(0x10)
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges; // 0x20(0x10)
};

// ScriptStruct EditableMesh.SubdividedWireEdge
// Size: 0x0c (Inherited: 0x00)
struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x00(0x04)
	int32_t EdgeVertex1PositionIndex; // 0x04(0x04)
	char UnknownData_8[0x4]; // 0x08(0x04)
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// Size: 0x10 (Inherited: 0x00)
struct FSubdivisionLimitSection {
	struct TArray<struct FSubdividedQuad> SubdividedQuads; // 0x00(0x10)
};

// ScriptStruct EditableMesh.SubdividedQuad
// Size: 0xd0 (Inherited: 0x00)
struct FSubdividedQuad {
	struct FSubdividedQuadVertex QuadVertex0; // 0x00(0x34)
	struct FSubdividedQuadVertex QuadVertex1; // 0x34(0x34)
	struct FSubdividedQuadVertex QuadVertex2; // 0x68(0x34)
	struct FSubdividedQuadVertex QuadVertex3; // 0x9c(0x34)
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// Size: 0x34 (Inherited: 0x00)
struct FSubdividedQuadVertex {
	int32_t VertexPositionIndex; // 0x00(0x04)
	struct FVector2D TextureCoordinate0; // 0x04(0x08)
	struct FVector2D TextureCoordinate1; // 0x0c(0x08)
	struct FColor VertexColor; // 0x14(0x04)
	struct FVector VertexNormal; // 0x18(0x0c)
	struct FVector VertexTangent; // 0x24(0x0c)
	float VertexBinormalSign; // 0x30(0x04)
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// Size: 0x48 (Inherited: 0x00)
struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x00(0x04)
	int32_t MaterialIndex; // 0x04(0x04)
	int32_t MaxTriangles; // 0x08(0x04)
	char UnknownData_C[0x3c]; // 0x0c(0x3c)
};

// ScriptStruct EditableMesh.RenderingPolygon
// Size: 0x18 (Inherited: 0x00)
struct FRenderingPolygon {
	struct FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices; // 0x08(0x10)
};

