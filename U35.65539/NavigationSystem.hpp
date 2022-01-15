#ifndef UE4SS_SDK_NavigationSystem_HPP
#define UE4SS_SDK_NavigationSystem_HPP

#include "NavigationSystem_enums.hpp"

class ANavigationData : AActor
{
    UPrimitiveComponent* RenderingComp;
    FNavDataConfig NavDataConfig;
    uint8 bEnableDrawing;
    uint8 bForceRebuildOnLoad;
    uint8 bAutoDestroyWhenNoNavigation;
    uint8 bCanBeMainNavData;
    uint8 bCanSpawnOnRebuild;
    uint8 bRebuildAtRuntime;
    ERuntimeGenerationType RuntimeGeneration;
    float ObservedPathsTickInterval;
    uint32 DataVersion;
    TArray<FSupportedAreaData> SupportedAreas;
}

class AAbstractNavData : ANavigationData
{
}

class UCrowdManagerBase : UObject
{
}

class UNavArea : UNavAreaBase
{
    float DefaultCost;
    float FixedAreaEnteringCost;
    FColor DrawColor;
    FNavAgentSelector SupportedAgents;
    uint8 bSupportsAgent0;
    uint8 bSupportsAgent1;
    uint8 bSupportsAgent2;
    uint8 bSupportsAgent3;
    uint8 bSupportsAgent4;
    uint8 bSupportsAgent5;
    uint8 bSupportsAgent6;
    uint8 bSupportsAgent7;
    uint8 bSupportsAgent8;
    uint8 bSupportsAgent9;
    uint8 bSupportsAgent10;
    uint8 bSupportsAgent11;
    uint8 bSupportsAgent12;
    uint8 bSupportsAgent13;
    uint8 bSupportsAgent14;
    uint8 bSupportsAgent15;
}

class UNavArea_Default : UNavArea
{
}

class UNavArea_LowHeight : UNavArea
{
}

class UNavArea_Null : UNavArea
{
}

class UNavArea_Obstacle : UNavArea
{
}

class UNavAreaMeta : UNavArea
{
}

class UNavAreaMeta_SwitchByAgent : UNavAreaMeta
{
    TSubclassOf<UNavArea> Agent0Area;
    TSubclassOf<UNavArea> Agent1Area;
    TSubclassOf<UNavArea> Agent2Area;
    TSubclassOf<UNavArea> Agent3Area;
    TSubclassOf<UNavArea> Agent4Area;
    TSubclassOf<UNavArea> Agent5Area;
    TSubclassOf<UNavArea> Agent6Area;
    TSubclassOf<UNavArea> Agent7Area;
    TSubclassOf<UNavArea> Agent8Area;
    TSubclassOf<UNavArea> Agent9Area;
    TSubclassOf<UNavArea> Agent10Area;
    TSubclassOf<UNavArea> Agent11Area;
    TSubclassOf<UNavArea> Agent12Area;
    TSubclassOf<UNavArea> Agent13Area;
    TSubclassOf<UNavArea> Agent14Area;
    TSubclassOf<UNavArea> Agent15Area;
}

class UNavCollision : UNavCollisionBase
{
    TArray<FNavCollisionCylinder> CylinderCollision;
    TArray<FNavCollisionBox> BoxCollision;
    TSubclassOf<UNavArea> AreaClass;
    uint8 bGatherConvexGeometry;
    uint8 bCreateOnClient;
}

class ANavigationGraph : ANavigationData
{
}

class ANavigationGraphNode : AActor
{
}

class UNavigationGraphNodeComponent : USceneComponent
{
    FNavGraphNode Node;
    UNavigationGraphNodeComponent* NextNodeComponent;
    UNavigationGraphNodeComponent* PrevNodeComponent;
}

class UNavigationInvokerComponent : UActorComponent
{
    float TileGenerationRadius;
    float TileRemovalRadius;
}

class UNavigationPath : UObject
{
    FNavigationPathPathUpdatedNotifier PathUpdatedNotifier;
    void OnNavigationPathUpdated(UNavigationPath* AffectedPath, uint8 PathEvent);
    TArray<FVector> PathPoints;
    TEnumAsByte<ENavigationOptionFlag::Type> RecalculateOnInvalidation;

