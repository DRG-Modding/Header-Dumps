#ifndef UE4SS_SDK_FSDEngine_HPP
#define UE4SS_SDK_FSDEngine_HPP

#include "FSDEngine_enums.hpp"

struct FBakeEntry
{
    FDeepCSGFloatTreePacked Tree;
    FBox AABB;
    TArray<class UTerrainMaterialCore*> Materials;
    TArray<FSmartTerrainMaterialVal> SmartMaterials;

};

struct FBakeSetting
{
    FName Key;
    int32 IntValue;
    float FloatValue;
    FVector VectorValue;

};

struct FBakeSettings
{
    TArray<FBakeSetting> Pairs;

};

struct FBinaryMatPatterns
{
    EPattern PatternType;
    class UTerrainMaterialCore* PatternMaterial;
    FBinaryMatProperties ReplaceWith;

};

struct FBinaryMatProperties
{
    EBinaryComb Result;
    class UTerrainMaterialCore* Material;

};

struct FBinaryTerrainMaterialCombiner
{
    FEmptyBinaryMatProperties IfEmpty;
    FBinaryMatProperties IfSolid;
    TArray<FBinaryMatPatterns> Patterns;

};

struct FCSGAddMaterialLayersProperties
{
    TArray<FCSGLayers> Layers;
    FBinaryTerrainMaterialCombiner Inner;

};

struct FCSGBakedChildInstanceProperties
{
    class UCSGBake* BakedCSG;
    int32 VariantIndex;

};

struct FCSGChildInstanceProperties
{
    TSubclassOf<class ACSGBuilder> Mesh;
    FBakeSettings Settings;
    int32 Seed;

};

struct FCSGCircleDuplicatorProperties
{
    int32 Num;
    float Radius;

};

struct FCSGConeProperties
{
    float Height;
    float RadiusTop;
    float RadiusBottom;
    int32 Sides;

};

struct FCSGConvexColliderProperties
{
    class UStaticMesh* collider;

};

struct FCSGCylinderProperties
{
    float Height;
    float Radius;
    int32 Sides;

};

struct FCSGGridDuplicatorProperties
{
    int32 NumA;
    int32 NumB;
    FVector DirectionA;
    FVector DirectionB;

};

struct FCSGLayers
{
    float Offset;
    FBinaryTerrainMaterialCombiner Above;

};

struct FCSGRandomDisableProperties
{
    float DisableProbability;

};

struct FCSGRandomizeTransformProperties
{
    FBox Translation;
    float RotationMinZ;
    float RotationMaxZ;
    float RotationMinY;
    float RotationMaxY;
    float RotationMinX;
    float RotationMaxX;
    FVector ScaleMin;
    FVector ScaleMax;
    bool ScaleAxesIndependent;
    bool DisableRandomize;
    int32 Seed;

};

struct FCSGSDFInstanceProperties
{
    TSubclassOf<class ASDFBuilder> SDF;
    EPreviewCellSize CellSize;
    FBakeSettings Settings;
    int32 Seed;

};

struct FCSGSDFModulatedInstanceProperties
{
    TSubclassOf<class ASDFBuilder> SDF;
    TSubclassOf<class ASDFBuilder> ModulateSDF;
    EPreviewCellSize CellSize;
    FBakeSettings SDFSettings;
    FBakeSettings ModulateSettings;
    int32 Seed;
    ESDFModulateMode ModulateMode;
    TArray<FSDFModulateLayer> ModulateLayers;

};

struct FCSGSTLProperties
{
    class UStaticMeshCarver* Mesh;

};

struct FCSGSphereProperties
{
    float Radius;
    float AngleTop;
    float AngleBottom;
    int32 SidesTopBottom;
    int32 Sides;

};

struct FCarveSplineSegment
{
    FVector SplineStart;
    FVector SplineStartTangent;
    FVector SplineEnd;
    FVector SplineEndTangent;
    float Radius;

};

struct FCellBox
{
    FCellId Min;
    FCellId Max;

};

struct FCellId
{
    int16 X;
    int16 Y;
    int16 Z;

};

struct FChunckIDAndOffset
{
    FChunkId ChunkId;
    FChunkOffset Offset;

};

struct FChunckIDAndOffsetBox
{
    FChunkId ChunkId;
    FChunkOffset minOffset;
    FChunkOffset maxOffset;

};

struct FChunkId
{
    int16 X;
    int16 Y;
    int16 Z;

};

