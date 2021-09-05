// Enum FSDEngine.EPreciousMaterialOptions
enum class EPreciousMaterialOptions : uint8 {
	TurnIntoGems = 0,
	LeaveUntouched = 1,
	Ignore = 2,
	EPreciousMaterialOptions_MAX = 3
};

// Enum FSDEngine.ECarveFilterType
enum class ECarveFilterType : uint8 {
	ReplaceAll = 0,
	ReplaceEmpty = 1,
	ReplaceSolid = 2,
	ECarveFilterType_MAX = 3
};

// Enum FSDEngine.CarveOptionsCellSize
enum class CarveOptionsCellSize : uint8 {
	CARVE_CELL_SIZE_26 = 0,
	CARVE_CELL_SIZE_51 = 1,
	CARVE_CELL_SIZE_101 = 2,
	CARVE_CELL_SIZE_201 = 3,
	CARVE_CELL_SIZE_MAX = 4
};

// Enum FSDEngine.ECSGModifiers
enum class ECSGModifiers : uint8 {
	AddMaterialLayers = 0,
	HasCachedTree = 1,
	ECSGModifiers_MAX = 2
};

// Enum FSDEngine.EGeneralComb
enum class EGeneralComb : uint8 {
	Empty = 0,
	KeepSrc = 1,
	KeepDest = 2,
	Replace = 3,
	EGeneralComb_MAX = 4
};

// Enum FSDEngine.EGeneralCombEmpty
enum class EGeneralCombEmpty : uint8 {
	Empty = 0,
	Replace = 1,
	EGeneralCombEmpty_MAX = 2
};

// Enum FSDEngine.EGeneralPattern
enum class EGeneralPattern : uint8 {
	SrcSpecific = 0,
	DestSpecific = 1,
	EGeneralPattern_MAX = 2
};

// Enum FSDEngine.EPattern
enum class EPattern : uint8 {
	Specific = 0,
	Precious = 1,
	EPattern_MAX = 2
};

// Enum FSDEngine.EBinaryComb
enum class EBinaryComb : uint8 {
	Empty = 0,
	Unchanged = 1,
	Replace = 2,
	Burn = 3,
	EBinaryComb_MAX = 4
};

// Enum FSDEngine.EEmptyBinaryComb
enum class EEmptyBinaryComb : uint8 {
	Unchanged = 0,
	Replace = 1,
	EEmptyBinaryComb_MAX = 2
};

// Enum FSDEngine.EPreviewCellSize
enum class EPreviewCellSize : uint8 {
	PRV_CELL_SIZE_12_6 = 0,
	PRV_CELL_SIZE_26 = 1,
	PRV_CELL_SIZE_51 = 2,
	PRV_CELL_SIZE_101 = 3,
	PRV_CELL_SIZE_201 = 4,
	PRV_CELL_SIZE_MAX = 5
};

// Enum FSDEngine.ESDFModulateMode
enum class ESDFModulateMode : uint8 {
	MM_Disabled = 0,
	MM_Single = 1,
	MM_Loop = 2,
	MM_MAX = 3
};

// Enum FSDEngine.EPathfinderResult
enum class EPathfinderResult : uint8 {
	Success = 0,
	Failed_StartingPointNotFound = 1,
	Failed_EndPointNotFound = 2,
	Failed_PointsNotConnected = 3,
	Failed_UsedTooManyNodes = 4,
	Failed_NotReady = 5,
	Failed_UnknownError = 6,
	EPathfinderResult_MAX = 7
};

// Enum FSDEngine.PFCollisionType
enum class PFCollisionType : uint8 {
	SolidWalkable = 0,
	Block = 1,
	Danger = 2,
	PFCollisionType_MAX = 3
};

// Enum FSDEngine.DeepPathFinderPreference
enum class DeepPathFinderPreference : uint8 {
	None = 0,
	Floor = 1,
	Walls = 2,
	Ceiling = 3,
	DeepPathFinderPreference_MAX = 4
};

// Enum FSDEngine.DeepPathFinderSize
enum class DeepPathFinderSize : uint8 {
	Invalid = 0,
	Small = 3,
	Medium = 2,
	Large = 1,
	DeepPathFinderSize_MAX = 4
};

