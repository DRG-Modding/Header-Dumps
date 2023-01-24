#ifndef UE4SS_SDK_Landscape_HPP
#define UE4SS_SDK_Landscape_HPP

#include "Landscape_enums.hpp"

struct FForeignControlPointData
{
};

struct FForeignSplineSegmentData
{
};

struct FForeignWorldSplineData
{
};

struct FGizmoSelectData
{
};

struct FGrassInput
{
    FName Name;
    class ULandscapeGrassType* GrassType;
    FExpressionInput Input;

};

struct FGrassVariety
{
    class UStaticMesh* GrassMesh;
    TArray<class UMaterialInterface*> OverrideMaterials;
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

};

struct FHeightmapData
{
    class UTexture2D* Texture;

};

struct FLandscapeComponentMaterialOverride
{
    FPerPlatformInt LODIndex;
    class UMaterialInterface* Material;

};

struct FLandscapeEditToolRenderData
{
    class UMaterialInterface* ToolMaterial;
    class UMaterialInterface* GizmoMaterial;
    int32 SelectedType;
    int32 DebugChannelR;
    int32 DebugChannelG;
    int32 DebugChannelB;
    class UTexture2D* DataTexture;
    class UTexture2D* LayerContributionTexture;
    class UTexture2D* DirtyTexture;

};

struct FLandscapeEditorLayerSettings
{
};

struct FLandscapeImportLayerInfo
{
};

struct FLandscapeInfoLayerSettings
{
    class ULandscapeLayerInfoObject* LayerInfoObj;
    FName LayerName;

};

struct FLandscapeLayer
{
    FGuid Guid;
    FName Name;
    bool bVisible;
    bool bLocked;
    float HeightmapAlpha;
    float WeightmapAlpha;
    TEnumAsByte<ELandscapeBlendMode> BlendMode;
    TArray<FLandscapeLayerBrush> Brushes;
    TMap<class ULandscapeLayerInfoObject*, class bool> WeightmapLayerAllocationBlend;

};

struct FLandscapeLayerBrush
{
};

struct FLandscapeLayerComponentData
{
    FHeightmapData HeightmapData;
    FWeightmapData WeightmapData;

};

struct FLandscapeLayerStruct
{
    class ULandscapeLayerInfoObject* LayerInfoObj;

};

struct FLandscapeMaterialTextureStreamingInfo
{
    FName TextureName;
    float TexelFactor;

};

struct FLandscapeProxyMaterialOverride
{
    FPerPlatformInt LODIndex;
    class UMaterialInterface* Material;

};

struct FLandscapeSplineConnection
{
    class ULandscapeSplineSegment* Segment;
    uint8 End;

};

struct FLandscapeSplineInterpPoint
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

};

struct FLandscapeSplineMeshEntry
{
    class UStaticMesh* Mesh;
    TArray<class UMaterialInterface*> MaterialOverrides;
    uint8 bCenterH;
    FVector2D CenterAdjust;
    uint8 bScaleToWidth;
    FVector Scale;
    TEnumAsByte<LandscapeSplineMeshOrientation> Orientation;
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    TEnumAsByte<ESplineMeshAxis::Type> UpAxis;

};

struct FLandscapeSplineSegmentConnection
{
    class ULandscapeSplineControlPoint* ControlPoint;
    float TangentLen;
    FName SocketName;

};

struct FLayerBlendInput
{
    FName LayerName;
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;
    FExpressionInput LayerInput;
    FExpressionInput HeightInput;
    float PreviewWeight;
    FVector ConstLayerInput;
    float ConstHeightInput;

};

struct FPhysicalMaterialInput
{
    class UPhysicalMaterial* PhysicalMaterial;
    FExpressionInput Input;

};

struct FWeightmapData
{
    TArray<class UTexture2D*> Textures;
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations;
    TArray<class ULandscapeWeightmapUsage*> TextureUsages;

};

struct FWeightmapLayerAllocationInfo
{
    class ULandscapeLayerInfoObject* LayerInfo;
    uint8 WeightmapTextureIndex;
    uint8 WeightmapTextureChannel;

};

