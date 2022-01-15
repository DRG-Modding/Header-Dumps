#ifndef UE4SS_SDK_Landscape_HPP
#define UE4SS_SDK_Landscape_HPP

#include "Landscape_enums.hpp"

class AControlPointMeshActor : AActor
{
    UControlPointMeshComponent* ControlPointMeshComponent;
}

class UControlPointMeshComponent : UStaticMeshComponent
{
    float VirtualTextureMainPassMaxDrawDistance;
}

class ALandscapeProxy : AActor
{
    ULandscapeSplinesComponent* SplineComponent;
    FGuid LandscapeGuid;
    FIntPoint LandscapeSectionOffset;
    int32 MaxLODLevel;
    float LODDistanceFactor;
    TEnumAsByte<ELandscapeLODFalloff::Type> LODFalloff;
    float ComponentScreenSizeToUseSubSections;
    float LOD0ScreenSize;
    float LOD0DistributionSetting;
    float LODDistributionSetting;
    float TessellationComponentScreenSize;
    bool UseTessellationComponentScreenSizeFalloff;
    float TessellationComponentScreenSizeFalloff;
    int32 OccluderGeometryLOD;
    int32 StaticLightingLOD;
    UPhysicalMaterial* DefaultPhysMaterial;
    float StreamingDistanceMultiplier;
    UMaterialInterface* LandscapeMaterial;
    UMaterialInterface* LandscapeHoleMaterial;
    TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride;
    bool bMeshHoles;
    uint8 MeshHolesMaxLod;
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    int32 VirtualTextureNumLods;
    int32 VirtualTextureLodBias;
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    float NegativeZBoundsExtension;
    float PositiveZBoundsExtension;
    TArray<ULandscapeComponent*> LandscapeComponents;
    TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents;
    TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;
    bool bHasLandscapeGrass;
    float StaticLightingResolution;
    uint8 bCastStaticShadow;
    uint8 bCastShadowAsTwoSided;
    uint8 bCastFarShadow;
    uint8 bAffectDistanceFieldLighting;
    FLightingChannels LightingChannels;
    uint8 bUseMaterialPositionOffsetInStaticLighting;
    uint8 bRenderCustomDepth;
    int32 CustomDepthStencilValue;
    float LDMaxDrawDistance;
    FLightmassPrimitiveSettings LightmassSettings;
    int32 CollisionMipLevel;
    int32 SimpleCollisionMipLevel;
    float CollisionThickness;
    FBodyInstance BodyInstance;
    uint8 bGenerateOverlapEvents;
    uint8 bBakeMaterialPositionOffsetIntoCollision;
    int32 ComponentSizeQuads;
    int32 SubsectionSizeQuads;
    int32 NumSubsections;
    uint8 bUsedForNavigation;
    uint8 bFillCollisionUnderLandscapeForNavmesh;
    bool bUseDynamicMaterialInstance;
    ENavDataGatheringMode NavigationGeometryGatheringMode;
    bool bUseLandscapeForCullingInvisibleHLODVertices;
    bool bHasLayersContent;
    TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap;

    void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);
    void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
    void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);
    void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer);
    void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
    void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
    void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
}

class ALandscape : ALandscapeProxy
{
}

class ALandscapeBlueprintBrushBase : AActor
{

    void RequestLandscapeUpdate();
    UTextureRenderTarget2D* Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName);
    void Initialize(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize);
    void GetBlueprintRenderDependencies(TArray<UTexture2D*>& OutStreamableAssets);
}

class ULandscapeComponent : UPrimitiveComponent
{
    int32 SectionBaseX;
    int32 SectionBaseY;
    int32 ComponentSizeQuads;
    int32 SubsectionSizeQuads;
    int32 NumSubsections;
    UMaterialInterface* OverrideMaterial;
    UMaterialInterface* OverrideHoleMaterial;
    TArray<FLandscapeComponentMaterialOverride> OverrideMaterials;
    TArray<UMaterialInstanceConstant*> MaterialInstances;
    TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic;
    TArray<int8> LODIndexToMaterialIndex;
    TArray<int8> MaterialIndexToDisabledTessellationMaterial;
    UTexture2D* XYOffsetmapTexture;
    FVector4 WeightmapScaleBias;
    float WeightmapSubsectionOffset;
    FVector4 HeightmapScaleBias;
    FBox CachedLocalBox;
    TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent> CollisionComponent;
    UTexture2D* HeightmapTexture;
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;
    TArray<UTexture2D*> WeightmapTextures;
    FGuid MapBuildDataId;
    TArray<FGuid> IrrelevantLights;
    int32 CollisionMipLevel;
    int32 SimpleCollisionMipLevel;
    float NegativeZBoundsExtension;
    float PositiveZBoundsExtension;
    float StaticLightingResolution;
    int32 ForcedLOD;
    int32 LODBias;
    FGuid StateId;
    FGuid BakedTextureMaterialGuid;
    UTexture2D* GIBakedBaseColorTexture;
    uint8 MobileBlendableLayerMask;
    UMaterialInterface* MobileMaterialInterface;
    TArray<UMaterialInterface*> MobileMaterialInterfaces;
    TArray<UTexture2D*> MobileWeightmapTextures;

    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex);
    float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName);
    float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);
}

