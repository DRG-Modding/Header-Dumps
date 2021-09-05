// Class ApexDestruction.DestructibleActor
// Size: 0x238 (Inherited: 0x220)
struct ADestructibleActor : AActor {
	UDestructibleComponent* DestructibleComponent; // 0x220(0x08)
	FMulticastInlineDelegate OnActorFracture; // 0x228(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x710 (Inherited: 0x630)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x630(0x01)
	TArray<FFractureEffect> FractureEffects; // 0x638(0x10)
	bool bEnableHardSleeping; // 0x648(0x01)
	float LargeChunkThreshold; // 0x64c(0x04)
	FMulticastInlineDelegate OnComponentFracture; // 0x660(0x10)

	void SetDestructibleMesh(UDestructibleMesh* NewMesh);
	UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, FVector HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float damageAmount, FVector HitLocation, FVector ImpulseDir, float ImpulseStrength);
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x28)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28(0x04)
	FFractureMaterial FractureMaterialDesc; // 0x2c(0x24)
	int32_t RandomSeed; // 0x50(0x04)
	TArray<FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x04)
	TArray<UMaterialInterface*> Materials; // 0x70(0x10)
	TArray<FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x428 (Inherited: 0x388)
struct UDestructibleMesh : USkeletalMesh {
	FDestructibleParameters DefaultDestructibleParameters; // 0x388(0x88)
	TArray<FFractureEffect> FractureEffects; // 0x410(0x10)
};

