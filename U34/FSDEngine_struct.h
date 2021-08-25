// Enum FSDEngine.EPreciousMaterialOptions
enum class EPreciousMaterialOptions : uint8_t {
	TurnIntoGems,
	LeaveUntouched,
	Ignore,
	EPreciousMaterialOptions_MAX,
};

// Enum FSDEngine.ECarveFilterType
enum class ECarveFilterType : uint8_t {
	ReplaceAll,
	ReplaceEmpty,
	ReplaceSolid,
	ECarveFilterType_MAX,
};

// Enum FSDEngine.CarveOptionsCellSize
enum class CarveOptionsCellSize : uint8_t {
	CARVE_CELL_SIZE_26,
	CARVE_CELL_SIZE_51,
	CARVE_CELL_SIZE_101,
	CARVE_CELL_SIZE_201,
	CARVE_CELL_SIZE_MAX,
};

// Enum FSDEngine.ECSGModifiers
enum class ECSGModifiers : uint8_t {
	AddMaterialLayers,
	HasCachedTree,
	ECSGModifiers_MAX,
};

// Enum FSDEngine.EGeneralComb
enum class EGeneralComb : uint8_t {
	Empty,
	KeepSrc,
	KeepDest,
	Replace,
	EGeneralComb_MAX,
};

// Enum FSDEngine.EGeneralCombEmpty
enum class EGeneralCombEmpty : uint8_t {
	Empty,
	Replace,
	EGeneralCombEmpty_MAX,
};

// Enum FSDEngine.EGeneralPattern
enum class EGeneralPattern : uint8_t {
	SrcSpecific,
	DestSpecific,
	EGeneralPattern_MAX,
};

// Enum FSDEngine.EPattern
enum class EPattern : uint8_t {
	Specific,
	Precious,
	EPattern_MAX,
};

// Enum FSDEngine.EBinaryComb
enum class EBinaryComb : uint8_t {
	Empty,
	Unchanged,
	Replace,
	Burn,
	EBinaryComb_MAX,
};

// Enum FSDEngine.EEmptyBinaryComb
enum class EEmptyBinaryComb : uint8_t {
	Unchanged,
	Replace,
	EEmptyBinaryComb_MAX,
};

// Enum FSDEngine.EPreviewCellSize
enum class EPreviewCellSize : uint8_t {
	PRV_CELL_SIZE_12_6,
	PRV_CELL_SIZE_26,
	PRV_CELL_SIZE_51,
	PRV_CELL_SIZE_101,
	PRV_CELL_SIZE_201,
	PRV_CELL_SIZE_MAX,
};

// Enum FSDEngine.ESDFModulateMode
enum class ESDFModulateMode : uint8_t {
	MM_Disabled,
	MM_Single,
	MM_Loop,
	MM_MAX,
};

// Enum FSDEngine.EPathfinderResult
enum class EPathfinderResult : uint8_t {
	Success,
	Failed_StartingPointNotFound,
	Failed_EndPointNotFound,
	Failed_PointsNotConnected,
	Failed_UsedTooManyNodes,
	Failed_NotReady,
	Failed_UnknownError,
	EPathfinderResult_MAX,
};

// Enum FSDEngine.PFCollisionType
enum class PFCollisionType : uint8_t {
	SolidWalkable,
	Block,
	Danger,
	PFCollisionType_MAX,
};

// Enum FSDEngine.DeepPathFinderPreference
enum class DeepPathFinderPreference : uint8_t {
	None,
	Floor,
	Walls,
	Ceiling,
	DeepPathFinderPreference_MAX,
};

// Enum FSDEngine.DeepPathFinderSize
enum class DeepPathFinderSize : uint8_t {
	Invalid,
	Small,
	Medium,
	Large,
	DeepPathFinderSize_MAX,
};

// Enum FSDEngine.DeepPathFinderType
enum class DeepPathFinderType : uint8_t {
	Walk,
	Fly,
	MAX,
};

// ScriptStruct FSDEngine.CarveSplineSegment
// Size: 0x34 (Inherited: 0x00)
struct FCarveSplineSegment {
	struct FVector SplineStart; // 0x00(0x0c)
	struct FVector SplineStartTangent; // 0x0c(0x0c)
	struct FVector SplineEnd; // 0x18(0x0c)
	struct FVector SplineEndTangent; // 0x24(0x0c)
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
	struct FDeepCSGFloatTreePacked Tree; // 0x00(0x18)
	struct FBox AABB; // 0x18(0x1c)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct UTerrainMaterialCore*> Materials; // 0x38(0x10)
	struct TArray<struct FSmartTerrainMaterialVal> SmartMaterials; // 0x48(0x10)
};