class ALandscapeGizmoActor : AActor
{
}

class ALandscapeGizmoActiveActor : ALandscapeGizmoActor
{
}

class ULandscapeGizmoRenderComponent : UPrimitiveComponent
{
}

class ULandscapeGrassType : UObject
{
    TArray<FGrassVariety> GrassVarieties;
    uint8 bEnableDensityScaling;
    UStaticMesh* GrassMesh;
    float GrassDensity;
    float PlacementJitter;
    int32 StartCullDistance;
    int32 EndCullDistance;
    bool RandomRotation;
    bool AlignToSurface;
}

class ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent
{
    TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos;
    int32 SectionBaseX;
    int32 SectionBaseY;
    int32 CollisionSizeQuads;
    float CollisionScale;
    int32 SimpleCollisionSizeQuads;
    TArray<uint8> CollisionQuadFlags;
    FGuid HeightfieldGuid;
    FBox CachedLocalBox;
    TLazyObjectPtr<ULandscapeComponent> RenderComponent;
    TArray<UPhysicalMaterial*> CookedPhysicalMaterials;

    ULandscapeComponent* GetRenderComponent();
}

class ULandscapeInfo : UObject
{
    TLazyObjectPtr<ALandscape> LandscapeActor;
    FGuid LandscapeGuid;
    int32 ComponentSizeQuads;
    int32 SubsectionSizeQuads;
    int32 ComponentNumSubsections;
    FVector DrawScale;
    TArray<ALandscapeStreamingProxy*> Proxies;
}

class ULandscapeInfoMap : UObject
{
}

class ULandscapeLayerInfoObject : UObject
{
    FName LayerName;
    UPhysicalMaterial* PhysMaterial;
    float Hardness;
    FLinearColor LayerUsageDebugColor;
}

class ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
{
    TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;
    uint8 bIsLayerThumbnail;
    uint8 bDisableTessellation;
    uint8 bMobile;
    uint8 bEditorToolUsage;
}

class ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
{
    FGuid MeshGuid;
}

class ALandscapeMeshProxyActor : AActor
{
    ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;
}

class ULandscapeMeshProxyComponent : UStaticMeshComponent
{
    FGuid LandscapeGuid;
    TArray<FIntPoint> ProxyComponentBases;
    int8 ProxyLOD;
}

class ULandscapeSettings : UDeveloperSettings
{
    int32 MaxNumberOfLayers;
}

class ULandscapeSplinesComponent : UPrimitiveComponent
{
    TArray<ULandscapeSplineControlPoint*> ControlPoints;
    TArray<ULandscapeSplineSegment*> Segments;
    TArray<UMeshComponent*> CookedForeignMeshComponents;

    TArray<USplineMeshComponent*> GetSplineMeshComponents();
}

class ULandscapeSplineControlPoint : UObject
{
    FVector Location;
    FRotator Rotation;
    float Width;
    float LayerWidthRatio;
    float SideFalloff;
    float LeftSideFalloffFactor;
    float RightSideFalloffFactor;
    float LeftSideLayerFalloffFactor;
    float RightSideLayerFalloffFactor;
    float EndFalloff;
    TArray<FLandscapeSplineConnection> ConnectedSegments;
    TArray<FLandscapeSplineInterpPoint> Points;
    FBox Bounds;
    UControlPointMeshComponent* LocalMeshComponent;
}

class ULandscapeSplineSegment : UObject
{
    FLandscapeSplineSegmentConnection Connections;
    FInterpCurveVector SplineInfo;
    TArray<FLandscapeSplineInterpPoint> Points;
    FBox Bounds;
    TArray<USplineMeshComponent*> LocalMeshComponents;
}

class ALandscapeStreamingProxy : ALandscapeProxy
{
    TLazyObjectPtr<ALandscape> LandscapeActor;
}

class ULandscapeSubsystem : UWorldSubsystem
{
}

class ULandscapeWeightmapUsage : UObject
{
    ULandscapeComponent* ChannelUsage;
    FGuid LayerGuid;
}

class UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput
{
    TArray<FGrassInput> GrassTypes;
}

class UMaterialExpressionLandscapeLayerBlend : UMaterialExpression
{
    TArray<FLayerBlendInput> Layers;
    FGuid ExpressionGUID;
}

class UMaterialExpressionLandscapeLayerCoords : UMaterialExpression
{
    TEnumAsByte<ETerrainCoordMappingType> MappingType;
    TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType;
    float MappingScale;
    float MappingRotation;
    float MappingPanU;
    float MappingPanV;
}

class UMaterialExpressionLandscapeLayerSample : UMaterialExpression
{
    FName ParameterName;
    float PreviewWeight;
    FGuid ExpressionGUID;
}

class UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression
{
    FExpressionInput LayerUsed;
    FExpressionInput LayerNotUsed;
    FName ParameterName;
    uint8 PreviewUsed;
    FGuid ExpressionGUID;
}

class UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
{
    FExpressionInput Base;
    FExpressionInput Layer;
    FName ParameterName;
    float PreviewWeight;
    FVector ConstBase;
    FGuid ExpressionGUID;
}

class UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression
{
    FGuid ExpressionGUID;
}

struct ULandscapeLayer
{
    FGuid Guid;
    FName Name;
    bool bVisible;
    bool bLocked;
    float HeightmapAlpha;
    float WeightmapAlpha;
    TEnumAsByte<ELandscapeBlendMode> BlendMode;
    TArray<FLandscapeLayerBrush> Brushes;
    TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;
}

struct ULandscapeLayerBrush
{
}

struct ULandscapeLayerComponentData
{
    FHeightmapData HeightmapData;
    FWeightmapData WeightmapData;
}

struct UWeightmapData
{
    TArray<UTexture2D*> Textures;
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations;
    TArray<ULandscapeWeightmapUsage*> TextureUsages;
}

struct UWeightmapLayerAllocationInfo
{
    ULandscapeLayerInfoObject* LayerInfo;
    uint8 WeightmapTextureIndex;
    uint8 WeightmapTextureChannel;
}

struct UHeightmapData
{
    UTexture2D* Texture;
}

struct ULandscapeComponentMaterialOverride
{
    FPerPlatformInt LODIndex;
    UMaterialInterface* Material;
}

struct ULandscapeEditToolRenderData
{
    UMaterialInterface* ToolMaterial;
    UMaterialInterface* GizmoMaterial;
    int32 SelectedType;
    int32 DebugChannelR;
    int32 DebugChannelG;
    int32 DebugChannelB;
    UTexture2D* DataTexture;
    UTexture2D* LayerContributionTexture;
    UTexture2D* DirtyTexture;
}

struct UGizmoSelectData
{
}

struct UGrassVariety
{
    UStaticMesh* GrassMesh;
    FPerPlatformFloat GrassDensity;
    bool bUseGrid;
    float PlacementJitter;
    FPerPlatformInt StartCullDistance;
    FPerPlatformInt EndCullDistance;
    int32 MinLOD;
    EGrassScaling Scaling;
    FFloatInterval ScaleX;
    FFloatInterval ScaleY;
    FFloatInterval ScaleZ;
    bool RandomRotation;
    bool AlignToSurface;
    bool bUseLandscapeLightmap;
    FLightingChannels LightingChannels;
    bool bReceivesDecals;
    bool bCastDynamicShadow;
    bool bKeepInstanceBufferCPUCopy;
}

struct ULandscapeInfoLayerSettings
{
    ULandscapeLayerInfoObject* LayerInfoObj;
    FName LayerName;
}

struct ULandscapeMaterialTextureStreamingInfo
{
    FName TextureName;
    float TexelFactor;
}

struct ULandscapeProxyMaterialOverride
{
    FPerPlatformInt LODIndex;
    UMaterialInterface* Material;
}

struct ULandscapeImportLayerInfo
{
}

struct ULandscapeLayerStruct
{
    ULandscapeLayerInfoObject* LayerInfoObj;
}

struct ULandscapeEditorLayerSettings
{
}

struct ULandscapeSplineConnection
{
    ULandscapeSplineSegment* Segment;
    uint8 End;
}

struct UForeignWorldSplineData
{
}

struct UForeignSplineSegmentData
{
}

struct UForeignControlPointData
{
}

struct ULandscapeSplineMeshEntry
{
    UStaticMesh* Mesh;
    TArray<UMaterialInterface*> MaterialOverrides;
    uint8 bCenterH;
    FVector2D CenterAdjust;
    uint8 bScaleToWidth;
    FVector Scale;
    TEnumAsByte<LandscapeSplineMeshOrientation> Orientation;
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    TEnumAsByte<ESplineMeshAxis::Type> UpAxis;
}

struct ULandscapeSplineSegmentConnection
{
    ULandscapeSplineControlPoint* ControlPoint;
    float TangentLen;
    FName SocketName;
}

struct ULandscapeSplineInterpPoint
{
    FVector Center;
    FVector Left;
    FVector Right;
    FVector FalloffLeft;
    FVector FalloffRight;
    FVector LayerLeft;
    FVector LayerRight;
    FVector LayerFalloffLeft;
    FVector LayerFalloffRight;
    float StartEndFalloff;
}

struct UGrassInput
{
    FName Name;
    ULandscapeGrassType* GrassType;
    FExpressionInput Input;
}

struct ULayerBlendInput
{
    FName LayerName;
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;
    FExpressionInput LayerInput;
    FExpressionInput HeightInput;
    float PreviewWeight;
    FVector ConstLayerInput;
    float ConstHeightInput;
}

#endif
