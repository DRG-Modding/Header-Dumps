#ifndef UE4SS_SDK_FSDEngine_HPP
#define UE4SS_SDK_FSDEngine_HPP

#include "FSDEngine_enums.hpp"

class UTerrainMaterialBase : UPrimaryDataAsset
{
}

class UTerrainMaterialCore : UTerrainMaterialBase
{
    UTerrainMaterialCore* BurntMaterial;
    UTerrainMaterialCore* BulletBurntMaterial;
    uint8 PathfinderDanger;
    uint8 PathfinderPreventSpawning;
    UMaterialInterface* ScannerMaterial;
    TSoftObjectPtr<UMaterialInterface> RenderMaterial;
    TSoftObjectPtr<UMaterialInstance> ObjectMaterial;
}

class UCSGBake : UDataAsset
{
    FBakeSettings BakeSettings;
    int32 NumVariations;
    int32 InitialSeed;
    TSoftClassPtr<ACSGBuilder> CSG;
    FString Status;
    FBox CombinedAABB;
    TArray<FBakeEntry> Entries;
    bool IsBaking;
    TArray<UBakeConfig*> CurrentBakeConfigs;
    ACSGBuilder* CDO;

    void Bake();
}

class UBuilderBase : UObject
{
}

class UCSGBase : UBuilderBase
{
    FMeshBaseProperties BaseProperties;
    FTransform RelativeTransform;
}

class UCSGBakedChildInstance : UCSGBase
{
    FCSGBakedChildInstanceProperties Properties;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FMatrix TransformMatInv;
    FDeepCSGFloatTree TempTree;
}

class UCSGBuilderBaseSceneComponent : USceneComponent
{
}

class UCSGBaseComponent : UCSGBuilderBaseSceneComponent
{
    FMeshBaseProperties BaseProperties;
}

class UCSGBakedChildInstanceComponent : UCSGBaseComponent
{
    FCSGBakedChildInstanceProperties Properties;
}

class UCSGSingleChildBase : UCSGBase
{
    UCSGBase* Child;
}

class UCSGDuplicateSingleChildBase : UCSGBase
{
    TArray<UCSGBase*> Children;
}

class ACSGBuilderBase : AActor
{
    FBox BoundingBox;
    int32 PreviewSeed;
    FBakeSettings PreviewSettings;
    UTerrainMaterialCore* EmptyMat;
    UTerrainMaterialCore* ErrorMat;
    UTerrainMaterialCore* SolidMat;
    UTerrainMaterialCore* BurnedMat;
    UCSGPreviewComponent* PreviewComponent;

    void PreGenerate(UBakeConfig* builder);
}

class ACSGBuilder : ACSGBuilderBase
{
    UCSGGroupComponent* CSGRoot;
    TArray<UTerrainMaterialCore*> UsedMaterials;
    UCSGBase* CurrentRoot;
    UCSGBase* CurrentPreviewRoot;
    UBakeConfig* CurrentPreviewConfig;
    UCSGPreviewScene* PreviewScene;
}

class UBakeConfig : UObject
{
    FBakeSettings Settings;
    TMap<FName, UBuilderBase*> Objects;
    TArray<FString> Warnings;

    FVector GetVectorSetting(FName Name, FVector defaultVal);
    FRandomStream GetRandomStream();
    UBuilderBase* GetObject(FName Name);
    int32 GetIntSetting(FName Name, int32 defaultVal);
    float GetFloatSetting(FName Name, float defaultVal);
    bool GetBoolSetting(FName Name, bool defaultVal);
}

class UCSGCellNoise : UCSGBase
{
    FMeshCellNoiseProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
    FVector ReciprocalCellSize;
    FDeepCSGFloatTree ApplyTree;
    TArray<FVector> CellPositions;
    TArray<FDeepCSGNode> CellLeaves;
}

class UCSGCellNoiseComponent : UCSGBaseComponent
{
    FMeshCellNoiseProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
}

