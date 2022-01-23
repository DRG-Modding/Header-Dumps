#ifndef UE4SS_SDK_FSDEngine_HPP
#define UE4SS_SDK_FSDEngine_HPP

#include "FSDEngine_enums.hpp"

struct FBakeSettings
{
    TMap<class FName, class bool> Bools;
    TMap<FName, int32> Ints;
    TMap<FName, float> Floats;
    TMap<class FName, class FVector> Vectors;
};

struct FMatrixWithExactSync
{
    float Values;
};

struct FCarveSplineSegment
{
    FVector SplineStart;
    FVector SplineStartTangent;
    FVector SplineEnd;
    FVector SplineEndTangent;
    float Radius;
};

struct FEncodedChunkId
{
    uint32 ID;
};

struct FDeepCSGNode
{
    uint32 Val;
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
    TArray<FDeepCSGFloatPlane> Planes;
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
    TSoftObjectPtr<UMaterialInstance> ObjectMaterial;
};

struct FDeepCSGFloatTreePacked
{
    FDeepCSGNode Root;
    TArray<int32> encplanes;
};

struct FSmartTerrainMaterialVal
{
    uint32 IfEmpty;
    uint32 IfSolid;
    TArray<uint32> OverrideKeys;
    TArray<uint32> OverrideValues;
};

struct FBakeEntry
{
    FDeepCSGFloatTreePacked Tree;
    FBox AABB;
    TArray<class UTerrainMaterialCore*> Materials;
    TArray<FSmartTerrainMaterialVal> SmartMaterials;
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

    void Bake();
};

class UBuilderBase : public UObject
{
};

struct FMeshBaseProperties
{
    bool Enabled;
};

class UCSGBase : public UBuilderBase
{
    FMeshBaseProperties BaseProperties;
    FTransform RelativeTransform;
};

struct FCSGBakedChildInstanceProperties
{
    class UCSGBake* BakedCSG;
    int32 VariantIndex;
};

class UCSGBakedChildInstance : public UCSGBase
{
    FCSGBakedChildInstanceProperties Properties;
    FBox ChildLocalSpaceBoundingBox;
    FBox WorldSpaceBoundingBox;
    FMatrix TransformMatInv;
    FDeepCSGFloatTree TempTree;
};

class UCSGBuilderBaseSceneComponent : public USceneComponent
{
};

class UCSGBaseComponent : public UCSGBuilderBaseSceneComponent
{
    FMeshBaseProperties BaseProperties;
};

class UCSGBakedChildInstanceComponent : public UCSGBaseComponent
{
    FCSGBakedChildInstanceProperties Properties;
};

class UCSGSingleChildBase : public UCSGBase
{
    class UCSGBase* Child;
};

