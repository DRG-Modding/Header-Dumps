// Class NavigationSystem.NavigationData
// Size: 0x400 (Inherited: 0x220)
struct ANavigationData : AActor {
	UPrimitiveComponent* RenderingComp; // 0x228(0x08)
	FNavDataConfig NavDataConfig; // 0x230(0x78)
	char bEnableDrawing : 1; // 0x2a8(0x01)
	char bForceRebuildOnLoad : 1; // 0x2a8(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x2a8(0x01)
	char bCanBeMainNavData : 1; // 0x2a8(0x01)
	char bCanSpawnOnRebuild : 1; // 0x2a8(0x01)
	char bRebuildAtRuntime : 1; // 0x2a8(0x01)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x2ac(0x01)
	float ObservedPathsTickInterval; // 0x2b0(0x04)
	uint32_t DataVersion; // 0x2b4(0x04)
	TArray<FSupportedAreaData> SupportedAreas; // 0x398(0x10)
};

// Class NavigationSystem.AbstractNavData
// Size: 0x400 (Inherited: 0x400)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	FColor DrawColor; // 0x38(0x04)
	FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
};

// Class NavigationSystem.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	UNavArea* Agent0Area; // 0x48(0x08)
	UNavArea* Agent1Area; // 0x50(0x08)
	UNavArea* Agent2Area; // 0x58(0x08)
	UNavArea* Agent3Area; // 0x60(0x08)
	UNavArea* Agent4Area; // 0x68(0x08)
	UNavArea* Agent5Area; // 0x70(0x08)
	UNavArea* Agent6Area; // 0x78(0x08)
	UNavArea* Agent7Area; // 0x80(0x08)
	UNavArea* Agent8Area; // 0x88(0x08)
	UNavArea* Agent9Area; // 0x90(0x08)
	UNavArea* Agent10Area; // 0x98(0x08)
	UNavArea* Agent11Area; // 0xa0(0x08)
	UNavArea* Agent12Area; // 0xa8(0x08)
	UNavArea* Agent13Area; // 0xb0(0x08)
	UNavArea* Agent14Area; // 0xb8(0x08)
	UNavArea* Agent15Area; // 0xc0(0x08)
};