class UCSGChildInstance : UCSGBase
{
    FCSGChildInstanceProperties Properties;
    FGeneralTerrainMaterialCombiner Materials;
    UCSGBase* CSGChildInstanceRoot;
    UBakeConfig* CurrentBakeConfig;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FDeepCSGFloatTree BoundingTree;
    FMatrix TransformMatInv;
    FDeepCSGTree TempTree;
}

class UCSGChildInstanceComponent : UCSGBaseComponent
{
    FCSGChildInstanceProperties Properties;
    FGeneralTerrainMaterialCombiner Materials;
}

class USimpleMeshWithCachedTree : UCSGBase
{
    FBinaryTerrainMaterialCombiner Materials;
    bool InvertCSG;
}

class UConvexMeshWithCachedTree : USimpleMeshWithCachedTree
{
    FConvexNoiseProperties Noise;
}

class UCSGConvexCollider : UConvexMeshWithCachedTree
{
    FCSGConvexColliderProperties Properties;
}

class USimpleMeshWithCachedTreeComponent : UCSGBaseComponent
{
    FBinaryTerrainMaterialCombiner Materials;
    bool InvertCSG;
}

class UConvexMeshWithCachedTreeComponent : USimpleMeshWithCachedTreeComponent
{
    FConvexNoiseProperties Noise;
}

class UCSGConvexColliderComponent : UConvexMeshWithCachedTreeComponent
{
    FCSGConvexColliderProperties Properties;
}

class UCSGGroup : UCSGBase
{
    TArray<UCSGBase*> Children;
}

class UCSGGroupComponent : UCSGBaseComponent
{
}

class UCSGLayer : UCSGGroup
{
    FMeshLayerProperties Properties;
    FGeneralTerrainMaterialCombiner Materials;
    FBox WorldSpaceBoundingBox;
    FDeepCSGFloatTree BoundingTree;
    FDeepCSGTree TempTree;
    FMatrix TransformMatInv;
}

class UCSGLayerComponent : UCSGGroupComponent
{
    FMeshLayerProperties Properties;
    FGeneralTerrainMaterialCombiner Materials;
}

class UCSGAddMaterialLayers : UCSGSingleChildBase
{
    FCSGAddMaterialLayersProperties Properties;
}

class UCSGAddMaterialLayersComponent : UCSGBaseComponent
{
    FCSGAddMaterialLayersProperties Properties;
}

class UCSGRandomizeTransform : UCSGSingleChildBase
{
    FCSGRandomizeTransformProperties Properties;
}

class UCSGRandomizeTransformComponent : UCSGBaseComponent
{
    FCSGRandomizeTransformProperties Properties;
}

class UCSGRandomDisable : UCSGSingleChildBase
{
    FCSGRandomDisableProperties Properties;
}

class UCSGRandomDisableComponent : UCSGBaseComponent
{
    FCSGRandomDisableProperties Properties;
}

class UCSGGridDuplicator : UCSGDuplicateSingleChildBase
{
    FCSGGridDuplicatorProperties Properties;
}

class UCSGGridDuplicatorComponent : UCSGBaseComponent
{
    FCSGGridDuplicatorProperties Properties;
}

class UCSGCircleDuplicator : UCSGDuplicateSingleChildBase
{
    FCSGCircleDuplicatorProperties Properties;
}

class UCSGCircleDuplicatorComponent : UCSGBaseComponent
{
    FCSGCircleDuplicatorProperties Properties;
}

class UCSGPreviewComponent : USceneComponent
{
    ACSGBuilderBase* BaseBuilder;
    UBakeConfig* CurrentBakeConfig;
    TMap<FChunkId, UDeepProceduralMeshComponent*> Meshes;
    bool UsePreviewScene;
    int32 ChangeCount;
}

class UCSGPreviewScene : UDataAsset
{
    TSubclassOf<ACSGBuilder> Mesh;
    FBakeSettings Settings;
    int32 Seed;
    UTerrainMaterialCore* TerrainMaterial;
}

