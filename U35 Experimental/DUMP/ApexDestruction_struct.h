// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8 {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3
};

// ScriptStruct ApexDestruction.DestructibleChunkParameters
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleChunkParameters {
	UPROPERTY(BlueprintReadWrite) bool bIsSupportChunk; 
	UPROPERTY(BlueprintReadWrite) bool bDoNotFracture; 
	UPROPERTY(BlueprintReadWrite) bool bDoNotDamage; 
	UPROPERTY(BlueprintReadWrite) bool bDoNotCrumble; 
};

// ScriptStruct ApexDestruction.FractureMaterial
// Size: 0x24 (Inherited: 0x00)
struct FFractureMaterial {
	UPROPERTY(BlueprintReadWrite) FVector2D UVScale; 
	UPROPERTY(BlueprintReadWrite) FVector2D UVOffset; 
	UPROPERTY(BlueprintReadWrite) FVector Tangent; 
	UPROPERTY(BlueprintReadWrite) float UAngle; 
	UPROPERTY(BlueprintReadWrite) int32_t InteriorElementIndex; 
};

// ScriptStruct ApexDestruction.DestructibleParameters
// Size: 0x88 (Inherited: 0x00)
struct FDestructibleParameters {
	UPROPERTY(BlueprintReadWrite) FDestructibleDamageParameters DamageParameters; 
	UPROPERTY(BlueprintReadWrite) FDestructibleDebrisParameters DebrisParameters; 
	UPROPERTY(BlueprintReadWrite) FDestructibleAdvancedParameters AdvancedParameters; 
	UPROPERTY(BlueprintReadWrite) FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; 
	UPROPERTY(BlueprintReadWrite) TArray<FDestructibleDepthParameters> DepthParameters; 
	UPROPERTY(BlueprintReadWrite) FDestructibleParametersFlag Flags; 
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleParametersFlag {
	UPROPERTY(BlueprintReadWrite) char bAccumulateDamage : 1; 
	UPROPERTY(BlueprintReadWrite) char bAssetDefinedSupport : 1; 
	UPROPERTY(BlueprintReadWrite) char bWorldSupport : 1; 
	UPROPERTY(BlueprintReadWrite) char bDebrisTimeout : 1; 
	UPROPERTY(BlueprintReadWrite) char bDebrisMaxSeparation : 1; 
	UPROPERTY(BlueprintReadWrite) char bCrumbleSmallestChunks : 1; 
	UPROPERTY(BlueprintReadWrite) char bAccurateRaycasts : 1; 
	UPROPERTY(BlueprintReadWrite) char bUseValidBounds : 1; 
	UPROPERTY(BlueprintReadWrite) char bFormExtendedStructures : 1; 
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// Size: 0x01 (Inherited: 0x00)
struct FDestructibleDepthParameters {
	UPROPERTY(BlueprintReadWrite) enum class EImpactDamageOverride ImpactDamageOverride; 
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// Size: 0x14 (Inherited: 0x00)
struct FDestructibleSpecialHierarchyDepths {
	UPROPERTY(BlueprintReadWrite) int32_t SupportDepth; 
	UPROPERTY(BlueprintReadWrite) int32_t MinimumFractureDepth; 
	UPROPERTY(BlueprintReadWrite) bool bEnableDebris; 
	UPROPERTY(BlueprintReadWrite) int32_t DebrisDepth; 
	UPROPERTY(BlueprintReadWrite) int32_t EssentialDepth; 
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// Size: 0x10 (Inherited: 0x00)
struct FDestructibleAdvancedParameters {
	UPROPERTY(BlueprintReadWrite) float DamageCap; 
	UPROPERTY(BlueprintReadWrite) float ImpactVelocityThreshold; 
	UPROPERTY(BlueprintReadWrite) float MaxChunkSpeed; 
	UPROPERTY(BlueprintReadWrite) float FractureImpulseScale; 
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// Size: 0x2c (Inherited: 0x00)
struct FDestructibleDebrisParameters {
	UPROPERTY(BlueprintReadWrite) float DebrisLifetimeMin; 
	UPROPERTY(BlueprintReadWrite) float DebrisLifetimeMax; 
	UPROPERTY(BlueprintReadWrite) float DebrisMaxSeparationMin; 
	UPROPERTY(BlueprintReadWrite) float DebrisMaxSeparationMax; 
	UPROPERTY(BlueprintReadWrite) FBox ValidBounds; 
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// Size: 0x1c (Inherited: 0x00)
struct FDestructibleDamageParameters {
	UPROPERTY(BlueprintReadWrite) float DamageThreshold; 
	UPROPERTY(BlueprintReadWrite) float DamageSpread; 
	UPROPERTY(BlueprintReadWrite) bool bEnableImpactDamage; 
	UPROPERTY(BlueprintReadWrite) float ImpactDamage; 
	UPROPERTY(BlueprintReadWrite) int32_t DefaultImpactDamageDepth; 
	UPROPERTY(BlueprintReadWrite) bool bCustomImpactResistance; 
	UPROPERTY(BlueprintReadWrite) float ImpactResistance; 
};

