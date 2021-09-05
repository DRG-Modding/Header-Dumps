// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x30 (Inherited: 0x28)
struct UClothingSimulationInteractor : UObject {

	void SetAnimDriveSpringStiffness(float InStiffness);
	void PhysicsAssetUpdated();
	void EnableGravityOverride(FVector InVector);
	void DisableGravityOverride();
	void ClothConfigUpdated();
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 (Inherited: 0x28)
struct UClothingAssetBase : UObject {
	FString ImportedFilePath; // 0x28(0x10)
	FGuid AssetGuid; // 0x38(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	TArray<FVector> Vertices; // 0x28(0x10)
	TArray<FVector> Normals; // 0x38(0x10)
	TArray<uint32_t> Indices; // 0x48(0x10)
	TArray<float> InverseMasses; // 0x58(0x10)
	TArray<FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x04)
	int32_t MaxBoneWeights; // 0x7c(0x04)
	TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
};