struct FChunkOffset
{
    int16 X;
    int16 Y;
    int16 Z;

};

struct FConvexNoiseProperties
{
    float Amplitude;
    float GridSize;
    int32 Seed;

};

struct FDeepCSGFloatPlane
{
    FVector4 Plane;
    FDeepCSGNode Top;
    FDeepCSGNode Bottom;

};

struct FDeepCSGFloatTree
{
    FDeepCSGNode Root;
    TArray<FDeepCSGFloatPlane> planes;

};

struct FDeepCSGFloatTreePacked
{
    FDeepCSGNode Root;
    TArray<int32> encplanes;

};

struct FDeepCSGNode
{
    uint32 Val;

};

struct FDeepCSGTree
{
};

struct FDeepCSGTreeOperations
{
};

struct FDeepCSGUtils
{
};

struct FEmptyBinaryMatProperties
{
    EEmptyBinaryComb Result;
    class UTerrainMaterialCore* Material;

};

struct FEncodedChunkCellId
{
    FEncodedChunkId ChunkId;
    uint16 cellOffset;

};

struct FEncodedChunkId
{
    uint32 ID;

};

struct FFastNoiseProperties
{
    float Frequency;
    EFNNoiseType NoiseType;
    EFNRotationType3D RotationType3d;
    EFNFractalType FractalType;
    int32 Octaves;
    float Lacunarity;
    float Gain;
    float WeightedStrength;
    float PingPongStrength;
    EFNCellularDistanceFunc CellularDistanceFunc;
    EFNCellularReturnType CellularReturnYype;
    float CellularJitterMod;
    EFNDomainWarpType DomainWarpType;
    float WarpAmplitude;

};

struct FGeneralMatPatterns
{
    EGeneralPattern PatternType;
    class UTerrainMaterialCore* PatternMaterial;
    FGeneralMatProperties ReplaceWith;

};

struct FGeneralMatProperties
{
    EGeneralComb Result;
    class UTerrainMaterialCore* Material;

};

struct FGeneralMatPropertiesEmpty
{
    EGeneralCombEmpty Result;
    class UTerrainMaterialCore* Material;

};

struct FGeneralTerrainMaterialCombiner
{
    FGeneralMatPropertiesEmpty IfBothEmpty;
    TArray<FGeneralMatPatterns> Patterns;
    FGeneralMatProperties IfBothSolid;
    FGeneralMatProperties IfSrcSolid;
    FGeneralMatProperties IfDestSolid;

};

struct FHMMinMaxLevel
{
    TArray<float> Entries;

};

struct FLinearCellId
{
    uint16 X;
    uint16 Y;
    uint16 Z;

};

struct FMatrixWithExactSync
{
    float Values;

};

struct FMeshBaseProperties
{
    bool Enabled;

};

struct FMeshBoxProperties
{
    FVector HalfSize;
    int32 BevelSegments;
    float BevelSize;

};

struct FMeshCellNoiseProperties
{
    FVector CellSize;
    float CellOffsetFactor;
    float InsideFraction;
    float Distance;
    int32 Seed;

};

struct FMeshLayerProperties
{
    class UTerrainMaterialCore* StartMaterial;
    FBox BoundingBox;

};

struct FSDFBaseProperties
{
    bool Enabled;

};

struct FSDFBoxProperties
{
    FVector HalfSize;

};

struct FSDFCapsuleProperties
{
    float HalfLength;
    float Radius;

};

struct FSDFCylinderProperties
{
    float HalfLength;
    float Radius;

};

struct FSDFHeightMaproperties
{
    FVector Scale;

};

struct FSDFModifierProperties
{
    float Offset;
    FFastNoiseProperties Noise;
    float NoiseAmplitude;
    int32 Seed;

};

struct FSDFModulateLayer
{
    float ModulateDistance;
    float SDFOffset;

};

struct FSDFOnionProperties
{
    float Thickness;

};

struct FSDFRandomDisableProperties
{
    float DisableProbability;

};

struct FSDFRandomizeTransformProperties
{
    FBox Translation;
    float RotationMinZ;
    float RotationMaxZ;
    float RotationMinY;
    float RotationMaxY;
    float RotationMinX;
    float RotationMaxX;
    FVector ScaleMin;
    FVector ScaleMax;
    bool ScaleAxesIndependent;
    bool DisableRandomize;
    int32 Seed;

};