    bool IsValid();
    bool IsStringPulled();
    bool IsPartial();
    float GetPathLength();
    float GetPathCost();
    FString GetDebugString();
    void EnableRecalculationOnInvalidation(uint8 DoRecalculation);
    void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
}

class UNavigationPathGenerator : UInterface
{
}

class UNavigationQueryFilter : UObject
{
    TArray<FNavigationFilterArea> Areas;
    FNavigationFilterFlags IncludeFlags;
    FNavigationFilterFlags ExcludeFlags;
}

class UNavigationSystemV1 : UNavigationSystemBase
{
    ANavigationData* MainNavData;
    ANavigationData* AbstractNavData;
    FName DefaultAgentName;
    TSoftClassPtr<UCrowdManagerBase> CrowdManagerClass;
    uint8 bAutoCreateNavigationData;
    uint8 bSpawnNavDataInNavBoundsLevel;
    uint8 bAllowClientSideNavigation;
    uint8 bShouldDiscardSubLevelNavData;
    uint8 bTickWhilePaused;
    uint8 bSupportRebuilding;
    uint8 bInitialBuildingLocked;
    uint8 bSkipAgentHeightCheckWhenPickingNavData;
    ENavDataGatheringModeConfig DataGatheringMode;
    uint8 bGenerateNavigationOnlyAroundNavigationInvokers;
    float ActiveTilesUpdateInterval;
    TArray<FNavDataConfig> SupportedAgents;
    FNavAgentSelector SupportedAgentsMask;
    TArray<ANavigationData*> NavDataSet;
    TArray<ANavigationData*> NavDataRegistrationQueue;
    FNavigationSystemV1OnNavDataRegisteredEvent OnNavDataRegisteredEvent;
    void OnNavDataGenericEvent(ANavigationData* NavData);
    FNavigationSystemV1OnNavigationGenerationFinishedDelegate OnNavigationGenerationFinishedDelegate;
    void OnNavDataGenericEvent(ANavigationData* NavData);
    FNavigationSystemRunMode OperationMode;
    float DirtyAreasUpdateFreq;

    void UnregisterNavigationInvoker(AActor* Invoker);
    void SimpleMoveToLocation(AController* Controller, const FVector& Goal);
    void SimpleMoveToActor(AController* Controller, const AActor* Goal);
    void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
    void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
    void ResetMaxSimultaneousTileGenerationJobsCount();
    void RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
    FVector ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    void OnNavigationBoundsUpdated(UNavMeshBoundsVolume* NavVolume);
    bool NavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier);
    bool K2_ReplaceAreaInOctreeData(const UObject* Object, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea);
    bool K2_ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);
    bool IsNavigationBeingBuilt(UObject* WorldContextObject);
    FVector GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    FVector GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    TEnumAsByte<ENavigationQueryResult::Type> GetPathLength(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathLength, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    TEnumAsByte<ENavigationQueryResult::Type> GetPathCost(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);
    UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, const FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
}

class UNavigationSystemModuleConfig : UNavigationSystemConfig
{
    uint8 bStrictlyStatic;
    uint8 bCreateOnClient;
    uint8 bAutoSpawnMissingNavData;
    uint8 bSpawnNavDataInNavBoundsLevel;
}

class ANavigationTestingActor : AActor
{
    UCapsuleComponent* CapsuleComponent;
    UNavigationInvokerComponent* InvokerComponent;
    uint8 bActAsNavigationInvoker;
    FNavAgentProperties NavAgentProps;
    FVector QueryingExtent;
    ANavigationData* MyNavData;
    FVector ProjectedLocation;
    uint8 bProjectedLocationValid;
    uint8 bSearchStart;
    float CostLimitFactor;
    float MinimumCostLimit;
    uint8 bBacktracking;
    uint8 bUseHierarchicalPathfinding;
    uint8 bGatherDetailedInfo;
    uint8 bDrawDistanceToWall;
    uint8 bShowNodePool;
    uint8 bShowBestPath;
    uint8 bShowDiffWithPreviousStep;
    uint8 bShouldBeVisibleInGame;
    TEnumAsByte<ENavCostDisplay::Type> CostDisplayMode;
    FVector2D TextCanvasOffset;
    uint8 bPathExist;
    uint8 bPathIsPartial;
    uint8 bPathSearchOutOfNodes;
    float PathfindingTime;
    float PathCost;
    int32 PathfindingSteps;
    ANavigationTestingActor* OtherActor;
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    int32 ShowStepIndex;
    float OffsetFromCornersDistance;
}