class UCSGPlane : UConvexMeshWithCachedTree
{
}

class UCSGPlaneComponent : UConvexMeshWithCachedTreeComponent
{
}

class UCSGBox : UConvexMeshWithCachedTree
{
    FMeshBoxProperties Properties;
}

class UCSGBoxComponent : UConvexMeshWithCachedTreeComponent
{
    FMeshBoxProperties Properties;
}

class UCSGCylinder : UConvexMeshWithCachedTree
{
    FCSGCylinderProperties Properties;
}

class UCSGCylinderComponent : UConvexMeshWithCachedTreeComponent
{
    FCSGCylinderProperties Properties;
}

class UCSGCone : UConvexMeshWithCachedTree
{
    FCSGConeProperties Properties;
}

class UCSGConeComponent : UConvexMeshWithCachedTreeComponent
{
    FCSGConeProperties Properties;
}

class UCSGSphere : UConvexMeshWithCachedTree
{
    FCSGSphereProperties Properties;
}

class UCSGSphereComponent : UConvexMeshWithCachedTreeComponent
{
    FCSGSphereProperties Properties;
}

class UCSGRemapped : UCSGSingleChildBase
{
    FRemappedProperties Properties;
}

class UCSGRemappedComponent : UCSGBaseComponent
{
    FRemappedProperties Properties;
}

class UCSGSplineMod : UCSGRemapped
{
    FSplineModProperties SplineProperties;
    FSplineCurves SplineCurves;
    TArray<FBox> AABBs;
    TArray<float> Keys;
    TArray<FVector4> Planes;
    FBox TotalAABB;
}

class UCSGSplineModComponent : UCSGRemappedComponent
{
    FSplineModProperties SplineProperties;
}

class UCSGSDFInstance : UCSGBase
{
    FCSGSDFInstanceProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
    USDFBase* CSGSDFInstanceRoot;
    UBakeConfig* CurrentBakeConfig;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FDeepCSGFloatTree BoundingTree;
    FMatrix TransformMatInv;
}

class UCSGSDFInstanceComponent : UCSGBaseComponent
{
    FCSGSDFInstanceProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
}

class UCSGModulatedSDFInstance : UCSGBase
{
    FCSGSDFModulatedInstanceProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
    USDFBase* CSGSDFInstanceRoot;
    UBakeConfig* CurrentBakeConfig;
    USDFBase* CSGSDFModulatedInstanceRoot;
    UBakeConfig* CurrentModulatedBakeConfig;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FDeepCSGFloatTree BoundingTree;
    FMatrix TransformMatInv;
}

class UCSGModulatedSDFInstanceComponent : UCSGBaseComponent
{
    FCSGSDFModulatedInstanceProperties Properties;
    FBinaryTerrainMaterialCombiner Materials;
}

class UCSGVoronoi : USimpleMeshWithCachedTree
{
    FVoronoiProperties Properties;
}

class UCSGVoronoiComponent : USimpleMeshWithCachedTreeComponent
{
    FVoronoiProperties Properties;
}

class UCSGSTL : USimpleMeshWithCachedTree
{
    FCSGSTLProperties Properties;
}

class UCSGSTLComponent : USimpleMeshWithCachedTreeComponent
{
    FCSGSTLProperties Properties;
}

class ADeepCSGSection : AActor
{
    UDeepProceduralMeshComponent* DeepMesh;
}

class UDeepProceduralMeshComponent : UMeshComponent
{
    UBodySetup* ProcMeshBodySetup;

    UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material);
}

class ASDFBuilder : ACSGBuilderBase
{
    EPreviewCellSize PreviewSize;
    UTerrainMaterialCore* PreviewMaterial;
    USDFBase* CurrentRoot;
    USDFUnionOpComponent* SDFRoot;
}

class USDFBase : UBuilderBase
{
    FSDFBaseProperties BaseProperties;
    FTransform RelativeTransform;
}