struct FSDFSmoothingProperties
{
    float SmoothingDist;
    bool SmoothingEnabled;

};

struct FSDFSphereProperties
{
    float Radius;
    FName RadiusOverrideName;

};

struct FSDFTorusProperties
{
    float Radius;
    float TubeRadius;
    FName SizeOverrideName;

};

struct FSmartTerrainMaterialVal
{
    uint32 IfEmpty;
    uint32 IfSolid;
    TArray<uint32> OverrideKeys;
    TArray<uint32> OverrideValues;

};

struct FSplineWarpProperties
{
    FBox ElementBox;
    ESplineWarpType SplineWarpType;

};

struct FVoronoiProperties
{
    FVector HalfSize;
    int32 NumPoints;
    int32 Seed;
    float Distance;
    bool Inverted;

};

struct FWarpNoiseProperties
{
    float Frequency;
    EFNRotationType3D RotationType3d;
    EFNFractalType FractalType;
    int32 Octaves;
    float Lacunarity;
    float Gain;
    float WeightedStrength;
    EFNDomainWarpType DomainWarpType;
    float Amplitude;

};

struct FWarpedProperties
{
    EPreviewCellSize CellSize;
    FWarpNoiseProperties WarpNoise;
    int32 Seed;

};

class ACSGBuilder : public ACSGBuilderBase
{
    class UCSGGroupComponent* CSGRoot;
    TArray<class UTerrainMaterialCore*> UsedMaterials;
    class UCSGBase* CurrentRoot;
    class UCSGBase* CurrentPreviewRoot;
    class UBakeConfig* CurrentPreviewConfig;
    class UCSGPreviewScene* PreviewScene;

};

class ACSGBuilderBase : public AActor
{
    FBox BoundingBox;
    int32 PreviewSeed;
    FBakeSettings PreviewSettings;
    class UTerrainMaterialCore* EmptyMat;
    class UTerrainMaterialCore* ErrorMat;
    class UTerrainMaterialCore* SolidMat;
    class UTerrainMaterialCore* BurnedMat;
    class UCSGPreviewComponent* PreviewComponent;

    void PreGenerate(class UBakeConfig* builder);
};

class ADeepCSGSection : public AActor
{
    class UDeepProceduralMeshComponent* DeepMesh;

};

class ASDFBuilder : public ACSGBuilderBase
{
    EPreviewCellSize PreviewSize;
    class UTerrainMaterialCore* PreviewMaterial;
    class USDFBase* CurrentRoot;
    class USDFUnionOpComponent* SDFRoot;

};

class UBakeConfig : public UObject
{
    FBakeSettings Settings;
    TMap<class FName, class UBuilderBase*> Objects;
    TArray<FString> Warnings;

    FVector GetVectorSetting(FName Name, FVector defaultVal);
    FRandomStream GetRandomStream();
    class UBuilderBase* GetObject(FName Name);
    int32 GetIntSetting(FName Name, int32 defaultVal);
    float GetFloatSetting(FName Name, float defaultVal);
    bool GetBoolSetting(FName Name, bool defaultVal);
};

class UBuilderBase : public UObject
{
};

class UCSGAddMaterialLayers : public UCSGSingleChildBase
{
    FCSGAddMaterialLayersProperties Properties;

};

class UCSGAddMaterialLayersComponent : public UCSGBaseComponent
{
    FCSGAddMaterialLayersProperties Properties;

};

class UCSGBake : public UDataAsset
{
    FBakeSettings BakeSettings;
    int32 NumVariations;
    int32 InitialSeed;
    TSoftClassPtr<ACSGBuilder> CSG;
    FString Status;
    FBox CombinedAABB;
    TArray<FBakeEntry> Entries;
    bool IsBaking;
    TArray<class UBakeConfig*> CurrentBakeConfigs;
    class ACSGBuilder* CDO;

    void BakeCSG();
};

class UCSGBakedChildInstance : public UCSGBase
{
    FCSGBakedChildInstanceProperties Properties;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FMatrix TransformMatInv;
    FDeepCSGFloatTree TempTree;

};

class UCSGBakedChildInstanceComponent : public UCSGBaseComponent
{
    FCSGBakedChildInstanceProperties Properties;

};

class UCSGBase : public UBuilderBase
{
    FMeshBaseProperties BaseProperties;
    FTransform RelativeTransform;

};