class UNavLinkComponent : UPrimitiveComponent
{
    TArray<FNavigationLink> Links;
}

class UNavRelevantComponent : UActorComponent
{
    uint8 bAttachToOwnersRoot;
    UObject* CachedNavParent;

    void SetNavigationRelevancy(bool bRelevant);
}

class UNavLinkCustomComponent : UNavRelevantComponent
{
    uint32 NavLinkUserId;
    TSubclassOf<UNavArea> EnabledAreaClass;
    TSubclassOf<UNavArea> DisabledAreaClass;
    FNavAgentSelector SupportedAgents;
    FVector LinkRelativeStart;
    FVector LinkRelativeEnd;
    TEnumAsByte<ENavLinkDirection::Type> LinkDirection;
    uint8 bLinkEnabled;
    uint8 bNotifyWhenEnabled;
    uint8 bNotifyWhenDisabled;
    uint8 bCreateBoxObstacle;
    FVector ObstacleOffset;
    FVector ObstacleExtent;
    TSubclassOf<UNavArea> ObstacleAreaClass;
    float BroadcastRadius;
    float BroadcastInterval;
    TEnumAsByte<ECollisionChannel> BroadcastChannel;
}

class UNavLinkCustomInterface : UInterface
{
}

class UNavLinkHostInterface : UInterface
{
}

class UNavLinkRenderingComponent : UPrimitiveComponent
{
}

class UNavLinkTrivial : UNavLinkDefinition
{
}

class ANavMeshBoundsVolume : UVolume
{
    FNavAgentSelector SupportedAgents;
}

class UNavMeshRenderingComponent : UPrimitiveComponent
{
}

class UNavModifierComponent : UNavRelevantComponent
{
    TSubclassOf<UNavArea> AreaClass;
    FVector FailsafeExtent;
    uint8 bIncludeAgentHeight;

    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
}

class ANavModifierVolume : UVolume
{
    TSubclassOf<UNavArea> AreaClass;

    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
}

class UNavNodeInterface : UInterface
{
}

class ANavSystemConfigOverride : AActor
{
    UNavigationSystemConfig* NavigationSystemConfig;
    ENavSystemOverridePolicy OverridePolicy;
    uint8 bLoadOnClient;
}

class UNavTestRenderingComponent : UPrimitiveComponent
{
}

class URecastFilter_UseDefaultArea : UNavigationQueryFilter
{
}

