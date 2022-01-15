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

struct FCarveSplineSegment
{
    FVector SplineStart;
    FVector SplineStartTangent;
    FVector SplineEnd;
    FVector SplineEndTangent;
    float Radius;
}

struct FMatrixWithExactSync
{
    float Values;
}

struct FBakeEntry
{
    FDeepCSGFloatTreePacked Tree;
    FBox AABB;
    TArray<UTerrainMaterialCore*> Materials;
    TArray<FSmartTerrainMaterialVal> SmartMaterials;
}

struct FSmartTerrainMaterialVal
{
    uint32 IfEmpty;
    uint32 IfSolid;
    TArray<uint32> OverrideKeys;
    TArray<uint32> OverrideValues;
}

struct FDeepCSGFloatTreePacked
{
    FDeepCSGNode Root;
    TArray<int32> encplanes;
}

struct FDeepCSGNode
{
    uint32 Val;
}

struct FCSGBakedChildInstanceProperties
{
    UCSGBake* BakedCSG;
    int32 VariantIndex;
}

struct FMeshBaseProperties
{
    bool Enabled;
}

struct FCSGAddMaterialLayersProperties
{
    TArray<FCSGLayers> Layers;
    FBinaryTerrainMaterialCombiner Inner;
}

struct FBinaryTerrainMaterialCombiner
{
    FEmptyBinaryMatProperties IfEmpty;
    FBinaryMatProperties IfSolid;
    TArray<FBinaryMatPatterns> Patterns;
}

struct FBinaryMatPatterns
{
    EPattern PatternType;
    UTerrainMaterialCore* PatternMaterial;
    FBinaryMatProperties ReplaceWith;
}

struct FBinaryMatProperties
{
    EBinaryComb Result;
    UTerrainMaterialCore* Material;
}

struct FEmptyBinaryMatProperties
{
    EEmptyBinaryComb Result;
    UTerrainMaterialCore* Material;
}

struct FCSGLayers
{
    float Offset;
    FBinaryTerrainMaterialCombiner Above;
}

struct FGeneralTerrainMaterialCombiner
{
    FGeneralMatPropertiesEmpty IfBothEmpty;
    TArray<FGeneralMatPatterns> Patterns;
    FGeneralMatProperties IfBothSolid;
    FGeneralMatProperties IfSrcSolid;
    FGeneralMatProperties IfDestSolid;
}

struct FGeneralMatProperties
{
    EGeneralComb Result;
    UTerrainMaterialCore* Material;
}

struct FGeneralMatPatterns
{
    EGeneralPattern PatternType;
    UTerrainMaterialCore* PatternMaterial;
    FGeneralMatProperties ReplaceWith;
}

struct FGeneralMatPropertiesEmpty
{
    EGeneralCombEmpty Result;
    UTerrainMaterialCore* Material;
}

struct FBakeSettings
{
    TMap<FName, bool> Bools;
    TMap<FName, int32> Ints;
    TMap<FName, float> Floats;
    TMap<FName, FVector> Vectors;
}

struct FMeshCellNoiseProperties
{
    FVector CellSize;
    float CellOffsetFactor;
    float InsideFraction;
    float Distance;
    int32 Seed;
}

struct FCSGChildInstanceProperties
{
    TSubclassOf<ACSGBuilder> Mesh;
    FBakeSettings Settings;
    int32 Seed;
}

struct FCSGConvexColliderProperties
{
    UStaticMesh* collider;
}

struct FMeshLayerProperties
{
    UTerrainMaterialCore* StartMaterial;
    FBox BoundingBox;
}

struct FCSGCircleDuplicatorProperties
{
    int32 Num;
    float Radius;
}

struct FCSGGridDuplicatorProperties
{
    int32 NumA;
    int32 NumB;
    FVector DirectionA;
    FVector DirectionB;
}

struct FCSGRandomDisableProperties
{
    float DisableProbability;
}

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
}

struct FCSGSphereProperties
{
    float Radius;
    float AngleTop;
    float AngleBottom;
    int32 SidesTopBottom;
    int32 Sides;
}

struct FCSGConeProperties
{
    float Height;
    float RadiusTop;
    float RadiusBottom;
    int32 Sides;
}

struct FCSGCylinderProperties
{
    float Height;
    float Radius;
    int32 Sides;
}

struct FMeshBoxProperties
{
    FVector HalfSize;
    int32 BevelSegments;
    float BevelSize;
}

struct FConvexNoiseProperties
{
    float Amplitude;
    float GridSize;
    int32 Seed;
}

struct FSplineModProperties
{
    FBox ElementBox;
    bool ForceZUp;
}

struct FRemappedProperties
{
    EPreviewCellSize CellSize;
}

struct FCSGSDFModulatedInstanceProperties
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

struct FSDFModulateLayer
{
    float ModulateDistance;
    float SDFOffset;
}

struct FCSGSDFInstanceProperties
{
    TSubclassOf<ASDFBuilder> SDF;
    EPreviewCellSize CellSize;
    FBakeSettings Settings;
    int32 Seed;
}

struct FVoronoiProperties
{
    FVector HalfSize;
    int32 NumPoints;
    int32 Seed;
    float Distance;
    bool Inverted;
}

struct FCSGSTLProperties
{
    UStaticMeshCarver* Mesh;
}

struct FDeepCSGFloatTree
{
    FDeepCSGNode Root;
    TArray<FDeepCSGFloatPlane> Planes;
}

struct FDeepCSGFloatPlane
{
    FVector4 Plane;
    FDeepCSGNode Top;
    FDeepCSGNode Bottom;
}

struct FChunkOffset
{
    int16 X;
    int16 Y;
    int16 Z;
}

struct FChunkId
{
    int16 X;
    int16 Y;
    int16 Z;
}

struct FCellId
{
    int16 X;
    int16 Y;
    int16 Z;
}

struct FDeepCSGTree
{
}

struct FDeepCSGTreeOperations
{
}

struct FDeepCSGUtils
{
}

struct FLinearCellId
{
    uint16 X;
    uint16 Y;
    uint16 Z;
}

struct FEncodedChunkCellId
{
    FEncodedChunkId ChunkId;
    uint16 cellOffset;
}

struct FEncodedChunkId
{
    uint32 ID;
}

struct FChunckIDAndOffsetBox
{
    FChunkId ChunkId;
    FChunkOffset minOffset;
    FChunkOffset maxOffset;
}

struct FChunckIDAndOffset
{
    FChunkId ChunkId;
    FChunkOffset Offset;
}

struct FCellBox
{
    FCellId Min;
    FCellId Max;
}

struct FSDFHeightMaproperties
{
    FVector Scale;
}

struct FSDFOnionProperties
{
    float Thickness;
}

struct FSDFSmoothingProperties
{
    float SmoothingDist;
    bool SmoothingEnabled;
}

struct FSDFModifierProperties
{
    float Offset;
    float CellNoise;
    int32 Seed;
}

struct FSDFBaseProperties
{
    bool Enabled;
}

struct FSDFRandomDisableProperties
{
    float DisableProbability;
}

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
}

struct FSDFTorusProperties
{
    float Radius;
    float TubeRadius;
    FName SizeOverrideName;
}

struct FSDFCapsuleProperties
{
    float HalfLength;
    float Radius;
}

struct FSDFCylinderProperties
{
    float HalfLength;
    float Radius;
}

struct FSDFBoxProperties
{
    FVector HalfSize;
}

struct FSDFSphereProperties
{
    float Radius;
    FName RadiusOverrideName;
}

#endif