class AControlPointMeshActor : public AActor
{
    class UControlPointMeshComponent* ControlPointMeshComponent;

};

class ALandscape : public ALandscapeProxy
{
};

class ALandscapeBlueprintBrushBase : public AActor
{

    void RequestLandscapeUpdate();
    class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName);
    void Initialize(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize);
    void GetBlueprintRenderDependencies(TArray<class UObject*>& OutStreamableAssets);
};

class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
};

class ALandscapeGizmoActor : public AActor
{
};

class ALandscapeMeshProxyActor : public AActor
{
    class ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;

};

class ALandscapeProxy : public AActor
{
    class ULandscapeSplinesComponent* SplineComponent;
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
    class UPhysicalMaterial* DefaultPhysMaterial;
    float StreamingDistanceMultiplier;
    class UMaterialInterface* LandscapeMaterial;
    class UMaterialInterface* LandscapeHoleMaterial;
    TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride;
    bool bMeshHoles;
    uint8 MeshHolesMaxLod;
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures;
    int32 VirtualTextureNumLods;
    int32 VirtualTextureLodBias;
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    float NegativeZBoundsExtension;
    float PositiveZBoundsExtension;
    TArray<class ULandscapeComponent*> LandscapeComponents;
    TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;
    TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;
    bool bHasLandscapeGrass;
    float StaticLightingResolution;
    uint8 CastShadow;
    uint8 bCastDynamicShadow;
    uint8 bCastStaticShadow;
    uint8 bCastFarShadow;
    uint8 bCastHiddenShadow;
    uint8 bCastShadowAsTwoSided;
    uint8 bAffectDistanceFieldLighting;
    FLightingChannels LightingChannels;
    uint8 bUseMaterialPositionOffsetInStaticLighting;
    uint8 bRenderCustomDepth;
    ERendererStencilMask CustomDepthStencilWriteMask;
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
    TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;

    void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);
    void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
    bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
    void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
    void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName);
    void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
    void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
    void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

class ALandscapeStreamingProxy : public ALandscapeProxy
{
    TLazyObjectPtr<class ALandscape> LandscapeActor;

};

class UControlPointMeshComponent : public UStaticMeshComponent
{
    float VirtualTextureMainPassMaxDrawDistance;

};

class ULandscapeComponent : public UPrimitiveComponent
{
    int32 SectionBaseX;
    int32 SectionBaseY;
    int32 ComponentSizeQuads;
    int32 SubsectionSizeQuads;
    int32 NumSubsections;
    class UMaterialInterface* OverrideMaterial;
    class UMaterialInterface* OverrideHoleMaterial;
    TArray<FLandscapeComponentMaterialOverride> OverrideMaterials;
    TArray<class UMaterialInstanceConstant*> MaterialInstances;
    TArray<class UMaterialInstanceDynamic*> MaterialInstancesDynamic;
    TArray<int8> LODIndexToMaterialIndex;
    TArray<int8> MaterialIndexToDisabledTessellationMaterial;
    class UTexture2D* XYOffsetmapTexture;
    FVector4 WeightmapScaleBias;
    float WeightmapSubsectionOffset;
    FVector4 HeightmapScaleBias;
    FBox CachedLocalBox;
    TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;
    class UTexture2D* HeightmapTexture;
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;
    TArray<class UTexture2D*> WeightmapTextures;
    class ULandscapeLODStreamingProxy* LODStreamingProxy;
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
    class UTexture2D* GIBakedBaseColorTexture;
    uint8 MobileBlendableLayerMask;
    class UMaterialInterface* MobileMaterialInterface;
    TArray<class UMaterialInterface*> MobileMaterialInterfaces;
    TArray<class UTexture2D*> MobileWeightmapTextures;

    class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex);
    float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName);
    float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
};

class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
};