// Enum FSDEngine.DeepPathFinderType
enum class DeepPathFinderType : uint8 {
	Walk = 0,
	Fly = 1,
	MAX = 2
};

// ScriptStruct FSDEngine.CarveSplineSegment
// Size: 0x34 (Inherited: 0x00)
struct FCarveSplineSegment {
	FVector SplineStart; // 0x00(0x0c)
	FVector SplineStartTangent; // 0x0c(0x0c)
	FVector SplineEnd; // 0x18(0x0c)
	FVector SplineEndTangent; // 0x24(0x0c)
	float Radius; // 0x30(0x04)
};

// ScriptStruct FSDEngine.MatrixWithExactSync
// Size: 0x40 (Inherited: 0x00)
struct FMatrixWithExactSync {
	float Values[0x10]; // 0x00(0x40)
};

// ScriptStruct FSDEngine.BakeEntry
// Size: 0x58 (Inherited: 0x00)
struct FBakeEntry {
	FDeepCSGFloatTreePacked Tree; // 0x00(0x18)
	FBox AABB; // 0x18(0x1c)
	TArray<UTerrainMaterialCore*> Materials; // 0x38(0x10)
	TArray<FSmartTerrainMaterialVal> SmartMaterials; // 0x48(0x10)
};

// ScriptStruct FSDEngine.SmartTerrainMaterialVal
// Size: 0x28 (Inherited: 0x00)
struct FSmartTerrainMaterialVal {
	uint32_t IfEmpty; // 0x00(0x04)
	uint32_t IfSolid; // 0x04(0x04)
	TArray<uint32_t> OverrideKeys; // 0x08(0x10)
	TArray<uint32_t> OverrideValues; // 0x18(0x10)
};

// ScriptStruct FSDEngine.DeepCSGFloatTreePacked
// Size: 0x18 (Inherited: 0x00)
struct FDeepCSGFloatTreePacked {
	FDeepCSGNode Root; // 0x00(0x04)
	TArray<int32_t> encplanes; // 0x08(0x10)
};

// ScriptStruct FSDEngine.DeepCSGNode
// Size: 0x04 (Inherited: 0x00)
struct FDeepCSGNode {
	uint32_t Val; // 0x00(0x04)
};

// ScriptStruct FSDEngine.CSGBakedChildInstanceProperties
// Size: 0x10 (Inherited: 0x00)
struct FCSGBakedChildInstanceProperties {
	UCSGBake* BakedCSG; // 0x00(0x08)
	int32_t VariantIndex; // 0x08(0x04)
};

// ScriptStruct FSDEngine.MeshBaseProperties
// Size: 0x01 (Inherited: 0x00)
struct FMeshBaseProperties {
	bool Enabled; // 0x00(0x01)
};

// ScriptStruct FSDEngine.CSGAddMaterialLayersProperties
// Size: 0x40 (Inherited: 0x00)
struct FCSGAddMaterialLayersProperties {
	TArray<FCSGLayers> Layers; // 0x00(0x10)
	FBinaryTerrainMaterialCombiner Inner; // 0x10(0x30)
};

// ScriptStruct FSDEngine.BinaryTerrainMaterialCombiner
// Size: 0x30 (Inherited: 0x00)
struct FBinaryTerrainMaterialCombiner {
	FEmptyBinaryMatProperties IfEmpty; // 0x00(0x10)
	FBinaryMatProperties IfSolid; // 0x10(0x10)
	TArray<FBinaryMatPatterns> Patterns; // 0x20(0x10)
};

// ScriptStruct FSDEngine.BinaryMatPatterns
// Size: 0x20 (Inherited: 0x00)
struct FBinaryMatPatterns {
	enum class EPattern PatternType; // 0x00(0x01)
	UTerrainMaterialCore* PatternMaterial; // 0x08(0x08)
	FBinaryMatProperties ReplaceWith; // 0x10(0x10)
};

// ScriptStruct FSDEngine.BinaryMatProperties
// Size: 0x10 (Inherited: 0x00)
struct FBinaryMatProperties {
	enum class EBinaryComb Result; // 0x00(0x01)
	UTerrainMaterialCore* Material; // 0x08(0x08)
};

