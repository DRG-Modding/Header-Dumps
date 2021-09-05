// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8 {
	Vertical = 0,
	Horizontal = 1,
	Arbitrary = 2,
	OrientToGravity = 3,
	PreferInner = 4,
	Ceiling = 5,
	Floor = 6,
	Wall = 7,
	Polygons = 8,
	EMagicLeapPlaneQueryFlags_MAX = 9
};

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
enum class EMagicLeapPlaneQueryType : uint8 {
	Bulk = 0,
	Delta = 1,
	EMagicLeapPlaneQueryType_MAX = 2
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
// Size: 0x20 (Inherited: 0x00)
struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x00(0x10)
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10(0x10)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
// Size: 0x20 (Inherited: 0x00)
struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x00(0x10)
	TArray<FMagicLeapPolygon> Holes; // 0x10(0x10)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x00(0x10)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
// Size: 0x60 (Inherited: 0x00)
struct FMagicLeapPlaneResult {
	FVector PlanePosition; // 0x00(0x0c)
	FRotator PlaneOrientation; // 0x0c(0x0c)
	FRotator ContentOrientation; // 0x18(0x0c)
	FVector2D PlaneDimensions; // 0x24(0x08)
	TArray<enum class EMagicLeapPlaneQueryFlags> PlaneFlags; // 0x30(0x10)
	FGuid ID; // 0x40(0x10)
	FGuid InnerID; // 0x50(0x10)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
// Size: 0x60 (Inherited: 0x00)
struct FMagicLeapPlanesQuery {
	TArray<enum class EMagicLeapPlaneQueryFlags> Flags; // 0x00(0x10)
	UBoxComponent* SearchVolume; // 0x10(0x08)
	int32_t MaxResults; // 0x18(0x04)
	float MinHoleLength; // 0x1c(0x04)
	float MinPlaneArea; // 0x20(0x04)
	FVector SearchVolumePosition; // 0x24(0x0c)
	FQuat SearchVolumeOrientation; // 0x30(0x10)
	FVector SearchVolumeExtents; // 0x40(0x0c)
	float SimilarityThreshold; // 0x4c(0x04)
	bool bSearchVolumeTrackingSpace; // 0x50(0x01)
	bool bResultTrackingSpace; // 0x51(0x01)
};