class UCSGBaseComponent : public UCSGBuilderBaseSceneComponent
{
    FMeshBaseProperties BaseProperties;

};

class UCSGBox : public UConvexMeshWithCachedTree
{
    FMeshBoxProperties Properties;

};

class UCSGBoxComponent : public UConvexMeshWithCachedTreeComponent
{
    FMeshBoxProperties Properties;

};

class UCSGBuilderBaseSceneComponent : public USceneComponent
{
};

class UCSGCellNoise : public UCSGBase
{
    FMeshCellNoiseProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
    FVector ReciprocalCellSize;
    FDeepCSGFloatTree ApplyTree;
    TArray<FVector> CellPositions;
    TArray<FDeepCSGNode> CellLeaves;

};

class UCSGCellNoiseComponent : public UCSGBaseComponent
{
    FMeshCellNoiseProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;

};

class UCSGChildInstance : public UCSGBase
{
    FCSGChildInstanceProperties Properties;
    FGeneralTerrainMaterialCombiner Materials;
    class UCSGBase* CSGChildInstanceRoot;
    class UBakeConfig* CurrentBakeConfig;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FDeepCSGFloatTree BoundingTree;
    FMatrix TransformMatInv;
    FDeepCSGTree TempTree;

};

class UCSGChildInstanceComponent : public UCSGBaseComponent
{
    FCSGChildInstanceProperties Properties;
    FGeneralTerrainMaterialCombiner Materials;

};

class UCSGCircleDuplicator : public UCSGDuplicateSingleChildBase
{
    FCSGCircleDuplicatorProperties Properties;

};

class UCSGCircleDuplicatorComponent : public UCSGBaseComponent
{
    FCSGCircleDuplicatorProperties Properties;

};

class UCSGCone : public UConvexMeshWithCachedTree
{
    FCSGConeProperties Properties;

};

class UCSGConeComponent : public UConvexMeshWithCachedTreeComponent
{
    FCSGConeProperties Properties;

};

class UCSGConvexCollider : public UConvexMeshWithCachedTree
{
    FCSGConvexColliderProperties Properties;

};

class UCSGConvexColliderComponent : public UConvexMeshWithCachedTreeComponent
{
    FCSGConvexColliderProperties Properties;

};

class UCSGCylinder : public UConvexMeshWithCachedTree
{
    FCSGCylinderProperties Properties;

};

class UCSGCylinderComponent : public UConvexMeshWithCachedTreeComponent
{
    FCSGCylinderProperties Properties;

};

class UCSGDuplicateSingleChildBase : public UCSGBase
{
    TArray<class UCSGBase*> Children;

};

class UCSGGridDuplicator : public UCSGDuplicateSingleChildBase
{
    FCSGGridDuplicatorProperties Properties;

};

class UCSGGridDuplicatorComponent : public UCSGBaseComponent
{
    FCSGGridDuplicatorProperties Properties;

};

class UCSGGroup : public UCSGBase
{
    TArray<class UCSGBase*> Children;

};

class UCSGGroupComponent : public UCSGBaseComponent
{
};

class UCSGLayer : public UCSGGroup
{
    FMeshLayerProperties Properties;
    FGeneralTerrainMaterialCombiner Materials;
    FBox WorldSpaceBoundingBox;
    FDeepCSGFloatTree BoundingTree;
    FDeepCSGTree TempTree;
    FMatrix TransformMatInv;

};

class UCSGLayerComponent : public UCSGGroupComponent
{
    FMeshLayerProperties Properties;
    FGeneralTerrainMaterialCombiner Materials;

};

class UCSGModulatedSDFInstance : public UCSGBase
{
    FCSGSDFModulatedInstanceProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
    class USDFBase* CSGSDFInstanceRoot;
    class UBakeConfig* CurrentBakeConfig;
    class USDFBase* CSGSDFModulatedInstanceRoot;
    class UBakeConfig* CurrentModulatedBakeConfig;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FDeepCSGFloatTree BoundingTree;
    FMatrix TransformMatInv;

};

class UCSGModulatedSDFInstanceComponent : public UCSGBaseComponent
{
    FCSGSDFModulatedInstanceProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;

};

class UCSGPlane : public UConvexMeshWithCachedTree
{
};

class UCSGPlaneComponent : public UConvexMeshWithCachedTreeComponent
{
};