class ARecastNavMesh : ANavigationData
{
    uint8 bDrawTriangleEdges;
    uint8 bDrawPolyEdges;
    uint8 bDrawFilledPolys;
    uint8 bDrawNavMeshEdges;
    uint8 bDrawTileBounds;
    uint8 bDrawPathCollidingGeometry;
    uint8 bDrawTileLabels;
    uint8 bDrawPolygonLabels;
    uint8 bDrawDefaultPolygonCost;
    uint8 bDrawLabelsOnPathNodes;
    uint8 bDrawNavLinks;
    uint8 bDrawFailedNavLinks;
    uint8 bDrawClusters;
    uint8 bDrawOctree;
    uint8 bDrawOctreeDetails;
    uint8 bDrawMarkedForbiddenPolys;
    uint8 bDistinctlyDrawTilesBeingBuilt;
    uint8 bDrawNavMesh;
    float DrawOffset;
    uint8 bFixedTilePoolSize;
    int32 TilePoolSize;
    float TileSizeUU;
    float CellSize;
    float CellHeight;
    float AgentRadius;
    float AgentHeight;
    float AgentMaxHeight;
    float AgentMaxSlope;
    float AgentMaxStepHeight;
    float MinRegionArea;
    float MergeRegionSize;
    float MaxSimplificationError;
    int32 MaxSimultaneousTileGenerationJobsCount;
    int32 TileNumberHardLimit;
    int32 PolyRefTileBits;
    int32 PolyRefNavPolyBits;
    int32 PolyRefSaltBits;
    FVector NavMeshOriginOffset;
    float DefaultDrawDistance;
    float DefaultMaxSearchNodes;
    float DefaultMaxHierarchicalSearchNodes;
    TEnumAsByte<ERecastPartitioning::Type> RegionPartitioning;
    TEnumAsByte<ERecastPartitioning::Type> LayerPartitioning;
    int32 RegionChunkSplits;
    int32 LayerChunkSplits;
    uint8 bSortNavigationAreasByCost;
    uint8 bPerformVoxelFiltering;
    uint8 bMarkLowHeightAreas;
    uint8 bFilterLowSpanSequences;
    uint8 bFilterLowSpanFromTileCache;
    uint8 bDoFullyAsyncNavDataGathering;
    uint8 bUseBetterOffsetsFromCorners;
    uint8 bStoreEmptyTileLayers;
    uint8 bUseVirtualFilters;
    uint8 bAllowNavLinkAsPathEnd;
    uint8 bUseVoxelCache;
    float TileSetUpdateInterval;
    float HeuristicScale;
    float VerticalDeviationFromGroundCompensation;

    bool K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea, bool ReplaceLinks);
}

class URecastNavMeshDataChunk : UNavigationDataChunk
{
}

struct UNavCollisionBox
{
    FVector Offset;
    FVector Extent;
}

struct UNavCollisionCylinder
{
    FVector Offset;
    float Radius;
    float Height;
}

struct USupportedAreaData
{
    FString AreaClassName;
    int32 AreaID;
    UClass* AreaClass;
}

struct UNavGraphNode
{
    UObject* Owner;
}

struct UNavGraphEdge
{
}

struct UNavigationFilterFlags
{
    uint8 bNavFlag0;
    uint8 bNavFlag1;
    uint8 bNavFlag2;
    uint8 bNavFlag3;
    uint8 bNavFlag4;
    uint8 bNavFlag5;
    uint8 bNavFlag6;
    uint8 bNavFlag7;
    uint8 bNavFlag8;
    uint8 bNavFlag9;
    uint8 bNavFlag10;
    uint8 bNavFlag11;
    uint8 bNavFlag12;
    uint8 bNavFlag13;
    uint8 bNavFlag14;
    uint8 bNavFlag15;
}

struct UNavigationFilterArea
{
    TSubclassOf<UNavArea> AreaClass;
    float TravelCostOverride;
    float EnteringCostOverride;
    uint8 bIsExcluded;
    uint8 bOverrideTravelCost;
    uint8 bOverrideEnteringCost;
}

struct UNavLinkCustomInstanceData : FActorComponentInstanceData
{
    uint32 NavLinkUserId;
}

struct URecastNavMeshGenerationProperties
{
    int32 TilePoolSize;
    float TileSizeUU;
    float CellSize;
    float CellHeight;
    float AgentRadius;
    float AgentHeight;
    float AgentMaxSlope;
    float AgentMaxStepHeight;
    float MinRegionArea;
    float MergeRegionSize;
    float MaxSimplificationError;
    int32 TileNumberHardLimit;
    TEnumAsByte<ERecastPartitioning::Type> RegionPartitioning;
    TEnumAsByte<ERecastPartitioning::Type> LayerPartitioning;
    int32 RegionChunkSplits;
    int32 LayerChunkSplits;
    uint8 bSortNavigationAreasByCost;
    uint8 bPerformVoxelFiltering;
    uint8 bMarkLowHeightAreas;
    uint8 bFilterLowSpanSequences;
    uint8 bFilterLowSpanFromTileCache;
    uint8 bFixedTilePoolSize;
}

#endif
