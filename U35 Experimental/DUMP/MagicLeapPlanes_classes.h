// Class MagicLeapPlanes.MagicLeapPlanesComponent
// Size: 0x260 (Inherited: 0x1f0)
struct UMagicLeapPlanesComponent : USceneComponent {
	UPROPERTY(BlueprintReadWrite) TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* SearchVolume; 
	UPROPERTY(BlueprintReadWrite) int32_t MaxResults; 
	UPROPERTY(BlueprintReadWrite) float MinHolePerimeter; 
	UPROPERTY(BlueprintReadWrite) float MinPlaneArea; 
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapPlaneQueryType QueryType; 
	UPROPERTY(BlueprintReadWrite) float SimilarityThreshold; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnPlanesQueryResult; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnPersistentPlanesQueryResult; 

	UFUNCTION(BlueprintCallable) bool RequestPlanesAsync();
};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapPlanesFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void ReorderPlaneFlags(TArray<enum class EMagicLeapPlaneQueryFlags> InPriority, TArray<enum class EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<enum class EMagicLeapPlaneQueryFlags> OutReorderedFlags);
	UFUNCTION(BlueprintCallable) bool RemovePersistentQuery(FGuid Handle);
	UFUNCTION(BlueprintCallable) void RemoveFlagsNotInQuery(TArray<enum class EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<enum class EMagicLeapPlaneQueryFlags> InResultFlags, TArray<enum class EMagicLeapPlaneQueryFlags> OutFlags);
	UFUNCTION(BlueprintCallable) bool PlanesQueryBeginAsync(FMagicLeapPlanesQuery Query, FDelegate ResultDelegate);
	UFUNCTION(BlueprintCallable) bool PlanesPersistentQueryBeginAsync(FMagicLeapPlanesQuery Query, FGuid Handle, FDelegate ResultDelegate);
	UFUNCTION(BlueprintCallable) bool IsTrackerValid();
	UFUNCTION(BlueprintCallable) FTransform GetContentScale(AActor* ContentActor, FMagicLeapPlaneResult PlaneResult);
	UFUNCTION(BlueprintCallable) bool DestroyTracker();
	UFUNCTION(BlueprintCallable) bool CreateTracker();
	UFUNCTION(BlueprintCallable) FGuid AddPersistentQuery(enum class EMagicLeapPlaneQueryType PersistentQueryType);
};

