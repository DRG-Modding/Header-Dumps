#ifndef UE4SS_SDK_NavigationSystem_HPP
#define UE4SS_SDK_NavigationSystem_HPP

#include "NavigationSystem_enums.hpp"

struct FNavCollisionBox
{
    FVector Offset;
    FVector Extent;

};

struct FNavCollisionCylinder
{
    FVector Offset;
    float Radius;
    float Height;

};

struct FNavGraphEdge
{
};

struct FNavGraphNode
{
    class UObject* Owner;

};

struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
    uint32 NavLinkUserId;

};

struct FNavigationFilterArea
{
    TSubclassOf<class UNavArea> AreaClass;
    float TravelCostOverride;
    float EnteringCostOverride;
    uint8 bIsExcluded;
    uint8 bOverrideTravelCost;
    uint8 bOverrideEnteringCost;

};

struct FNavigationFilterFlags
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

};

struct FRecastNavMeshGenerationProperties
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
    uint8 bUseExtraTopCellWhenMarkingAreas;
    uint8 bFilterLowSpanSequences;
    uint8 bFilterLowSpanFromTileCache;
    uint8 bFixedTilePoolSize;

};

struct FSupportedAreaData
{
    FString AreaClassName;
    int32 AreaID;
    UClass* AreaClass;

};

class AAbstractNavData : public ANavigationData
{
};

class ANavMeshBoundsVolume : public AVolume
{
    FNavAgentSelector SupportedAgents;

};

class ANavModifierVolume : public AVolume
{
    TSubclassOf<class UNavArea> AreaClass;
    bool bMaskFillCollisionUnderneathForNavmesh;

    void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
};

class ANavSystemConfigOverride : public AActor
{
    class UNavigationSystemConfig* NavigationSystemConfig;
    ENavSystemOverridePolicy OverridePolicy;
    uint8 bLoadOnClient;

};

class ANavigationData : public AActor
{
    class UPrimitiveComponent* RenderingComp;
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

};

class ANavigationGraph : public ANavigationData
{
};

class ANavigationGraphNode : public AActor
{
};

class ANavigationTestingActor : public AActor
{
    class UCapsuleComponent* CapsuleComponent;
    class UNavigationInvokerComponent* InvokerComponent;
    uint8 bActAsNavigationInvoker;
    FNavAgentProperties NavAgentProps;
    FVector QueryingExtent;
    class ANavigationData* MyNavData;
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
    class ANavigationTestingActor* OtherActor;
    TSubclassOf<class UNavigationQueryFilter> FilterClass;
    int32 ShowStepIndex;
    float OffsetFromCornersDistance;

};

class ARecastNavMesh : public ANavigationData
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
    uint8 bDrawPolygonFlags;
    uint8 bDrawLabelsOnPathNodes;
    uint8 bDrawNavLinks;
    uint8 bDrawFailedNavLinks;
    uint8 bDrawClusters;
    uint8 bDrawOctree;
    uint8 bDrawOctreeDetails;
    uint8 bDrawMarkedForbiddenPolys;
    uint8 bDistinctlyDrawTilesBeingBuilt;
    float DrawOffset;
    uint8 bFixedTilePoolSize;
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
    uint8 bUseExtraTopCellWhenMarkingAreas;
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

    bool K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea, bool ReplaceLinks);
};

class INavLinkCustomInterface : public IInterface
{
};

class INavLinkHostInterface : public IInterface
{
};

class INavNodeInterface : public IInterface
{
};

class INavigationPathGenerator : public IInterface
{
};

class UCrowdManagerBase : public UObject
{
};

class UNavArea : public UNavAreaBase
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

};

class UNavAreaMeta : public UNavArea
{
};

class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
    TSubclassOf<class UNavArea> Agent0Area;
    TSubclassOf<class UNavArea> Agent1Area;
    TSubclassOf<class UNavArea> Agent2Area;
    TSubclassOf<class UNavArea> Agent3Area;
    TSubclassOf<class UNavArea> Agent4Area;
    TSubclassOf<class UNavArea> Agent5Area;
    TSubclassOf<class UNavArea> Agent6Area;
    TSubclassOf<class UNavArea> Agent7Area;
    TSubclassOf<class UNavArea> Agent8Area;
    TSubclassOf<class UNavArea> Agent9Area;
    TSubclassOf<class UNavArea> Agent10Area;
    TSubclassOf<class UNavArea> Agent11Area;
    TSubclassOf<class UNavArea> Agent12Area;
    TSubclassOf<class UNavArea> Agent13Area;
    TSubclassOf<class UNavArea> Agent14Area;
    TSubclassOf<class UNavArea> Agent15Area;

};

class UNavArea_Default : public UNavArea
{
};

class UNavArea_LowHeight : public UNavArea
{
};

class UNavArea_Null : public UNavArea
{
};

class UNavArea_Obstacle : public UNavArea
{
};