class USDFHeightMap : USDFBase
{
    FSDFHeightMaproperties Properties;
}

class USDFBaseComponent : UCSGBuilderBaseSceneComponent
{
    FSDFBaseProperties BaseProperties;
}

class UUSDFHeightMapComponent : USDFBaseComponent
{
    FSDFHeightMaproperties Properties;
    UTextureRenderTarget2D* HeightTexture;
}

class USDFSingleChildBase : USDFBase
{
    USDFBase* Child;
}

class USDFModifier : USDFSingleChildBase
{
    FSDFModifierProperties Properties;
}

class USDFModifierComponent : USDFBaseComponent
{
    FSDFModifierProperties Properties;
}

class USDFUnionOp : USDFBase
{
    FSDFSmoothingProperties Properties;
    TArray<USDFBase*> Arguments;
}

class USDFUnionOpComponent : USDFBaseComponent
{
    FSDFSmoothingProperties Properties;
}

class USDFIntersectOp : USDFBase
{
    FSDFSmoothingProperties Properties;
    TArray<USDFBase*> Arguments;
}

class USDFIntersectOpComponent : USDFBaseComponent
{
    FSDFSmoothingProperties Properties;
}

class USDFSubOp : USDFBase
{
    FSDFSmoothingProperties Properties;
    USDFBase* A;
    USDFBase* B;
}

class USDFSubOpComponent : USDFBaseComponent
{
    FSDFSmoothingProperties Properties;
}

class USDFOnion : USDFBase
{
    FSDFOnionProperties Properties;
    USDFBase* Argument;
}

class USDFOnionComponent : USDFBaseComponent
{
    FSDFOnionProperties Properties;
}

class USDFRandomizeTransform : USDFSingleChildBase
{
    FSDFRandomizeTransformProperties Properties;
}

class USDFRandomizeTransformComponent : USDFBaseComponent
{
    FSDFRandomizeTransformProperties Properties;
}

class USDFRandomDisable : USDFSingleChildBase
{
    FSDFRandomDisableProperties Properties;
}

class USDFRandomDisableComponent : USDFBaseComponent
{
    FSDFRandomDisableProperties Properties;
}

class USDFBaseWithTransform : USDFBase
{
}

class USDFBaseWithTransformComponent : USDFBaseComponent
{
}

class USDFSphere : USDFBaseWithTransform
{
    FSDFSphereProperties Properties;
}

class USDFSphereComponent : USDFBaseWithTransformComponent
{
    FSDFSphereProperties Properties;
}

class USDFPlane : USDFBaseWithTransform
{
}

class USDFPlaneComponent : USDFBaseWithTransformComponent
{
}

class USDFBox : USDFBaseWithTransform
{
    FSDFBoxProperties Properties;
}

class USDFBoxComponent : USDFBaseWithTransformComponent
{
    FSDFBoxProperties Properties;
}

class USDFCylinder : USDFBaseWithTransform
{
    FSDFCylinderProperties Properties;
}

class USDFCylinderComponent : USDFBaseWithTransformComponent
{
    FSDFCylinderProperties Properties;
}

class USDFCapsule : USDFBaseWithTransform
{
    FSDFCapsuleProperties Properties;
}

class USDFCapsuleComponent : USDFBaseWithTransformComponent
{
    FSDFCapsuleProperties Properties;
}

class USDFTorus : USDFBaseWithTransform
{
    FSDFTorusProperties Properties;
}

class USDFTorusComponent : USDFBaseWithTransformComponent
{
    FSDFTorusProperties Properties;
}

class UStaticMeshCarver : UDataAsset
{
    FString Status;
    TSoftObjectPtr<UStaticMesh> Mesh;
    FBox AABB;
    FDeepCSGFloatTree BSPTree;
    FDeepCSGFloatTreePacked BSPTreePacked;

    void Generate();
    void ExportPreviewMesh();
}

struct UCarveSplineSegment
{
    FVector SplineStart;
    FVector SplineStartTangent;
    FVector SplineEnd;
    FVector SplineEndTangent;
    float Radius;
}