class ULandscapeGrassType : public UObject
{
    TArray<FGrassVariety> GrassVarieties;
    uint8 bEnableDensityScaling;
    class UStaticMesh* GrassMesh;
    float GrassDensity;
    float PlacementJitter;
    int32 StartCullDistance;
    int32 EndCullDistance;
    bool RandomRotation;
    bool AlignToSurface;

};

class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
    TArray<class ULandscapeLayerInfoObject*> ComponentLayerInfos;
    int32 SectionBaseX;
    int32 SectionBaseY;
    int32 CollisionSizeQuads;
    float CollisionScale;
    int32 SimpleCollisionSizeQuads;
    TArray<uint8> CollisionQuadFlags;
    FGuid HeightfieldGuid;
    FBox CachedLocalBox;
    TLazyObjectPtr<class ULandscapeComponent> RenderComponent;
    TArray<class UPhysicalMaterial*> CookedPhysicalMaterials;

    class ULandscapeComponent* GetRenderComponent();
};

class ULandscapeInfo : public UObject
{
    TLazyObjectPtr<class ALandscape> LandscapeActor;
    FGuid LandscapeGuid;
    int32 ComponentSizeQuads;
    int32 SubsectionSizeQuads;
    int32 ComponentNumSubsections;
    FVector DrawScale;
    TArray<class ALandscapeStreamingProxy*> Proxies;

};

class ULandscapeInfoMap : public UObject
{
};

class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{
};

class ULandscapeLayerInfoObject : public UObject
{
    FName LayerName;
    class UPhysicalMaterial* PhysMaterial;
    float Hardness;
    FLinearColor LayerUsageDebugColor;

};

class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
    TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;
    uint8 bIsLayerThumbnail;
    uint8 bDisableTessellation;
    uint8 bMobile;
    uint8 bEditorToolUsage;

};

class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
    FGuid MeshGuid;

};

class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
    FGuid LandscapeGuid;
    TArray<FIntPoint> ProxyComponentBases;
    int8 ProxyLOD;

};

class ULandscapeSettings : public UDeveloperSettings
{
    int32 MaxNumberOfLayers;

};

class ULandscapeSplineControlPoint : public UObject
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
    class UControlPointMeshComponent* LocalMeshComponent;

};

class ULandscapeSplineSegment : public UObject
{
    FLandscapeSplineSegmentConnection Connections;
    FInterpCurveVector SplineInfo;
    TArray<FLandscapeSplineInterpPoint> Points;
    FBox Bounds;
    TArray<class USplineMeshComponent*> LocalMeshComponents;

};

class ULandscapeSplinesComponent : public UPrimitiveComponent
{
    TArray<class ULandscapeSplineControlPoint*> ControlPoints;
    TArray<class ULandscapeSplineSegment*> Segments;
    TArray<class UMeshComponent*> CookedForeignMeshComponents;

    TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};

class ULandscapeSubsystem : public UTickableWorldSubsystem
{
};

class ULandscapeWeightmapUsage : public UObject
{
    class ULandscapeComponent* ChannelUsage;
    FGuid LayerGuid;

};

class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
    TArray<FGrassInput> GrassTypes;

};

class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
    TArray<FLayerBlendInput> Layers;
    FGuid ExpressionGUID;

};

class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
    TEnumAsByte<ETerrainCoordMappingType> MappingType;
    TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType;
    float MappingScale;
    float MappingRotation;
    float MappingPanU;
    float MappingPanV;

};

class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
    FName ParameterName;
    float PreviewWeight;
    FGuid ExpressionGUID;

};

class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
    FExpressionInput LayerUsed;
    FExpressionInput LayerNotUsed;
    FName ParameterName;
    uint8 PreviewUsed;
    FGuid ExpressionGUID;

};

class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
    FExpressionInput Base;
    FExpressionInput Layer;
    FName ParameterName;
    float PreviewWeight;
    FVector ConstBase;
    FGuid ExpressionGUID;

};

class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
    TArray<FPhysicalMaterialInput> Inputs;

};

class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
    FGuid ExpressionGUID;

};

#endif
