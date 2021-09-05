// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8 {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2
};

// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8 {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EWeightMapTargetCommon_MAX = 5
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// Size: 0xd4 (Inherited: 0x00)
struct FClothConfig_Legacy {
	enum class EClothingWindMethod_Legacy WindMethod; // 0x00(0x01)
	FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x04(0x10)
	FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14(0x10)
	FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24(0x10)
	FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34(0x10)
	float SelfCollisionRadius; // 0x44(0x04)
	float SelfCollisionStiffness; // 0x48(0x04)
	float SelfCollisionCullScale; // 0x4c(0x04)
	FVector Damping; // 0x50(0x0c)
	float Friction; // 0x5c(0x04)
	float WindDragCoefficient; // 0x60(0x04)
	float WindLiftCoefficient; // 0x64(0x04)
	FVector LinearDrag; // 0x68(0x0c)
	FVector AngularDrag; // 0x74(0x0c)
	FVector LinearInertiaScale; // 0x80(0x0c)
	FVector AngularInertiaScale; // 0x8c(0x0c)
	FVector CentrifugalInertiaScale; // 0x98(0x0c)
	float SolverFrequency; // 0xa4(0x04)
	float StiffnessFrequency; // 0xa8(0x04)
	float GravityScale; // 0xac(0x04)
	FVector GravityOverride; // 0xb0(0x0c)
	bool bUseGravityOverride; // 0xbc(0x01)
	float TetherStiffness; // 0xc0(0x04)
	float TetherLimit; // 0xc4(0x04)
	float CollisionThickness; // 0xc8(0x04)
	float AnimDriveSpringStiffness; // 0xcc(0x04)
	float AnimDriveDamperStiffness; // 0xd0(0x04)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// Size: 0x10 (Inherited: 0x00)
struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x00(0x04)
	float StiffnessMultiplier; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float CompressionLimit; // 0x0c(0x04)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// Size: 0x158 (Inherited: 0x00)
struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x00(0xf8)
	FClothCollisionData CollisionData; // 0xf8(0x40)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// Size: 0xf8 (Inherited: 0x00)
struct FClothPhysicalMeshData {
	TArray<FVector> Vertices; // 0x00(0x10)
	TArray<FVector> Normals; // 0x10(0x10)
	TArray<uint32_t> Indices; // 0x20(0x10)
	TMap<uint32_t, FPointWeightMap> WeightMaps; // 0x30(0x50)
	TArray<float> InverseMasses; // 0x80(0x10)
	TArray<FClothVertBoneData> BoneData; // 0x90(0x10)
	int32_t MaxBoneWeights; // 0xa0(0x04)
	int32_t NumFixedVerts; // 0xa4(0x04)
	TArray<uint32_t> SelfCollisionIndices; // 0xa8(0x10)
	TArray<float> MaxDistances; // 0xb8(0x10)
	TArray<float> BackstopDistances; // 0xc8(0x10)
	TArray<float> BackstopRadiuses; // 0xd8(0x10)
	TArray<float> AnimDriveMultipliers; // 0xe8(0x10)
};

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// Size: 0x10 (Inherited: 0x00)
struct FPointWeightMap {
	TArray<float> Values; // 0x00(0x10)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// Size: 0x30 (Inherited: 0x00)
struct FClothParameterMask_Legacy {
	FName MaskName; // 0x00(0x08)
	enum class EWeightMapTargetCommon CurrentTarget; // 0x08(0x01)
	float MaxValue; // 0x0c(0x04)
	float MinValue; // 0x10(0x04)
	TArray<float> Values; // 0x18(0x10)
	bool bEnabled; // 0x28(0x01)
};