struct UMatrixWithExactSync
{
    float Values;
}

struct UBakeEntry
{
    FDeepCSGFloatTreePacked Tree;
    FBox AABB;
    TArray<UTerrainMaterialCore*> Materials;
    TArray<FSmartTerrainMaterialVal> SmartMaterials;
}

struct USmartTerrainMaterialVal
{
    uint32 IfEmpty;
    uint32 IfSolid;
    TArray<uint32> OverrideKeys;
    TArray<uint32> OverrideValues;
}

struct UDeepCSGFloatTreePacked
{
    FDeepCSGNode Root;
    TArray<int32> encplanes;
}

struct UDeepCSGNode
{
    uint32 Val;
}

struct UCSGBakedChildInstanceProperties
{
    UCSGBake* BakedCSG;
    int32 VariantIndex;
}

struct UMeshBaseProperties
{
    bool Enabled;
}

struct UCSGAddMaterialLayersProperties
{
    TArray<FCSGLayers> Layers;
    FBinaryTerrainMaterialCombiner Inner;
}

struct UBinaryTerrainMaterialCombiner
{
    FEmptyBinaryMatProperties IfEmpty;
    FBinaryMatProperties IfSolid;
    TArray<FBinaryMatPatterns> Patterns;
}

struct UBinaryMatPatterns
{
    EPattern PatternType;
    UTerrainMaterialCore* PatternMaterial;
    FBinaryMatProperties ReplaceWith;
}

struct UBinaryMatProperties
{
    EBinaryComb Result;
    UTerrainMaterialCore* Material;
}

struct UEmptyBinaryMatProperties
{
    EEmptyBinaryComb Result;
    UTerrainMaterialCore* Material;
}

struct UCSGLayers
{
    float Offset;
    FBinaryTerrainMaterialCombiner Above;
}

struct UGeneralTerrainMaterialCombiner
{
    FGeneralMatPropertiesEmpty IfBothEmpty;
    TArray<FGeneralMatPatterns> Patterns;
    FGeneralMatProperties IfBothSolid;
    FGeneralMatProperties IfSrcSolid;
    FGeneralMatProperties IfDestSolid;
}

struct UGeneralMatProperties
{
    EGeneralComb Result;
    UTerrainMaterialCore* Material;
}

struct UGeneralMatPatterns
{
    EGeneralPattern PatternType;
    UTerrainMaterialCore* PatternMaterial;
    FGeneralMatProperties ReplaceWith;
}

struct UGeneralMatPropertiesEmpty
{
    EGeneralCombEmpty Result;
    UTerrainMaterialCore* Material;
}

struct UBakeSettings
{
    TMap<FName, bool> Bools;
    TMap<FName, int32> Ints;
    TMap<FName, float> Floats;
    TMap<FName, FVector> Vectors;
}

struct UMeshCellNoiseProperties
{
    FVector CellSize;
    float CellOffsetFactor;
    float InsideFraction;
    float Distance;
    int32 Seed;
}

struct UCSGChildInstanceProperties
{
    TSubclassOf<ACSGBuilder> Mesh;
    FBakeSettings Settings;
    int32 Seed;
}

struct UCSGConvexColliderProperties
{
    UStaticMesh* collider;
}

struct UMeshLayerProperties
{
    UTerrainMaterialCore* StartMaterial;
    FBox BoundingBox;
}

struct UCSGCircleDuplicatorProperties
{
    int32 Num;
    float Radius;
}

struct UCSGGridDuplicatorProperties
{
    int32 NumA;
    int32 NumB;
    FVector DirectionA;
    FVector DirectionB;
}

struct UCSGRandomDisableProperties
{
    float DisableProbability;
}

struct UCSGRandomizeTransformProperties
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
}

struct UCSGSphereProperties
{
    float Radius;
    float AngleTop;
    float AngleBottom;
    int32 SidesTopBottom;
    int32 Sides;
}

