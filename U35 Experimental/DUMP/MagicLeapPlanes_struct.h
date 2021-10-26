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
	UPROPERTY(BlueprintReadWrite) FGuid ID; 
	UPROPERTY(BlueprintReadWrite) TArray<FMagicLeapPlaneBoundary> Boundaries; 
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
// Size: 0x20 (Inherited: 0x00)
struct FMagicLeapPlaneBoundary {
	UPROPERTY(BlueprintReadWrite) FMagicLeapPolygon Polygon; 
	UPROPERTY(BlueprintReadWrite) TArray<FMagicLeapPolygon> Holes; 
};

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapPolygon {
	UPROPERTY(BlueprintReadWrite) TArray<FVector> Vertices; 
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
// Size: 0x60 (Inherited: 0x00)
struct FMagicLeapPlaneResult {
	UPROPERTY(BlueprintReadWrite) FVector PlanePosition; 
	UPROPERTY(BlueprintReadWrite) FRotator PlaneOrientation; 
	UPROPERTY(BlueprintReadWrite) FRotator ContentOrientation; 
	UPROPERTY(BlueprintReadWrite) FVector2D PlaneDimensions; 
	UPROPERTY(BlueprintReadWrite) TArray<enum class EMagicLeapPlaneQueryFlags> PlaneFlags; 
	UPROPERTY(BlueprintReadWrite) FGuid ID; 
	UPROPERTY(BlueprintReadWrite) FGuid InnerID; 
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
// Size: 0x60 (Inherited: 0x00)
struct FMagicLeapPlanesQuery {
	UPROPERTY(BlueprintReadWrite) TArray<enum class EMagicLeapPlaneQueryFlags> Flags; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* SearchVolume; 
	UPROPERTY(BlueprintReadWrite) int32_t MaxResults; 
	UPROPERTY(BlueprintReadWrite) float MinHoleLength; 
	UPROPERTY(BlueprintReadWrite) float MinPlaneArea; 
	UPROPERTY(BlueprintReadWrite) FVector SearchVolumePosition; 
	UPROPERTY(BlueprintReadWrite) FQuat SearchVolumeOrientation; 
	UPROPERTY(BlueprintReadWrite) FVector SearchVolumeExtents; 
	UPROPERTY(BlueprintReadWrite) float SimilarityThreshold; 
	UPROPERTY(BlueprintReadWrite) bool bSearchVolumeTrackingSpace; 
	UPROPERTY(BlueprintReadWrite) bool bResultTrackingSpace; 
};