// ScriptStruct FSDEngine.EmptyBinaryMatProperties
// Size: 0x10 (Inherited: 0x00)
struct FEmptyBinaryMatProperties {
	enum class EEmptyBinaryComb Result; // 0x00(0x01)
	UTerrainMaterialCore* Material; // 0x08(0x08)
};

// ScriptStruct FSDEngine.CSGLayers
// Size: 0x38 (Inherited: 0x00)
struct FCSGLayers {
	float Offset; // 0x00(0x04)
	FBinaryTerrainMaterialCombiner Above; // 0x08(0x30)
};

// ScriptStruct FSDEngine.GeneralTerrainMaterialCombiner
// Size: 0x50 (Inherited: 0x00)
struct FGeneralTerrainMaterialCombiner {
	FGeneralMatPropertiesEmpty IfBothEmpty; // 0x00(0x10)
	TArray<FGeneralMatPatterns> Patterns; // 0x10(0x10)
	FGeneralMatProperties IfBothSolid; // 0x20(0x10)
	FGeneralMatProperties IfSrcSolid; // 0x30(0x10)
	FGeneralMatProperties IfDestSolid; // 0x40(0x10)
};

// ScriptStruct FSDEngine.GeneralMatProperties
// Size: 0x10 (Inherited: 0x00)
struct FGeneralMatProperties {
	enum class EGeneralComb Result; // 0x00(0x01)
	UTerrainMaterialCore* Material; // 0x08(0x08)
};

// ScriptStruct FSDEngine.GeneralMatPatterns
// Size: 0x20 (Inherited: 0x00)
struct FGeneralMatPatterns {
	enum class EGeneralPattern PatternType; // 0x00(0x01)
	UTerrainMaterialCore* PatternMaterial; // 0x08(0x08)
	FGeneralMatProperties ReplaceWith; // 0x10(0x10)
};

// ScriptStruct FSDEngine.GeneralMatPropertiesEmpty
// Size: 0x10 (Inherited: 0x00)
struct FGeneralMatPropertiesEmpty {
	enum class EGeneralCombEmpty Result; // 0x00(0x01)
	UTerrainMaterialCore* Material; // 0x08(0x08)
};

// ScriptStruct FSDEngine.BakeSettings
// Size: 0x140 (Inherited: 0x00)
struct FBakeSettings {
	TMap<FName, bool> Bools; // 0x00(0x50)
	TMap<FName, int32_t> Ints; // 0x50(0x50)
	TMap<FName, float> Floats; // 0xa0(0x50)
	TMap<FName, FVector> Vectors; // 0xf0(0x50)
};

// ScriptStruct FSDEngine.MeshCellNoiseProperties
// Size: 0x1c (Inherited: 0x00)
struct FMeshCellNoiseProperties {
	FVector CellSize; // 0x00(0x0c)
	float CellOffsetFactor; // 0x0c(0x04)
	float InsideFraction; // 0x10(0x04)
	float Distance; // 0x14(0x04)
	int32_t Seed; // 0x18(0x04)
};

// ScriptStruct FSDEngine.CSGChildInstanceProperties
// Size: 0x150 (Inherited: 0x00)
struct FCSGChildInstanceProperties {
	ACSGBuilder* Mesh; // 0x00(0x08)
	FBakeSettings Settings; // 0x08(0x140)
	int32_t Seed; // 0x148(0x04)
};

// ScriptStruct FSDEngine.CSGConvexColliderProperties
// Size: 0x08 (Inherited: 0x00)
struct FCSGConvexColliderProperties {
	UStaticMesh* Collider; // 0x00(0x08)
};

// ScriptStruct FSDEngine.MeshLayerProperties
// Size: 0x28 (Inherited: 0x00)
struct FMeshLayerProperties {
	UTerrainMaterialCore* StartMaterial; // 0x00(0x08)
	FBox BoundingBox; // 0x08(0x1c)
};

// ScriptStruct FSDEngine.CSGCircleDuplicatorProperties
// Size: 0x08 (Inherited: 0x00)
struct FCSGCircleDuplicatorProperties {
	int32_t Num; // 0x00(0x04)
	float Radius; // 0x04(0x04)
};

