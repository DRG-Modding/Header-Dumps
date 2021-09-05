// Class MagicLeapPlanes.MagicLeapPlanesComponent
// Size: 0x260 (Inherited: 0x1f0)
struct UMagicLeapPlanesComponent : USceneComponent {
	TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags; // 0x1f0(0x10)
	UBoxComponent* SearchVolume; // 0x200(0x08)
	int32_t MaxResults; // 0x208(0x04)
	float MinHolePerimeter; // 0x20c(0x04)
	float MinPlaneArea; // 0x210(0x04)
	enum class EMagicLeapPlaneQueryType QueryType; // 0x214(0x01)
	float SimilarityThreshold; // 0x218(0x04)
	FMulticastInlineDelegate OnPlanesQueryResult; // 0x220(0x10)
	FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x230(0x10)

	bool RequestPlanesAsync();
};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapPlanesFunctionLibrary : UBlueprintFunctionLibrary {

	void ReorderPlaneFlags(TArray<enum class EMagicLeapPlaneQueryFlags> InPriority, TArray<enum class EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<enum class EMagicLeapPlaneQueryFlags> OutReorderedFlags);
	bool RemovePersistentQuery(FGuid Handle);
	void RemoveFlagsNotInQuery(TArray<enum class EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<enum class EMagicLeapPlaneQueryFlags> InResultFlags, TArray<enum class EMagicLeapPlaneQueryFlags> OutFlags);
	bool PlanesQueryBeginAsync(FMagicLeapPlanesQuery Query, FDelegate ResultDelegate);
	bool PlanesPersistentQueryBeginAsync(FMagicLeapPlanesQuery Query, FGuid Handle, FDelegate ResultDelegate);
	bool IsTrackerValid();
	FTransform GetContentScale(AActor* ContentActor, FMagicLeapPlaneResult PlaneResult);
	bool DestroyTracker();
	bool CreateTracker();
	FGuid AddPersistentQuery(enum class EMagicLeapPlaneQueryType PersistentQueryType);
};