// ScriptStruct FSDEngine.SmartTerrainMaterialVal
// Size: 0x28 (Inherited: 0x00)
struct FSmartTerrainMaterialVal {
	uint32_t IfEmpty; // 0x00(0x04)
	uint32_t IfSolid; // 0x04(0x04)
	struct TArray<uint32_t> OverrideKeys; // 0x08(0x10)
	struct TArray<uint32_t> OverrideValues; // 0x18(0x10)
};

// ScriptStruct FSDEngine.DeepCSGFloatTreePacked
// Size: 0x18 (Inherited: 0x00)
struct FDeepCSGFloatTreePacked {
	struct FDeepCSGNode Root; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> encplanes; // 0x08(0x10)
};

// ScriptStruct FSDEngine.DeepCSGNode
// Size: 0x04 (Inherited: 0x00)
struct FDeepCSGNode {
	uint32_t Val; // 0x00(0x04)
};

// ScriptStruct FSDEngine.CSGBakedChildInstanceProperties
// Size: 0x10 (Inherited: 0x00)
struct FCSGBakedChildInstanceProperties {
	struct UCSGBake* BakedCSG; // 0x00(0x08)
	int32_t VariantIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSDEngine.MeshBaseProperties
// Size: 0x01 (Inherited: 0x00)
struct FMeshBaseProperties {
	bool Enabled; // 0x00(0x01)
};

// ScriptStruct FSDEngine.CSGAddMaterialLayersProperties
// Size: 0x40 (Inherited: 0x00)
struct FCSGAddMaterialLayersProperties {
	struct TArray<struct FCSGLayers> Layers; // 0x00(0x10)
	struct FBinaryTerrainMaterialCombiner Inner; // 0x10(0x30)
};

// ScriptStruct FSDEngine.BinaryTerrainMaterialCombiner
// Size: 0x30 (Inherited: 0x00)
struct FBinaryTerrainMaterialCombiner {
	struct FEmptyBinaryMatProperties IfEmpty; // 0x00(0x10)
	struct FBinaryMatProperties IfSolid; // 0x10(0x10)
	struct TArray<struct FBinaryMatPatterns> Patterns; // 0x20(0x10)
};

// ScriptStruct FSDEngine.BinaryMatPatterns
// Size: 0x20 (Inherited: 0x00)
struct FBinaryMatPatterns {
	enum class EPattern PatternType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UTerrainMaterialCore* PatternMaterial; // 0x08(0x08)
	struct FBinaryMatProperties ReplaceWith; // 0x10(0x10)
};

// ScriptStruct FSDEngine.BinaryMatProperties
// Size: 0x10 (Inherited: 0x00)
struct FBinaryMatProperties {
	enum class EBinaryComb Result; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UTerrainMaterialCore* Material; // 0x08(0x08)
};

// ScriptStruct FSDEngine.EmptyBinaryMatProperties
// Size: 0x10 (Inherited: 0x00)
struct FEmptyBinaryMatProperties {
	enum class EEmptyBinaryComb Result; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UTerrainMaterialCore* Material; // 0x08(0x08)
};

// ScriptStruct FSDEngine.CSGLayers
// Size: 0x38 (Inherited: 0x00)
struct FCSGLayers {
	float Offset; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FBinaryTerrainMaterialCombiner Above; // 0x08(0x30)
};

// ScriptStruct FSDEngine.GeneralTerrainMaterialCombiner
// Size: 0x50 (Inherited: 0x00)
struct FGeneralTerrainMaterialCombiner {
	struct FGeneralMatPropertiesEmpty IfBothEmpty; // 0x00(0x10)
	struct TArray<struct FGeneralMatPatterns> Patterns; // 0x10(0x10)
	struct FGeneralMatProperties IfBothSolid; // 0x20(0x10)
	struct FGeneralMatProperties IfSrcSolid; // 0x30(0x10)
	struct FGeneralMatProperties IfDestSolid; // 0x40(0x10)
};

// ScriptStruct FSDEngine.GeneralMatProperties
// Size: 0x10 (Inherited: 0x00)
struct FGeneralMatProperties {
	enum class EGeneralComb Result; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UTerrainMaterialCore* Material; // 0x08(0x08)
};

// ScriptStruct FSDEngine.GeneralMatPatterns
// Size: 0x20 (Inherited: 0x00)
struct FGeneralMatPatterns {
	enum class EGeneralPattern PatternType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UTerrainMaterialCore* PatternMaterial; // 0x08(0x08)
	struct FGeneralMatProperties ReplaceWith; // 0x10(0x10)
};

// ScriptStruct FSDEngine.GeneralMatPropertiesEmpty
// Size: 0x10 (Inherited: 0x00)
struct FGeneralMatPropertiesEmpty {
	enum class EGeneralCombEmpty Result; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UTerrainMaterialCore* Material; // 0x08(0x08)
};

// ScriptStruct FSDEngine.BakeSettings
// Size: 0x140 (Inherited: 0x00)
struct FBakeSettings {
	struct TMap<struct FName, bool> Bools; // 0x00(0x50)
	struct TMap<struct FName, int32_t> Ints; // 0x50(0x50)
	struct TMap<struct FName, float> Floats; // 0xa0(0x50)
	struct TMap<struct FName, struct FVector> Vectors; // 0xf0(0x50)
};

// ScriptStruct FSDEngine.MeshCellNoiseProperties
// Size: 0x1c (Inherited: 0x00)
struct FMeshCellNoiseProperties {
	struct FVector CellSize; // 0x00(0x0c)
	float CellOffsetFactor; // 0x0c(0x04)
	float InsideFraction; // 0x10(0x04)
	float Distance; // 0x14(0x04)
	int32_t Seed; // 0x18(0x04)
};

// ScriptStruct FSDEngine.CSGChildInstanceProperties
// Size: 0x150 (Inherited: 0x00)
struct FCSGChildInstanceProperties {
	struct ACSGBuilder* Mesh; // 0x00(0x08)
	struct FBakeSettings Settings; // 0x08(0x140)
	int32_t Seed; // 0x148(0x04)
	char UnknownData_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct FSDEngine.CSGConvexColliderProperties
// Size: 0x08 (Inherited: 0x00)
struct FCSGConvexColliderProperties {
	struct UStaticMesh* Collider; // 0x00(0x08)
};

// ScriptStruct FSDEngine.MeshLayerProperties
// Size: 0x28 (Inherited: 0x00)
struct FMeshLayerProperties {
	struct UTerrainMaterialCore* StartMaterial; // 0x00(0x08)
	struct FBox BoundingBox; // 0x08(0x1c)
	char UnknownData_24[0x4]; // 0x24(0x04)
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
	struct FVector DirectionA; // 0x08(0x0c)
	struct FVector DirectionB; // 0x14(0x0c)
};

// ScriptStruct FSDEngine.CSGRandomDisableProperties
// Size: 0x04 (Inherited: 0x00)
struct FCSGRandomDisableProperties {
	float DisableProbability; // 0x00(0x04)
};

// ScriptStruct FSDEngine.CSGRandomizeTransformProperties
// Size: 0x54 (Inherited: 0x00)
struct FCSGRandomizeTransformProperties {
	struct FBox Translation; // 0x00(0x1c)
	float RotationMinZ; // 0x1c(0x04)
	float RotationMaxZ; // 0x20(0x04)
	float RotationMinY; // 0x24(0x04)
	float RotationMaxY; // 0x28(0x04)
	float RotationMinX; // 0x2c(0x04)
	float RotationMaxX; // 0x30(0x04)
	struct FVector ScaleMin; // 0x34(0x0c)
	struct FVector ScaleMax; // 0x40(0x0c)
	bool ScaleAxesIndependent; // 0x4c(0x01)
	bool DisableRandomize; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
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
	struct FVector HalfSize; // 0x00(0x0c)
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
	struct FBox ElementBox; // 0x00(0x1c)
	bool ForceZUp; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct FSDEngine.RemappedProperties
// Size: 0x01 (Inherited: 0x00)
struct FRemappedProperties {
	enum class EPreviewCellSize CellSize; // 0x00(0x01)
};

// ScriptStruct FSDEngine.CSGSDFModulatedInstanceProperties
// Size: 0x2b0 (Inherited: 0x00)
struct FCSGSDFModulatedInstanceProperties {
	struct ASDFBuilder* SDF; // 0x00(0x08)
	struct ASDFBuilder* ModulateSDF; // 0x08(0x08)
	enum class EPreviewCellSize CellSize; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct FBakeSettings SDFSettings; // 0x18(0x140)
	struct FBakeSettings ModulateSettings; // 0x158(0x140)
	int32_t Seed; // 0x298(0x04)
	enum class ESDFModulateMode ModulateMode; // 0x29c(0x01)
	char UnknownData_29D[0x3]; // 0x29d(0x03)
	struct TArray<struct FSDFModulateLayer> ModulateLayers; // 0x2a0(0x10)
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
	struct ASDFBuilder* SDF; // 0x00(0x08)
	enum class EPreviewCellSize CellSize; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FBakeSettings Settings; // 0x10(0x140)
	int32_t Seed; // 0x150(0x04)
	char UnknownData_154[0x4]; // 0x154(0x04)
};

// ScriptStruct FSDEngine.VoronoiProperties
// Size: 0x1c (Inherited: 0x00)
struct FVoronoiProperties {
	struct FVector HalfSize; // 0x00(0x0c)
	int32_t NumPoints; // 0x0c(0x04)
	int32_t Seed; // 0x10(0x04)
	float Distance; // 0x14(0x04)
	bool Inverted; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct FSDEngine.CSGSTLProperties
// Size: 0x08 (Inherited: 0x00)
struct FCSGSTLProperties {
	struct UStaticMeshCarver* Mesh; // 0x00(0x08)
};

// ScriptStruct FSDEngine.DeepCSGFloatTree
// Size: 0x18 (Inherited: 0x00)
struct FDeepCSGFloatTree {
	struct FDeepCSGNode Root; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FDeepCSGFloatPlane> Planes; // 0x08(0x10)
};

// ScriptStruct FSDEngine.DeepCSGFloatPlane
// Size: 0x20 (Inherited: 0x00)
struct FDeepCSGFloatPlane {
	struct FVector4 Plane; // 0x00(0x10)
	struct FDeepCSGNode Top; // 0x10(0x04)
	struct FDeepCSGNode Bottom; // 0x14(0x04)
	char UnknownData_18[0x8]; // 0x18(0x08)
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
	char UnknownData_0[0x48]; // 0x00(0x48)
};

// ScriptStruct FSDEngine.DeepCSGTreeOperations
// Size: 0x01 (Inherited: 0x00)
struct FDeepCSGTreeOperations {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSDEngine.DeepCSGUtils
// Size: 0x01 (Inherited: 0x00)
struct FDeepCSGUtils {
	char UnknownData_0[0x1]; // 0x00(0x01)
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
	struct FEncodedChunkId ChunkId; // 0x00(0x04)
	uint16_t cellOffset; // 0x04(0x02)
	char UnknownData_6[0x2]; // 0x06(0x02)
};

// ScriptStruct FSDEngine.EncodedChunkId
// Size: 0x04 (Inherited: 0x00)
struct FEncodedChunkId {
	uint32_t ID; // 0x00(0x04)
};

// ScriptStruct FSDEngine.ChunckIDAndOffsetBox
// Size: 0x12 (Inherited: 0x00)
struct FChunckIDAndOffsetBox {
	struct FChunkId ChunkId; // 0x00(0x06)
	struct FChunkOffset minOffset; // 0x06(0x06)
	struct FChunkOffset maxOffset; // 0x0c(0x06)
};

// ScriptStruct FSDEngine.ChunckIDAndOffset
// Size: 0x0c (Inherited: 0x00)
struct FChunckIDAndOffset {
	struct FChunkId ChunkId; // 0x00(0x06)
	struct FChunkOffset Offset; // 0x06(0x06)
};

// ScriptStruct FSDEngine.CellBox
// Size: 0x0c (Inherited: 0x00)
struct FCellBox {
	struct FCellId Min; // 0x00(0x06)
	struct FCellId Max; // 0x06(0x06)
};

// ScriptStruct FSDEngine.SDFHeightMaproperties
// Size: 0x0c (Inherited: 0x00)
struct FSDFHeightMaproperties {
	struct FVector Scale; // 0x00(0x0c)
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
	char UnknownData_5[0x3]; // 0x05(0x03)
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
	struct FBox Translation; // 0x00(0x1c)
	float RotationMinZ; // 0x1c(0x04)
	float RotationMaxZ; // 0x20(0x04)
	float RotationMinY; // 0x24(0x04)
	float RotationMaxY; // 0x28(0x04)
	float RotationMinX; // 0x2c(0x04)
	float RotationMaxX; // 0x30(0x04)
	struct FVector ScaleMin; // 0x34(0x0c)
	struct FVector ScaleMax; // 0x40(0x0c)
	bool ScaleAxesIndependent; // 0x4c(0x01)
	bool DisableRandomize; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	int32_t Seed; // 0x50(0x04)
};

// ScriptStruct FSDEngine.SDFTorusProperties
// Size: 0x10 (Inherited: 0x00)
struct FSDFTorusProperties {
	float Radius; // 0x00(0x04)
	float TubeRadius; // 0x04(0x04)
	struct FName SizeOverrideName; // 0x08(0x08)
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
	struct FVector HalfSize; // 0x00(0x0c)
};

// ScriptStruct FSDEngine.SDFSphereProperties
// Size: 0x0c (Inherited: 0x00)
struct FSDFSphereProperties {
	float Radius; // 0x00(0x04)
	struct FName RadiusOverrideName; // 0x04(0x08)
};