// ScriptStruct FSDEngine.CSGGridDuplicatorProperties
// Size: 0x20 (Inherited: 0x00)
struct FCSGGridDuplicatorProperties {
	int32_t NumA; // 0x00(0x04)
	int32_t NumB; // 0x04(0x04)
	FVector DirectionA; // 0x08(0x0c)
	FVector DirectionB; // 0x14(0x0c)
};

// ScriptStruct FSDEngine.CSGRandomDisableProperties
// Size: 0x04 (Inherited: 0x00)
struct FCSGRandomDisableProperties {
	float DisableProbability; // 0x00(0x04)
};

// ScriptStruct FSDEngine.CSGRandomizeTransformProperties
// Size: 0x54 (Inherited: 0x00)
struct FCSGRandomizeTransformProperties {
	FBox Translation; // 0x00(0x1c)
	float RotationMinZ; // 0x1c(0x04)
	float RotationMaxZ; // 0x20(0x04)
	float RotationMinY; // 0x24(0x04)
	float RotationMaxY; // 0x28(0x04)
	float RotationMinX; // 0x2c(0x04)
	float RotationMaxX; // 0x30(0x04)
	FVector ScaleMin; // 0x34(0x0c)
	FVector ScaleMax; // 0x40(0x0c)
	bool ScaleAxesIndependent; // 0x4c(0x01)
	bool DisableRandomize; // 0x4d(0x01)
	int32_t Seed; // 0x50(0x04)
};

// ScriptStruct FSDEngine.CSGSphereProperties
// Size: 0x14 (Inherited: 0x00)
struct FCSGSphereProperties {
	float Radius; // 0x00(0x04)
	float AngleTop; // 0x04(0x04)
	float AngleBottom; // 0x08(0x04)
	int32_t SidesTopBottom; // 0x0c(0x04)
	int32_t Sides; // 0x10(0x04)
};

// ScriptStruct FSDEngine.CSGConeProperties
// Size: 0x10 (Inherited: 0x00)
struct FCSGConeProperties {
	float Height; // 0x00(0x04)
	float RadiusTop; // 0x04(0x04)
	float RadiusBottom; // 0x08(0x04)
	int32_t Sides; // 0x0c(0x04)
};

// ScriptStruct FSDEngine.CSGCylinderProperties
// Size: 0x0c (Inherited: 0x00)
struct FCSGCylinderProperties {
	float Height; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	int32_t Sides; // 0x08(0x04)
};

// ScriptStruct FSDEngine.MeshBoxProperties
// Size: 0x14 (Inherited: 0x00)
struct FMeshBoxProperties {
	FVector HalfSize; // 0x00(0x0c)
	int32_t BevelSegments; // 0x0c(0x04)
	float BevelSize; // 0x10(0x04)
};

// ScriptStruct FSDEngine.ConvexNoiseProperties
// Size: 0x0c (Inherited: 0x00)
struct FConvexNoiseProperties {
	float Amplitude; // 0x00(0x04)
	float GridSize; // 0x04(0x04)
	int32_t Seed; // 0x08(0x04)
};

// ScriptStruct FSDEngine.SplineModProperties
// Size: 0x20 (Inherited: 0x00)
struct FSplineModProperties {
	FBox ElementBox; // 0x00(0x1c)
	bool ForceZUp; // 0x1c(0x01)
};

// ScriptStruct FSDEngine.RemappedProperties
// Size: 0x01 (Inherited: 0x00)
struct FRemappedProperties {
	enum class EPreviewCellSize CellSize; // 0x00(0x01)
};

// ScriptStruct FSDEngine.CSGSDFModulatedInstanceProperties
// Size: 0x2b0 (Inherited: 0x00)
struct FCSGSDFModulatedInstanceProperties {
	ASDFBuilder* SDF; // 0x00(0x08)
	ASDFBuilder* ModulateSDF; // 0x08(0x08)
	enum class EPreviewCellSize CellSize; // 0x10(0x01)
	FBakeSettings SDFSettings; // 0x18(0x140)
	FBakeSettings ModulateSettings; // 0x158(0x140)
	int32_t Seed; // 0x298(0x04)
	enum class ESDFModulateMode ModulateMode; // 0x29c(0x01)
	TArray<FSDFModulateLayer> ModulateLayers; // 0x2a0(0x10)
};