class UCSGDuplicateSingleChildBase : public UCSGBase
{
    TArray<class UCSGBase*> Children;
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

class ACSGBuilder : public ACSGBuilderBase
{
    class UCSGGroupComponent* CSGRoot;
    TArray<class UTerrainMaterialCore*> UsedMaterials;
    class UCSGBase* CurrentRoot;
    class UCSGBase* CurrentPreviewRoot;
    class UBakeConfig* CurrentPreviewConfig;
    class UCSGPreviewScene* PreviewScene;
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

struct FMeshCellNoiseProperties
{
    FVector CellSize;
    float CellOffsetFactor;
    float InsideFraction;
    float Distance;
    int32 Seed;
};

struct FEmptyBinaryMatProperties
{
    EEmptyBinaryComb Result;
    class UTerrainMaterialCore* Material;
};

struct FBinaryMatProperties
{
    EBinaryComb Result;
    class UTerrainMaterialCore* Material;
};

struct FBinaryMatPatterns
{
    EPattern PatternType;
    class UTerrainMaterialCore* PatternMaterial;
    FBinaryMatProperties ReplaceWith;
};

struct FBinaryTerrainMaterialCombiner
{
    FEmptyBinaryMatProperties IfEmpty;
    FBinaryMatProperties IfSolid;
    TArray<FBinaryMatPatterns> Patterns;
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

struct FCSGChildInstanceProperties
{
    TSubclassOf<class ACSGBuilder> Mesh;
    FBakeSettings Settings;
    int32 Seed;
};

struct FGeneralMatPropertiesEmpty
{
    EGeneralCombEmpty Result;
    class UTerrainMaterialCore* Material;
};

struct FGeneralMatProperties
{
    EGeneralComb Result;
    class UTerrainMaterialCore* Material;
};

struct FGeneralMatPatterns
{
    EGeneralPattern PatternType;
    class UTerrainMaterialCore* PatternMaterial;
    FGeneralMatProperties ReplaceWith;
};

struct FGeneralTerrainMaterialCombiner
{
    FGeneralMatPropertiesEmpty IfBothEmpty;
    TArray<FGeneralMatPatterns> Patterns;
    FGeneralMatProperties IfBothSolid;
    FGeneralMatProperties IfSrcSolid;
    FGeneralMatProperties IfDestSolid;
};

struct FDeepCSGTree
{
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

class USimpleMeshWithCachedTree : public UCSGBase
{
    FBinaryTerrainMaterialCombiner Materials;
    bool InvertCSG;
};

struct FConvexNoiseProperties
{
    float Amplitude;
    float GridSize;
    int32 Seed;
};

class UConvexMeshWithCachedTree : public USimpleMeshWithCachedTree
{
    FConvexNoiseProperties Noise;
};

struct FCSGConvexColliderProperties
{
    class UStaticMesh* collider;
};

class UCSGConvexCollider : public UConvexMeshWithCachedTree
{
    FCSGConvexColliderProperties Properties;
};

class USimpleMeshWithCachedTreeComponent : public UCSGBaseComponent
{
    FBinaryTerrainMaterialCombiner Materials;
    bool InvertCSG;
};

class UConvexMeshWithCachedTreeComponent : public USimpleMeshWithCachedTreeComponent
{
    FConvexNoiseProperties Noise;
};

class UCSGConvexColliderComponent : public UConvexMeshWithCachedTreeComponent
{
    FCSGConvexColliderProperties Properties;
};

class UCSGGroup : public UCSGBase
{
    TArray<class UCSGBase*> Children;
};

class UCSGGroupComponent : public UCSGBaseComponent
{
};

struct FMeshLayerProperties
{
    class UTerrainMaterialCore* StartMaterial;
    FBox BoundingBox;
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

struct FCSGLayers
{
    float Offset;
    FBinaryTerrainMaterialCombiner Above;
};

struct FCSGAddMaterialLayersProperties
{
    TArray<FCSGLayers> Layers;
    FBinaryTerrainMaterialCombiner Inner;
};

class UCSGAddMaterialLayers : public UCSGSingleChildBase
{
    FCSGAddMaterialLayersProperties Properties;
};

class UCSGAddMaterialLayersComponent : public UCSGBaseComponent
{
    FCSGAddMaterialLayersProperties Properties;
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

class UCSGRandomizeTransform : public UCSGSingleChildBase
{
    FCSGRandomizeTransformProperties Properties;
};

class UCSGRandomizeTransformComponent : public UCSGBaseComponent
{
    FCSGRandomizeTransformProperties Properties;
};

struct FCSGRandomDisableProperties
{
    float DisableProbability;
};

class UCSGRandomDisable : public UCSGSingleChildBase
{
    FCSGRandomDisableProperties Properties;
};

class UCSGRandomDisableComponent : public UCSGBaseComponent
{
    FCSGRandomDisableProperties Properties;
};

struct FCSGGridDuplicatorProperties
{
    int32 NumA;
    int32 NumB;
    FVector DirectionA;
    FVector DirectionB;
};

class UCSGGridDuplicator : public UCSGDuplicateSingleChildBase
{
    FCSGGridDuplicatorProperties Properties;
};

class UCSGGridDuplicatorComponent : public UCSGBaseComponent
{
    FCSGGridDuplicatorProperties Properties;
};

struct FCSGCircleDuplicatorProperties
{
    int32 Num;
    float Radius;
};

class UCSGCircleDuplicator : public UCSGDuplicateSingleChildBase
{
    FCSGCircleDuplicatorProperties Properties;
};

class UCSGCircleDuplicatorComponent : public UCSGBaseComponent
{
    FCSGCircleDuplicatorProperties Properties;
};

struct FChunkId
{
    int16 X;
    int16 Y;
    int16 Z;
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

class UCSGPlane : public UConvexMeshWithCachedTree
{
};

class UCSGPlaneComponent : public UConvexMeshWithCachedTreeComponent
{
};

struct FMeshBoxProperties
{
    FVector HalfSize;
    int32 BevelSegments;
    float BevelSize;
};

class UCSGBox : public UConvexMeshWithCachedTree
{
    FMeshBoxProperties Properties;
};

class UCSGBoxComponent : public UConvexMeshWithCachedTreeComponent
{
    FMeshBoxProperties Properties;
};

struct FCSGCylinderProperties
{
    float Height;
    float Radius;
    int32 Sides;
};

class UCSGCylinder : public UConvexMeshWithCachedTree
{
    FCSGCylinderProperties Properties;
};

class UCSGCylinderComponent : public UConvexMeshWithCachedTreeComponent
{
    FCSGCylinderProperties Properties;
};

struct FCSGConeProperties
{
    float Height;
    float RadiusTop;
    float RadiusBottom;
    int32 Sides;
};

class UCSGCone : public UConvexMeshWithCachedTree
{
    FCSGConeProperties Properties;
};

class UCSGConeComponent : public UConvexMeshWithCachedTreeComponent
{
    FCSGConeProperties Properties;
};

struct FCSGSphereProperties
{
    float Radius;
    float AngleTop;
    float AngleBottom;
    int32 SidesTopBottom;
    int32 Sides;
};

class UCSGSphere : public UConvexMeshWithCachedTree
{
    FCSGSphereProperties Properties;
};

class UCSGSphereComponent : public UConvexMeshWithCachedTreeComponent
{
    FCSGSphereProperties Properties;
};

struct FRemappedProperties
{
    EPreviewCellSize CellSize;
};

class UCSGRemapped : public UCSGSingleChildBase
{
    FRemappedProperties Properties;
};

class UCSGRemappedComponent : public UCSGBaseComponent
{
    FRemappedProperties Properties;
};

struct FSplineModProperties
{
    FBox ElementBox;
    bool ForceZUp;
};

class UCSGSplineMod : public UCSGRemapped
{
    FSplineModProperties SplineProperties;
    FSplineCurves SplineCurves;
    TArray<FBox> AABBs;
    TArray<float> Keys;
    TArray<FVector4> Planes;
    FBox TotalAABB;
};

class UCSGSplineModComponent : public UCSGRemappedComponent
{
    FSplineModProperties SplineProperties;
};

struct FCSGSDFInstanceProperties
{
    TSubclassOf<class ASDFBuilder> SDF;
    EPreviewCellSize CellSize;
    FBakeSettings Settings;
    int32 Seed;
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

struct FSDFModulateLayer
{
    float ModulateDistance;
    float SDFOffset;
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

struct FVoronoiProperties
{
    FVector HalfSize;
    int32 NumPoints;
    int32 Seed;
    float Distance;
    bool Inverted;
};

class UCSGVoronoi : public USimpleMeshWithCachedTree
{
    FVoronoiProperties Properties;
};

class UCSGVoronoiComponent : public USimpleMeshWithCachedTreeComponent
{
    FVoronoiProperties Properties;
};

struct FCSGSTLProperties
{
    class UStaticMeshCarver* Mesh;
};

class UCSGSTL : public USimpleMeshWithCachedTree
{
    FCSGSTLProperties Properties;
};

class UCSGSTLComponent : public USimpleMeshWithCachedTreeComponent
{
    FCSGSTLProperties Properties;
};

class ADeepCSGSection : public AActor
{
    class UDeepProceduralMeshComponent* DeepMesh;
};

class UDeepProceduralMeshComponent : public UMeshComponent
{
    class UBodySetup* ProcMeshBodySetup;

