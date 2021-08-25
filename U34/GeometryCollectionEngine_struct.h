// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t {
	SortNone,
	SortByHighestMass,
	SortByHighestSpeed,
	SortByNearestFirst,
	Count,
	EChaosBreakingSortMethod_MAX,
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t {
	SortNone,
	SortByHighestMass,
	SortByHighestSpeed,
	SortByHighestImpulse,
	SortByNearestFirst,
	Count,
	EChaosCollisionSortMethod_MAX,
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t {
	SortNone,
	SortByHighestMass,
	SortByHighestSpeed,
	SortByNearestFirst,
	Count,
	EChaosTrailingSortMethod_MAX,
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone,
	HideWithCollision,
	HideSelected,
	HideWholeCollection,
	HideAll,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX,
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform,
	Chaos_Max,
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active,
	Chaos_DynamicState,
	Chaos_CollisionGroup,
	Chaos_Max,
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// Size: 0x50 (Inherited: 0x00)
struct FGeomComponentCacheParameters {
	enum class EGeometryCollectionCacheType CacheMode; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UGeometryCollectionCache* TargetCache; // 0x08(0x08)
	float ReverseCacheBeginTime; // 0x10(0x04)
	bool SaveCollisionData; // 0x14(0x01)
	bool DoGenerateCollisionData; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	int32_t CollisionDataSizeMax; // 0x18(0x04)
	bool DoCollisionDataSpatialHash; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	float CollisionDataSpatialHashRadius; // 0x20(0x04)
	int32_t MaxCollisionPerCell; // 0x24(0x04)
	bool SaveBreakingData; // 0x28(0x01)
	bool DoGenerateBreakingData; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	int32_t BreakingDataSizeMax; // 0x2c(0x04)
	bool DoBreakingDataSpatialHash; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float BreakingDataSpatialHashRadius; // 0x34(0x04)
	int32_t MaxBreakingPerCell; // 0x38(0x04)
	bool SaveTrailingData; // 0x3c(0x01)
	bool DoGenerateTrailingData; // 0x3d(0x01)
	char UnknownData_3E[0x2]; // 0x3e(0x02)
	int32_t TrailingDataSizeMax; // 0x40(0x04)
	float TrailingMinSpeedThreshold; // 0x44(0x04)
	float TrailingMinVolumeThreshold; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// Size: 0x58 (Inherited: 0x00)
struct FChaosCollisionEventData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	struct FVector Velocity1; // 0x18(0x0c)
	struct FVector Velocity2; // 0x24(0x0c)
	float Mass1; // 0x30(0x04)
	float Mass2; // 0x34(0x04)
	struct FVector Impulse; // 0x38(0x0c)
	char UnknownData_44[0x14]; // 0x44(0x14)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// Size: 0x1c (Inherited: 0x00)
struct FChaosBreakingEventData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Mass; // 0x18(0x04)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// Size: 0x2c (Inherited: 0x00)
struct FChaosTrailingEventData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector AngularVelocity; // 0x18(0x0c)
	float Mass; // 0x24(0x04)
	int32_t ParticleIndex; // 0x28(0x04)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x00(0x04)
	float MinRadius; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinMass; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosBreakingSortMethod SortMethod; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x00(0x04)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinImpulse; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosCollisionSortMethod SortMethod; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x00(0x04)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinAngularSpeed; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosTrailingSortMethod SortMethod; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// Size: 0x18 (Inherited: 0x00)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct AChaosSolverActor* Solver; // 0x08(0x08)
	struct AGeometryCollectionActor* GeometryCollection; // 0x10(0x08)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// Size: 0x01 (Inherited: 0x00)
struct FGeometryCollectionDebugDrawWarningMessage {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Size: 0x24 (Inherited: 0x00)
struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x00(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x04(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
	int32_t MinLevelSetResolution; // 0x08(0x04)
	int32_t MaxLevelSetResolution; // 0x0c(0x04)
	int32_t MinClusterLevelSetResolution; // 0x10(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x14(0x04)
	int32_t CollisionObjectReductionPercentage; // 0x18(0x04)
	float CollisionParticlesFraction; // 0x1c(0x04)
	int32_t MaximumCollisionParticles; // 0x20(0x04)
};

