// Class ApexDestruction.DestructibleActor
// Size: 0x238 (Inherited: 0x220)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x220(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x228(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x710 (Inherited: 0x630)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x630(0x01)
	char UnknownData_630_1 : 7; // 0x630(0x01)
	char UnknownData_631[0x7]; // 0x631(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x638(0x10)
	bool bEnableHardSleeping; // 0x648(0x01)
	char UnknownData_649[0x3]; // 0x649(0x03)
	float LargeChunkThreshold; // 0x64c(0x04)
	char UnknownData_650[0x10]; // 0x650(0x10)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x660(0x10)
	char UnknownData_670[0xa0]; // 0x670(0xa0)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
	void ApplyRadiusDamage(float BaseDamage, struct FVector HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	void ApplyDamage(float damageAmount, struct FVector HitLocation, struct FVector ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x28)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x2c(0x24)
	int32_t RandomSeed; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
	char UnknownData_90[0x28]; // 0x90(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x428 (Inherited: 0x388)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x388(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x410(0x10)
	char UnknownData_420[0x8]; // 0x420(0x08)
};