    class UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(class UPhysicalMaterial* Material);
};

class ASDFBuilder : public ACSGBuilderBase
{
    EPreviewCellSize PreviewSize;
    class UTerrainMaterialCore* PreviewMaterial;
    class USDFBase* CurrentRoot;
    class USDFUnionOpComponent* SDFRoot;
};

struct FSDFBaseProperties
{
    bool Enabled;
};

class USDFBase : public UBuilderBase
{
    FSDFBaseProperties BaseProperties;
    FTransform RelativeTransform;
};

struct FSDFHeightMaproperties
{
    FVector Scale;
};

class USDFHeightMap : public USDFBase
{
    FSDFHeightMaproperties Properties;
};

class USDFBaseComponent : public UCSGBuilderBaseSceneComponent
{
    FSDFBaseProperties BaseProperties;
};

class UUSDFHeightMapComponent : public USDFBaseComponent
{
    FSDFHeightMaproperties Properties;
    class UTextureRenderTarget2D* HeightTexture;
};

class USDFSingleChildBase : public USDFBase
{
    class USDFBase* Child;
};

struct FSDFModifierProperties
{
    float Offset;
    float CellNoise;
    int32 Seed;
};

class USDFModifier : public USDFSingleChildBase
{
    FSDFModifierProperties Properties;
};

class USDFModifierComponent : public USDFBaseComponent
{
    FSDFModifierProperties Properties;
};

struct FSDFSmoothingProperties
{
    float SmoothingDist;
    bool SmoothingEnabled;
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

class USDFIntersectOp : public USDFBase
{
    FSDFSmoothingProperties Properties;
    TArray<class USDFBase*> Arguments;
};

class USDFIntersectOpComponent : public USDFBaseComponent
{
    FSDFSmoothingProperties Properties;
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

struct FSDFOnionProperties
{
    float Thickness;
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

class USDFRandomizeTransform : public USDFSingleChildBase
{
    FSDFRandomizeTransformProperties Properties;
};

class USDFRandomizeTransformComponent : public USDFBaseComponent
{
    FSDFRandomizeTransformProperties Properties;
};

struct FSDFRandomDisableProperties
{
    float DisableProbability;
};

class USDFRandomDisable : public USDFSingleChildBase
{
    FSDFRandomDisableProperties Properties;
};

class USDFRandomDisableComponent : public USDFBaseComponent
{
    FSDFRandomDisableProperties Properties;
};

class USDFBaseWithTransform : public USDFBase
{
};

class USDFBaseWithTransformComponent : public USDFBaseComponent
{
};

struct FSDFSphereProperties
{
    float Radius;
    FName RadiusOverrideName;
};

class USDFSphere : public USDFBaseWithTransform
{
    FSDFSphereProperties Properties;
};

class USDFSphereComponent : public USDFBaseWithTransformComponent
{
    FSDFSphereProperties Properties;
};

class USDFPlane : public USDFBaseWithTransform
{
};

class USDFPlaneComponent : public USDFBaseWithTransformComponent
{
};

struct FSDFBoxProperties
{
    FVector HalfSize;
};

class USDFBox : public USDFBaseWithTransform
{
    FSDFBoxProperties Properties;
};

class USDFBoxComponent : public USDFBaseWithTransformComponent
{
    FSDFBoxProperties Properties;
};

struct FSDFCylinderProperties
{
    float HalfLength;
    float Radius;
};

class USDFCylinder : public USDFBaseWithTransform
{
    FSDFCylinderProperties Properties;
};

class USDFCylinderComponent : public USDFBaseWithTransformComponent
{
    FSDFCylinderProperties Properties;
};

struct FSDFCapsuleProperties
{
    float HalfLength;
    float Radius;
};

class USDFCapsule : public USDFBaseWithTransform
{
    FSDFCapsuleProperties Properties;
};

class USDFCapsuleComponent : public USDFBaseWithTransformComponent
{
    FSDFCapsuleProperties Properties;
};

struct FSDFTorusProperties
{
    float Radius;
    float TubeRadius;
    FName SizeOverrideName;
};

class USDFTorus : public USDFBaseWithTransform
{
    FSDFTorusProperties Properties;
};

class USDFTorusComponent : public USDFBaseWithTransformComponent
{
    FSDFTorusProperties Properties;
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

struct FChunkOffset
{
    int16 X;
    int16 Y;
    int16 Z;
};

struct FCellId
{
    int16 X;
    int16 Y;
    int16 Z;
};

struct FDeepCSGTreeOperations
{
};

struct FDeepCSGUtils
{
};

struct FLinearCellId
{
    uint16 X;
    uint16 Y;
    uint16 Z;
};

struct FEncodedChunkCellId
{
    FEncodedChunkId ChunkId;
    uint16 cellOffset;
};

struct FChunckIDAndOffsetBox
{
    FChunkId ChunkId;
    FChunkOffset minOffset;
    FChunkOffset maxOffset;
};

struct FChunckIDAndOffset
{
    FChunkId ChunkId;
    FChunkOffset Offset;
};

struct FCellBox
{
    FCellId Min;
    FCellId Max;
};

#endif
