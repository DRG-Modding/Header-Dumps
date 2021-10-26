// Class ApexDestruction.DestructibleActor
// Size: 0x238 (Inherited: 0x220)
struct ADestructibleActor : AActor {
	UPROPERTY(BlueprintReadWrite) UDestructibleComponent* DestructibleComponent; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnActorFracture; 
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x710 (Inherited: 0x630)
struct UDestructibleComponent : USkinnedMeshComponent {
	UPROPERTY(BlueprintReadWrite) char bFractureEffectOverride : 1; 
	UPROPERTY(BlueprintReadWrite) TArray<FFractureEffect> FractureEffects; 
	UPROPERTY(BlueprintReadWrite) bool bEnableHardSleeping; 
	UPROPERTY(BlueprintReadWrite) float LargeChunkThreshold; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnComponentFracture; 

	UFUNCTION(BlueprintCallable) void SetDestructibleMesh(UDestructibleMesh* NewMesh);
	UFUNCTION(BlueprintCallable) UDestructibleMesh* GetDestructibleMesh();
	UFUNCTION(BlueprintCallable) void ApplyRadiusDamage(float BaseDamage, FVector HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	UFUNCTION(BlueprintCallable) void ApplyDamage(float damageAmount, FVector HitLocation, FVector ImpulseDir, float ImpulseStrength);
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x28)
struct UDestructibleFractureSettings : UObject {
	UPROPERTY(BlueprintReadWrite) int32_t CellSiteCount; 
	UPROPERTY(BlueprintReadWrite) FFractureMaterial FractureMaterialDesc; 
	UPROPERTY(BlueprintReadWrite) int32_t RandomSeed; 
	UPROPERTY(BlueprintReadWrite) TArray<FVector> VoronoiSites; 
	UPROPERTY(BlueprintReadWrite) int32_t OriginalSubmeshCount; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInterface*> Materials; 
	UPROPERTY(BlueprintReadWrite) TArray<FDestructibleChunkParameters> ChunkParameters; 
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x428 (Inherited: 0x388)
struct UDestructibleMesh : USkeletalMesh {
	UPROPERTY(BlueprintReadWrite) FDestructibleParameters DefaultDestructibleParameters; 
	UPROPERTY(BlueprintReadWrite) TArray<FFractureEffect> FractureEffects; 
};

