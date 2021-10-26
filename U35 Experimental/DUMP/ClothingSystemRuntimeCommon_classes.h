// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigCommon : UClothConfigBase {
};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedConfigCommon : UClothConfigCommon {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x28 (Inherited: 0x28)
struct UClothingAssetCustomData : UObject {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0x1f0 (Inherited: 0x48)
struct UClothingAssetCommon : UClothingAssetBase {
	UPhysicsAsset* PhysicsAsset; // 0x48(0x08)
	TMap<FName, UClothConfigBase*> ClothConfigs; // 0x50(0x50)
	UClothConfigBase* ClothSharedSimConfig; // 0xa0(0x08)
	UClothConfigBase* ClothSimConfig; // 0xa8(0x08)
	UClothConfigBase* ChaosClothSimConfig; // 0xb0(0x08)
	TArray<UClothLODDataCommon_Legacy*> ClothLODData; // 0xb8(0x10)
	TArray<FClothLODDataCommon> LODData; // 0xc8(0x10)
	TArray<int32_t> LodMap; // 0xd8(0x10)
	TArray<FName> UsedBoneNames; // 0xe8(0x10)
	TArray<int32_t> UsedBoneIndices; // 0xf8(0x10)
	int32_t ReferenceBoneIndex; // 0x108(0x04)
	UClothingAssetCustomData* CustomData; // 0x110(0x08)
	FClothConfig_Legacy ClothConfig; // 0x118(0xd4)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size: 0x188 (Inherited: 0x28)
struct UClothLODDataCommon_Legacy : UObject {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28(0x08)
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30(0xf8)
	FClothCollisionData CollisionData; // 0x128(0x40)
};