// ScriptStruct FSDEngine.SDFModulateLayer
// Size: 0x08 (Inherited: 0x00)
struct FSDFModulateLayer {
	float ModulateDistance; // 0x00(0x04)
	float SDFOffset; // 0x04(0x04)
};

// ScriptStruct FSDEngine.CSGSDFInstanceProperties
// Size: 0x158 (Inherited: 0x00)
struct FCSGSDFInstanceProperties {
	ASDFBuilder* SDF; // 0x00(0x08)
	enum class EPreviewCellSize CellSize; // 0x08(0x01)
	FBakeSettings Settings; // 0x10(0x140)
	int32_t Seed; // 0x150(0x04)
};

// ScriptStruct FSDEngine.VoronoiProperties
// Size: 0x1c (Inherited: 0x00)
struct FVoronoiProperties {
	FVector HalfSize; // 0x00(0x0c)
	int32_t NumPoints; // 0x0c(0x04)
	int32_t Seed; // 0x10(0x04)
	float Distance; // 0x14(0x04)
	bool Inverted; // 0x18(0x01)
};

// ScriptStruct FSDEngine.CSGSTLProperties
// Size: 0x08 (Inherited: 0x00)
struct FCSGSTLProperties {
	UStaticMeshCarver* Mesh; // 0x00(0x08)
};

// ScriptStruct FSDEngine.DeepCSGFloatTree
// Size: 0x18 (Inherited: 0x00)
struct FDeepCSGFloatTree {
	FDeepCSGNode Root; // 0x00(0x04)
	TArray<FDeepCSGFloatPlane> Planes; // 0x08(0x10)
};

// ScriptStruct FSDEngine.DeepCSGFloatPlane
// Size: 0x20 (Inherited: 0x00)
struct FDeepCSGFloatPlane {
	FVector4 Plane; // 0x00(0x10)
	FDeepCSGNode Top; // 0x10(0x04)
	FDeepCSGNode Bottom; // 0x14(0x04)
};

// ScriptStruct FSDEngine.ChunkOffset
// Size: 0x06 (Inherited: 0x00)
struct FChunkOffset {
	int16_t X; // 0x00(0x02)
	int16_t Y; // 0x02(0x02)
	int16_t Z; // 0x04(0x02)
};

// ScriptStruct FSDEngine.ChunkId
// Size: 0x06 (Inherited: 0x00)
struct FChunkId {
	int16_t X; // 0x00(0x02)
	int16_t Y; // 0x02(0x02)
	int16_t Z; // 0x04(0x02)
};

// ScriptStruct FSDEngine.CellId
// Size: 0x06 (Inherited: 0x00)
struct FCellId {
	int16_t X; // 0x00(0x02)
	int16_t Y; // 0x02(0x02)
	int16_t Z; // 0x04(0x02)
};

// ScriptStruct FSDEngine.DeepCSGTree
// Size: 0x48 (Inherited: 0x00)
struct FDeepCSGTree {
};

// ScriptStruct FSDEngine.DeepCSGTreeOperations
// Size: 0x01 (Inherited: 0x00)
struct FDeepCSGTreeOperations {
};

// ScriptStruct FSDEngine.DeepCSGUtils
// Size: 0x01 (Inherited: 0x00)
struct FDeepCSGUtils {
};

// ScriptStruct FSDEngine.LinearCellId
// Size: 0x06 (Inherited: 0x00)
struct FLinearCellId {
	uint16_t X; // 0x00(0x02)
	uint16_t Y; // 0x02(0x02)
	uint16_t Z; // 0x04(0x02)
};

// ScriptStruct FSDEngine.EncodedChunkCellId
// Size: 0x08 (Inherited: 0x00)
struct FEncodedChunkCellId {
	FEncodedChunkId ChunkId; // 0x00(0x04)
	uint16_t cellOffset; // 0x04(0x02)
};

// ScriptStruct FSDEngine.EncodedChunkId
// Size: 0x04 (Inherited: 0x00)
struct FEncodedChunkId {
	uint32_t ID; // 0x00(0x04)
};

// ScriptStruct FSDEngine.ChunckIDAndOffsetBox
// Size: 0x12 (Inherited: 0x00)
struct FChunckIDAndOffsetBox {
	FChunkId ChunkId; // 0x00(0x06)
	FChunkOffset minOffset; // 0x06(0x06)
	FChunkOffset maxOffset; // 0x0c(0x06)
};