class UCSGPreviewComponent : public USceneComponent
{
    class ACSGBuilderBase* BaseBuilder;
    class UBakeConfig* CurrentBakeConfig;
    TMap<class FChunkId, class UDeepProceduralMeshComponent*> Meshes;
    bool UsePreviewScene;
    int32 ChangeCount;

};

class UCSGPreviewScene : public UDataAsset
{
    TSubclassOf<class ACSGBuilder> Mesh;
    FBakeSettings Settings;
    int32 Seed;
    class UTerrainMaterialCore* TerrainMaterial;

};

class UCSGRandomDisable : public UCSGSingleChildBase
{
    FCSGRandomDisableProperties Properties;

};

class UCSGRandomDisableComponent : public UCSGBaseComponent
{
    FCSGRandomDisableProperties Properties;

};

class UCSGRandomizeTransform : public UCSGSingleChildBase
{
    FCSGRandomizeTransformProperties Properties;

};

class UCSGRandomizeTransformComponent : public UCSGBaseComponent
{
    FCSGRandomizeTransformProperties Properties;

};

class UCSGSDFInstance : public UCSGBase
{
    FCSGSDFInstanceProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
    class USDFBase* CSGSDFInstanceRoot;
    class UBakeConfig* CurrentBakeConfig;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FDeepCSGFloatTree BoundingTree;
    FMatrix TransformMatInv;

};

class UCSGSDFInstanceComponent : public UCSGBaseComponent
{
    FCSGSDFInstanceProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;

};

class UCSGSTL : public USimpleMeshWithCachedTree
{
    FCSGSTLProperties Properties;

};

class UCSGSTLComponent : public USimpleMeshWithCachedTreeComponent
{
    FCSGSTLProperties Properties;

};

class UCSGSingleChildBase : public UCSGBase
{
    class UCSGBase* Child;

};

class UCSGSphere : public UConvexMeshWithCachedTree
{
    FCSGSphereProperties Properties;

};

class UCSGSphereComponent : public UConvexMeshWithCachedTreeComponent
{
    FCSGSphereProperties Properties;

};

class UCSGSplineWarp : public UCSGWarped
{
    FSplineWarpProperties SplineProperties;
    FSplineCurves SplineCurves;
    TArray<FBox> AABBs;
    TArray<float> Keys;
    TArray<FVector4> planes;
    FBox TotalAABB;

};

class UCSGSplineWarpComponent : public UCSGWarpedComponent
{
    FSplineWarpProperties SplineProperties;

};

class UCSGVoronoi : public USimpleMeshWithCachedTree
{
    FVoronoiProperties Properties;

};

class UCSGVoronoiComponent : public USimpleMeshWithCachedTreeComponent
{
    FVoronoiProperties Properties;

};

class UCSGWarped : public UCSGSingleChildBase
{
    FWarpedProperties Properties;

};

class UCSGWarpedComponent : public UCSGBaseComponent
{
    FWarpedProperties Properties;

};

class UConvexMeshWithCachedTree : public USimpleMeshWithCachedTree
{
    FConvexNoiseProperties Noise;

};

class UConvexMeshWithCachedTreeComponent : public USimpleMeshWithCachedTreeComponent
{
    FConvexNoiseProperties Noise;

};

class UDeepProceduralMeshComponent : public UMeshComponent
{
    class UBodySetup* ProcMeshBodySetup;

    class UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(class UPhysicalMaterial* Material);
};

class UHeightMapWithMinMaxQuadTree : public UDataAsset
{
    FString Status;
    TSoftObjectPtr<UTextureRenderTarget2D> InputRenderTarget;
    TSoftObjectPtr<UTexture> InputTexture;
    TArray<FHMMinMaxLevel> MinMaxTree;
    float MinHeight;
    float MaxHeight;
    TArray<float> Heights;
    int32 Dimensions;
    bool Initialized;

    void Generate();
};

class USDFBase : public UBuilderBase
{
    FSDFBaseProperties BaseProperties;
    FTransform RelativeTransform;

};

class USDFBaseComponent : public UCSGBuilderBaseSceneComponent
{
    FSDFBaseProperties BaseProperties;

};

class USDFBaseWithTransform : public USDFBase
{
};

class USDFBaseWithTransformComponent : public USDFBaseComponent
{
};

class USDFBox : public USDFBaseWithTransform
{
    FSDFBoxProperties Properties;

};

class USDFBoxComponent : public USDFBaseWithTransformComponent
{
    FSDFBoxProperties Properties;

};