struct UCSGConeProperties
{
    float Height;
    float RadiusTop;
    float RadiusBottom;
    int32 Sides;
}

struct UCSGCylinderProperties
{
    float Height;
    float Radius;
    int32 Sides;
}

struct UMeshBoxProperties
{
    FVector HalfSize;
    int32 BevelSegments;
    float BevelSize;
}

struct UConvexNoiseProperties
{
    float Amplitude;
    float GridSize;
    int32 Seed;
}

struct USplineModProperties
{
    FBox ElementBox;
    bool ForceZUp;
}

struct URemappedProperties
{
    EPreviewCellSize CellSize;
}

struct UCSGSDFModulatedInstanceProperties
{
    TSubclassOf<ASDFBuilder> SDF;
    TSubclassOf<ASDFBuilder> ModulateSDF;
    EPreviewCellSize CellSize;
    FBakeSettings SDFSettings;
    FBakeSettings ModulateSettings;
    int32 Seed;
    ESDFModulateMode ModulateMode;
    TArray<FSDFModulateLayer> ModulateLayers;
}

struct USDFModulateLayer
{
    float ModulateDistance;
    float SDFOffset;
}

struct UCSGSDFInstanceProperties
{
    TSubclassOf<ASDFBuilder> SDF;
    EPreviewCellSize CellSize;
    FBakeSettings Settings;
    int32 Seed;
}

struct UVoronoiProperties
{
    FVector HalfSize;
    int32 NumPoints;
    int32 Seed;
    float Distance;
    bool Inverted;
}

struct UCSGSTLProperties
{
    UStaticMeshCarver* Mesh;
}

struct UDeepCSGFloatTree
{
    FDeepCSGNode Root;
    TArray<FDeepCSGFloatPlane> Planes;
}

struct UDeepCSGFloatPlane
{
    FVector4 Plane;
    FDeepCSGNode Top;
    FDeepCSGNode Bottom;
}

struct UChunkOffset
{
    int16 X;
    int16 Y;
    int16 Z;
}

struct UChunkId
{
    int16 X;
    int16 Y;
    int16 Z;
}

struct UCellId
{
    int16 X;
    int16 Y;
    int16 Z;
}

struct UDeepCSGTree
{
}

struct UDeepCSGTreeOperations
{
}

struct UDeepCSGUtils
{
}

struct ULinearCellId
{
    uint16 X;
    uint16 Y;
    uint16 Z;
}

struct UEncodedChunkCellId
{
    FEncodedChunkId ChunkId;
    uint16 cellOffset;
}

struct UEncodedChunkId
{
    uint32 ID;
}

struct UChunckIDAndOffsetBox
{
    FChunkId ChunkId;
    FChunkOffset minOffset;
    FChunkOffset maxOffset;
}

struct UChunckIDAndOffset
{
    FChunkId ChunkId;
    FChunkOffset Offset;
}

struct UCellBox
{
    FCellId Min;
    FCellId Max;
}

struct USDFHeightMaproperties
{
    FVector Scale;
}

struct USDFOnionProperties
{
    float Thickness;
}

struct USDFSmoothingProperties
{
    float SmoothingDist;
    bool SmoothingEnabled;
}

struct USDFModifierProperties
{
    float Offset;
    float CellNoise;
    int32 Seed;
}

struct USDFBaseProperties
{
    bool Enabled;
}

struct USDFRandomDisableProperties
{
    float DisableProbability;
}

struct USDFRandomizeTransformProperties
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
}

struct USDFTorusProperties
{
    float Radius;
    float TubeRadius;
    FName SizeOverrideName;
}

struct USDFCapsuleProperties
{
    float HalfLength;
    float Radius;
}

struct USDFCylinderProperties
{
    float HalfLength;
    float Radius;
}

struct USDFBoxProperties
{
    FVector HalfSize;
}

struct USDFSphereProperties
{
    float Radius;
    FName RadiusOverrideName;
}

#endif