// Class NavigationSystem.NavCollision
// Size: 0xd8 (Inherited: 0x70)
struct UNavCollision : UNavCollisionBase {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	TArray<FNavCollisionBox> BoxCollision; // 0x90(0x10)
	UNavArea* AreaClass; // 0xa0(0x08)
	char bGatherConvexGeometry : 1; // 0xa8(0x01)
	char bCreateOnClient : 1; // 0xa8(0x01)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x400 (Inherited: 0x400)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x220 (Inherited: 0x220)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UNavigationGraphNodeComponent : USceneComponent {
	FNavGraphNode Node; // 0x1f0(0x18)
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x208(0x08)
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x210(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb0(0x04)
	float TileRemovalRadius; // 0xb4(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x88 (Inherited: 0x28)
struct UNavigationPath : UObject {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	TArray<FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)

	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	FString GetDebugString();
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x48 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject {
	TArray<FNavigationFilterArea> Areas; // 0x28(0x10)
	FNavigationFilterFlags IncludeFlags; // 0x38(0x04)
	FNavigationFilterFlags ExcludeFlags; // 0x3c(0x04)
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x538 (Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase {
	ANavigationData* MainNavData; // 0x28(0x08)
	ANavigationData* AbstractNavData; // 0x30(0x08)
	FName DefaultAgentName; // 0x38(0x08)
	TSoftClassPtr<UObject> CrowdManagerClass; // 0x40(0x28)
	char bAutoCreateNavigationData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char bAllowClientSideNavigation : 1; // 0x68(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x68(0x01)
	char bTickWhilePaused : 1; // 0x68(0x01)
	char bSupportRebuilding : 1; // 0x68(0x01)
	char bInitialBuildingLocked : 1; // 0x68(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x01)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x6c(0x01)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x70(0x01)
	float ActiveTilesUpdateInterval; // 0x74(0x04)
	TArray<FNavDataConfig> SupportedAgents; // 0x78(0x10)
	FNavAgentSelector SupportedAgentsMask; // 0x88(0x04)
	TArray<ANavigationData*> NavDataSet; // 0x90(0x10)
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0xa0(0x10)
	FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc0(0x10)
	FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd0(0x10)
	enum class FNavigationSystemRunMode OperationMode; // 0x1bc(0x01)
	float DirtyAreasUpdateFreq; // 0x514(0x04)

	void UnregisterNavigationInvoker(AActor* Invoker);
	void SimpleMoveToLocation(AController* Controller, FVector Goal);
	void SimpleMoveToActor(AController* Controller, AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	FVector ProjectPointToNavigation(UObject* WorldContextObject, FVector Point, ANavigationData* NavData, UNavigationQueryFilter* FilterClass, FVector QueryExtent);
	void OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume);
	bool NavigationRaycast(UObject* WorldContextObject, FVector RayStart, FVector RayEnd, FVector HitLocation, UNavigationQueryFilter* FilterClass, AController* Querier);
	bool K2_ReplaceAreaInOctreeData(UObject* Object, UNavArea* OldArea, UNavArea* NewArea);
	bool K2_ProjectPointToNavigation(UObject* WorldContextObject, FVector Point, FVector ProjectedLocation, ANavigationData* NavData, UNavigationQueryFilter* FilterClass, FVector QueryExtent);
	bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector Origin, FVector RandomLocation, float Radius, ANavigationData* NavData, UNavigationQueryFilter* FilterClass);
	bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector Origin, FVector RandomLocation, float Radius, ANavigationData* NavData, UNavigationQueryFilter* FilterClass);
	bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, FVector Origin, FVector RandomLocation, float Radius, ANavigationData* NavData, UNavigationQueryFilter* FilterClass);
	bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);
	bool IsNavigationBeingBuilt(UObject* WorldContextObject);
	FVector GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector Origin, float Radius, ANavigationData* NavData, UNavigationQueryFilter* FilterClass);
	FVector GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector Origin, float Radius, ANavigationData* NavData, UNavigationQueryFilter* FilterClass);
	enum class ENavigationQueryResult GetPathLength(UObject* WorldContextObject, FVector PathStart, FVector PathEnd, float PathLength, ANavigationData* NavData, UNavigationQueryFilter* FilterClass);
	enum class ENavigationQueryResult GetPathCost(UObject* WorldContextObject, FVector PathStart, FVector PathEnd, float PathCost, ANavigationData* NavData, UNavigationQueryFilter* FilterClass);
	UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);
	UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, FVector PathStart, FVector PathEnd, AActor* PathfindingContext, UNavigationQueryFilter* FilterClass);
	UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, FVector PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, UNavigationQueryFilter* FilterClass);
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x58 (Inherited: 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50(0x01)
	char bCreateOnClient : 1; // 0x50(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x50(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50(0x01)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x310 (Inherited: 0x220)
struct ANavigationTestingActor : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x230(0x08)
	UNavigationInvokerComponent* InvokerComponent; // 0x238(0x08)
	char bActAsNavigationInvoker : 1; // 0x240(0x01)
	FNavAgentProperties NavAgentProps; // 0x248(0x30)
	FVector QueryingExtent; // 0x278(0x0c)
	ANavigationData* MyNavData; // 0x288(0x08)
	FVector ProjectedLocation; // 0x290(0x0c)
	char bProjectedLocationValid : 1; // 0x29c(0x01)
	char bSearchStart : 1; // 0x29c(0x01)
	float CostLimitFactor; // 0x2a0(0x04)
	float MinimumCostLimit; // 0x2a4(0x04)
	char bBacktracking : 1; // 0x2a8(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x2a8(0x01)
	char bGatherDetailedInfo : 1; // 0x2a8(0x01)
	char bDrawDistanceToWall : 1; // 0x2a8(0x01)
	char bShowNodePool : 1; // 0x2a8(0x01)
	char pad_289_0 : 5; // 0x289(0x01)
	char bShowBestPath : 1; // 0x2a8(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x2a8(0x01)
	char bShouldBeVisibleInGame : 1; // 0x2a8(0x01)
	enum class ENavCostDisplay CostDisplayMode; // 0x2ac(0x01)
	FVector2D TextCanvasOffset; // 0x2b0(0x08)
	char bPathExist : 1; // 0x2b8(0x01)
	char bPathIsPartial : 1; // 0x2b8(0x01)
	char bPathSearchOutOfNodes : 1; // 0x2b8(0x01)
	float PathfindingTime; // 0x2bc(0x04)
	float PathCost; // 0x2c0(0x04)
	int32_t PathfindingSteps; // 0x2c4(0x04)
	ANavigationTestingActor* OtherActor; // 0x2c8(0x08)
	UNavigationQueryFilter* FilterClass; // 0x2d0(0x08)
	int32_t ShowStepIndex; // 0x2d8(0x04)
	float OffsetFromCornersDistance; // 0x2dc(0x04)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x410 (Inherited: 0x3f0)
struct UNavLinkComponent : UPrimitiveComponent {
	TArray<FNavigationLink> Links; // 0x3f8(0x10)
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0xd4(0x01)
	UObject* CachedNavParent; // 0xd8(0x08)

	void SetNavigationRelevancy(bool bRelevant);
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x190 (Inherited: 0xe0)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	uint32_t NavLinkUserId; // 0xe8(0x04)
	UNavArea* EnabledAreaClass; // 0xf0(0x08)
	UNavArea* DisabledAreaClass; // 0xf8(0x08)
	FNavAgentSelector SupportedAgents; // 0x100(0x04)
	FVector LinkRelativeStart; // 0x104(0x0c)
	FVector LinkRelativeEnd; // 0x110(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x11c(0x01)
	char bLinkEnabled : 1; // 0x120(0x01)
	char bNotifyWhenEnabled : 1; // 0x120(0x01)
	char bNotifyWhenDisabled : 1; // 0x120(0x01)
	char bCreateBoxObstacle : 1; // 0x120(0x01)
	FVector ObstacleOffset; // 0x124(0x0c)
	FVector ObstacleExtent; // 0x130(0x0c)
	UNavArea* ObstacleAreaClass; // 0x140(0x08)
	float BroadcastRadius; // 0x148(0x04)
	float BroadcastInterval; // 0x14c(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x150(0x01)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x3f0 (Inherited: 0x3f0)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x260 (Inherited: 0x258)
struct ANavMeshBoundsVolume : AVolume {
	FNavAgentSelector SupportedAgents; // 0x258(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x400 (Inherited: 0x3f0)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x140 (Inherited: 0xe0)
struct UNavModifierComponent : UNavRelevantComponent {
	UNavArea* AreaClass; // 0xe0(0x08)
	FVector FailsafeExtent; // 0xe8(0x0c)
	char bIncludeAgentHeight : 1; // 0xf4(0x01)

	void SetAreaClass(UNavArea* NewAreaClass);
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x268 (Inherited: 0x258)
struct ANavModifierVolume : AVolume {
	UNavArea* AreaClass; // 0x260(0x08)

	void SetAreaClass(UNavArea* NewAreaClass);
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x230 (Inherited: 0x220)
struct ANavSystemConfigOverride : AActor {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x220(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x228(0x01)
	char bLoadOnClient : 1; // 0x229(0x01)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x3f0 (Inherited: 0x3f0)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48 (Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x4b8 (Inherited: 0x400)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x400(0x01)
	char bDrawPolyEdges : 1; // 0x400(0x01)
	char bDrawFilledPolys : 1; // 0x400(0x01)
	char bDrawNavMeshEdges : 1; // 0x400(0x01)
	char bDrawTileBounds : 1; // 0x400(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x400(0x01)
	char bDrawTileLabels : 1; // 0x400(0x01)
	char bDrawPolygonLabels : 1; // 0x400(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x401(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x401(0x01)
	char bDrawNavLinks : 1; // 0x401(0x01)
	char bDrawFailedNavLinks : 1; // 0x401(0x01)
	char bDrawClusters : 1; // 0x401(0x01)
	char bDrawOctree : 1; // 0x401(0x01)
	char bDrawOctreeDetails : 1; // 0x401(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x401(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x402(0x01)
	char bDrawNavMesh : 1; // 0x402(0x01)
	float DrawOffset; // 0x404(0x04)
	char bFixedTilePoolSize : 1; // 0x408(0x01)
	int32_t TilePoolSize; // 0x40c(0x04)
	float TileSizeUU; // 0x410(0x04)
	float CellSize; // 0x414(0x04)
	float CellHeight; // 0x418(0x04)
	float AgentRadius; // 0x41c(0x04)
	float AgentHeight; // 0x420(0x04)
	float AgentMaxHeight; // 0x424(0x04)
	float AgentMaxSlope; // 0x428(0x04)
	float AgentMaxStepHeight; // 0x42c(0x04)
	float MinRegionArea; // 0x430(0x04)
	float MergeRegionSize; // 0x434(0x04)
	float MaxSimplificationError; // 0x438(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x43c(0x04)
	int32_t TileNumberHardLimit; // 0x440(0x04)
	int32_t PolyRefTileBits; // 0x444(0x04)
	int32_t PolyRefNavPolyBits; // 0x448(0x04)
	int32_t PolyRefSaltBits; // 0x44c(0x04)
	FVector NavMeshOriginOffset; // 0x450(0x0c)
	float DefaultDrawDistance; // 0x45c(0x04)
	float DefaultMaxSearchNodes; // 0x460(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x464(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x468(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x469(0x01)
	int32_t RegionChunkSplits; // 0x46c(0x04)
	int32_t LayerChunkSplits; // 0x470(0x04)
	char bSortNavigationAreasByCost : 1; // 0x474(0x01)
	char bPerformVoxelFiltering : 1; // 0x474(0x01)
	char bMarkLowHeightAreas : 1; // 0x474(0x01)
	char bFilterLowSpanSequences : 1; // 0x474(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x474(0x01)
	char pad_46D_0 : 5; // 0x46d(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x474(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x474(0x01)
	char bStoreEmptyTileLayers : 1; // 0x474(0x01)
	char bUseVirtualFilters : 1; // 0x475(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x475(0x01)
	char bUseVoxelCache : 1; // 0x475(0x01)
	float TileSetUpdateInterval; // 0x478(0x04)
	float HeuristicScale; // 0x47c(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x480(0x04)

	bool K2_ReplaceAreaInTileBounds(FBox Bounds, UNavArea* OldArea, UNavArea* NewArea, bool ReplaceLinks);
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
};