class USDFCapsule : public USDFBaseWithTransform
{
    FSDFCapsuleProperties Properties;

};

class USDFCapsuleComponent : public USDFBaseWithTransformComponent
{
    FSDFCapsuleProperties Properties;

};

class USDFCylinder : public USDFBaseWithTransform
{
    FSDFCylinderProperties Properties;

};

class USDFCylinderComponent : public USDFBaseWithTransformComponent
{
    FSDFCylinderProperties Properties;

};

class USDFHeightMap : public USDFBase
{
    FSDFHeightMaproperties Properties;
    class UHeightMapWithMinMaxQuadTree* Heightmap;

};

class USDFHeightMapComponent : public USDFBaseComponent
{
    FSDFHeightMaproperties Properties;
    class UHeightMapWithMinMaxQuadTree* Heightmap;

};

class USDFIntersectOp : public USDFBase
{
    FSDFSmoothingProperties Properties;
    TArray<class USDFBase*> Arguments;

};

class USDFIntersectOpComponent : public USDFBaseComponent
{
    FSDFSmoothingProperties Properties;

};

class USDFModifier : public USDFSingleChildBase
{
    FSDFModifierProperties Properties;

};

class USDFModifierComponent : public USDFBaseComponent
{
    FSDFModifierProperties Properties;

};

class USDFOnion : public USDFBase
{
    FSDFOnionProperties Properties;
    class USDFBase* Argument;

};

class USDFOnionComponent : public USDFBaseComponent
{
    FSDFOnionProperties Properties;

};

class USDFPlane : public USDFBaseWithTransform
{
};

class USDFPlaneComponent : public USDFBaseWithTransformComponent
{
};

class USDFRandomDisable : public USDFSingleChildBase
{
    FSDFRandomDisableProperties Properties;

};

class USDFRandomDisableComponent : public USDFBaseComponent
{
    FSDFRandomDisableProperties Properties;

};

class USDFRandomizeTransform : public USDFSingleChildBase
{
    FSDFRandomizeTransformProperties Properties;

};

class USDFRandomizeTransformComponent : public USDFBaseComponent
{
    FSDFRandomizeTransformProperties Properties;

};

class USDFSingleChildBase : public USDFBase
{
    class USDFBase* Child;

};

class USDFSphere : public USDFBaseWithTransform
{
    FSDFSphereProperties Properties;

};

class USDFSphereComponent : public USDFBaseWithTransformComponent
{
    FSDFSphereProperties Properties;

};

class USDFSubOp : public USDFBase
{
    FSDFSmoothingProperties Properties;
    class USDFBase* A;
    class USDFBase* B;

};

class USDFSubOpComponent : public USDFBaseComponent
{
    FSDFSmoothingProperties Properties;

};

class USDFTorus : public USDFBaseWithTransform
{
    FSDFTorusProperties Properties;

};

class USDFTorusComponent : public USDFBaseWithTransformComponent
{
    FSDFTorusProperties Properties;

};

class USDFUnionOp : public USDFBase
{
    FSDFSmoothingProperties Properties;
    TArray<class USDFBase*> Arguments;

};

class USDFUnionOpComponent : public USDFBaseComponent
{
    FSDFSmoothingProperties Properties;

};

class USimpleMeshWithCachedTree : public UCSGBase
{
    FBinaryTerrainMaterialCombiner Materials;
    bool InvertCSG;

};

class USimpleMeshWithCachedTreeComponent : public UCSGBaseComponent
{
    FBinaryTerrainMaterialCombiner Materials;
    bool InvertCSG;

};

class UStaticMeshCarver : public UDataAsset
{
    FString Status;
    TSoftObjectPtr<UStaticMesh> Mesh;
    FBox AABB;
    FDeepCSGFloatTree BSPTree;
    FDeepCSGFloatTreePacked BSPTreePacked;

    void Generate();
    void ExportPreviewMesh();
};

class UTerrainMaterialBase : public UPrimaryDataAsset
{
};

class UTerrainMaterialCore : public UTerrainMaterialBase
{
    class UTerrainMaterialCore* BurntMaterial;
    class UTerrainMaterialCore* BulletBurntMaterial;
    uint8 PathfinderDanger;
    uint8 PathfinderPreventSpawning;
    class UMaterialInterface* ScannerMaterial;
    TSoftObjectPtr<UMaterialInterface> RenderMaterial;

};

#endif