class UNavCollision : public UNavCollisionBase
{
    TArray<FNavCollisionCylinder> CylinderCollision;
    TArray<FNavCollisionBox> BoxCollision;
    TSubclassOf<class UNavArea> AreaClass;
    uint8 bGatherConvexGeometry;
    uint8 bCreateOnClient;

};

class UNavLinkComponent : public UPrimitiveComponent
{
    TArray<FNavigationLink> Links;

};

class UNavLinkCustomComponent : public UNavRelevantComponent
{
    uint32 NavLinkUserId;
    TSubclassOf<class UNavArea> EnabledAreaClass;
    TSubclassOf<class UNavArea> DisabledAreaClass;
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
    TSubclassOf<class UNavArea> ObstacleAreaClass;
    float BroadcastRadius;
    float BroadcastInterval;
    TEnumAsByte<ECollisionChannel> BroadcastChannel;

};

class UNavLinkRenderingComponent : public UPrimitiveComponent
{
};

class UNavLinkTrivial : public UNavLinkDefinition
{
};

class UNavMeshRenderingComponent : public UPrimitiveComponent
{
};

class UNavModifierComponent : public UNavRelevantComponent
{
    TSubclassOf<class UNavArea> AreaClass;
    FVector FailsafeExtent;
    uint8 bIncludeAgentHeight;

    void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
};

class UNavRelevantComponent : public UActorComponent
{
    uint8 bAttachToOwnersRoot;
    class UObject* CachedNavParent;

    void SetNavigationRelevancy(bool bRelevant);
};

class UNavTestRenderingComponent : public UPrimitiveComponent
{
};

class UNavigationGraphNodeComponent : public USceneComponent
{
    FNavGraphNode Node;
    class UNavigationGraphNodeComponent* NextNodeComponent;
    class UNavigationGraphNodeComponent* PrevNodeComponent;

};

class UNavigationInvokerComponent : public UActorComponent
{
    float TileGenerationRadius;
    float TileRemovalRadius;

};

class UNavigationPath : public UObject
{
    FNavigationPathPathUpdatedNotifier PathUpdatedNotifier;
    void OnNavigationPathUpdated(class UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent);
    TArray<FVector> PathPoints;
    TEnumAsByte<ENavigationOptionFlag::Type> RecalculateOnInvalidation;

    bool IsValid();
    bool IsStringPulled();
    bool IsPartial();
    float GetPathLength();
    float GetPathCost();
    FString GetDebugString();
    void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation);
    void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
};

class UNavigationQueryFilter : public UObject
{
    TArray<FNavigationFilterArea> Areas;
    FNavigationFilterFlags IncludeFlags;
    FNavigationFilterFlags ExcludeFlags;

};

class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
    uint8 bStrictlyStatic;
    uint8 bCreateOnClient;
    uint8 bAutoSpawnMissingNavData;
    uint8 bSpawnNavDataInNavBoundsLevel;

};

class UNavigationSystemV1 : public UNavigationSystemBase
{
    class ANavigationData* MainNavData;
    class ANavigationData* AbstractNavData;
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
    uint8 bGenerateNavigationOnlyAroundNavigationInvokers;
    float ActiveTilesUpdateInterval;
    ENavDataGatheringModeConfig DataGatheringMode;
    float DirtyAreaWarningSizeThreshold;
    TArray<FNavDataConfig> SupportedAgents;
    FNavAgentSelector SupportedAgentsMask;
    TArray<class ANavigationData*> NavDataSet;
    TArray<class ANavigationData*> NavDataRegistrationQueue;
    FNavigationSystemV1OnNavDataRegisteredEvent OnNavDataRegisteredEvent;
    void OnNavDataGenericEvent(class ANavigationData* NavData);
    FNavigationSystemV1OnNavigationGenerationFinishedDelegate OnNavigationGenerationFinishedDelegate;
    void OnNavDataGenericEvent(class ANavigationData* NavData);
    FNavigationSystemRunMode OperationMode;
    float DirtyAreasUpdateFreq;

    void UnregisterNavigationInvoker(class AActor* Invoker);
    void SimpleMoveToLocation(class AController* Controller, const FVector& Goal);
    void SimpleMoveToActor(class AController* Controller, const class AActor* Goal);
    void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
    void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
    void ResetMaxSimultaneousTileGenerationJobsCount();
    void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
    FVector ProjectPointToNavigation(class UObject* WorldContextObject, const FVector& Point, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
    bool NavigationRaycast(class UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<class UNavigationQueryFilter> FilterClass, class AController* Querier);
    bool K2_ReplaceAreaInOctreeData(const class UObject* Object, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea);
    bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
    bool IsNavigationBeingBuilt(class UObject* WorldContextObject);
    FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, const FVector& Origin, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const FVector& Origin, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    TEnumAsByte<ENavigationQueryResult::Type> GetPathLength(class UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathLength, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    TEnumAsByte<ENavigationQueryResult::Type> GetPathCost(class UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);
    class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, const FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
};

class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
};

class URecastNavMeshDataChunk : public UNavigationDataChunk
{
};

#endif