// ScriptStruct FSDEngine.ChunckIDAndOffset
// Size: 0x0c (Inherited: 0x00)
struct FChunckIDAndOffset {
	FChunkId ChunkId; // 0x00(0x06)
	FChunkOffset Offset; // 0x06(0x06)
};

// ScriptStruct FSDEngine.CellBox
// Size: 0x0c (Inherited: 0x00)
struct FCellBox {
	FCellId Min; // 0x00(0x06)
	FCellId Max; // 0x06(0x06)
};

// ScriptStruct FSDEngine.SDFHeightMaproperties
// Size: 0x0c (Inherited: 0x00)
struct FSDFHeightMaproperties {
	FVector Scale; // 0x00(0x0c)
};

// ScriptStruct FSDEngine.SDFOnionProperties
// Size: 0x04 (Inherited: 0x00)
struct FSDFOnionProperties {
	float Thickness; // 0x00(0x04)
};

// ScriptStruct FSDEngine.SDFSmoothingProperties
// Size: 0x08 (Inherited: 0x00)
struct FSDFSmoothingProperties {
	float SmoothingDist; // 0x00(0x04)
	bool SmoothingEnabled; // 0x04(0x01)
};

// ScriptStruct FSDEngine.SDFModifierProperties
// Size: 0x0c (Inherited: 0x00)
struct FSDFModifierProperties {
	float Offset; // 0x00(0x04)
	float CellNoise; // 0x04(0x04)
	int32_t Seed; // 0x08(0x04)
};

// ScriptStruct FSDEngine.SDFBaseProperties
// Size: 0x01 (Inherited: 0x00)
struct FSDFBaseProperties {
	bool Enabled; // 0x00(0x01)
};

// ScriptStruct FSDEngine.SDFRandomDisableProperties
// Size: 0x04 (Inherited: 0x00)
struct FSDFRandomDisableProperties {
	float DisableProbability; // 0x00(0x04)
};

// ScriptStruct FSDEngine.SDFRandomizeTransformProperties
// Size: 0x54 (Inherited: 0x00)
struct FSDFRandomizeTransformProperties {
	FBox Translation; // 0x00(0x1c)
	float RotationMinZ; // 0x1c(0x04)
	float RotationMaxZ; // 0x20(0x04)
	float RotationMinY; // 0x24(0x04)
	float RotationMaxY; // 0x28(0x04)
	float RotationMinX; // 0x2c(0x04)
	float RotationMaxX; // 0x30(0x04)
	FVector ScaleMin; // 0x34(0x0c)
	FVector ScaleMax; // 0x40(0x0c)
	bool ScaleAxesIndependent; // 0x4c(0x01)
	bool DisableRandomize; // 0x4d(0x01)
	int32_t Seed; // 0x50(0x04)
};

// ScriptStruct FSDEngine.SDFTorusProperties
// Size: 0x10 (Inherited: 0x00)
struct FSDFTorusProperties {
	float Radius; // 0x00(0x04)
	float TubeRadius; // 0x04(0x04)
	FName SizeOverrideName; // 0x08(0x08)
};

// ScriptStruct FSDEngine.SDFCapsuleProperties
// Size: 0x08 (Inherited: 0x00)
struct FSDFCapsuleProperties {
	float HalfLength; // 0x00(0x04)
	float Radius; // 0x04(0x04)
};

// ScriptStruct FSDEngine.SDFCylinderProperties
// Size: 0x08 (Inherited: 0x00)
struct FSDFCylinderProperties {
	float HalfLength; // 0x00(0x04)
	float Radius; // 0x04(0x04)
};

// ScriptStruct FSDEngine.SDFBoxProperties
// Size: 0x0c (Inherited: 0x00)
struct FSDFBoxProperties {
	FVector HalfSize; // 0x00(0x0c)
};

// ScriptStruct FSDEngine.SDFSphereProperties
// Size: 0x0c (Inherited: 0x00)
struct FSDFSphereProperties {
	float Radius; // 0x00(0x04)
	FName RadiusOverrideName; // 0x04(0x08)
};

