// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// Size: 0x270 (Inherited: 0x1f0)
struct UMagicLeapImageTrackerComponent : USceneComponent {
	UPROPERTY(BlueprintReadWrite) UTexture2D* TargetImageTexture; 
	UPROPERTY(BlueprintReadWrite) FString Name; 
	UPROPERTY(BlueprintReadWrite) float LongerDimension; 
	UPROPERTY(BlueprintReadWrite) bool bIsStationary; 
	UPROPERTY(BlueprintReadWrite) bool bUseUnreliablePose; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnSetImageTargetSucceeded; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnSetImageTargetFailed; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnImageTargetFound; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnImageTargetLost; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnImageTargetUnreliableTracking; 

	UFUNCTION(BlueprintCallable) bool SetTargetAsync(UTexture2D* ImageTarget);
	UFUNCTION(BlueprintCallable) bool RemoveTargetAsync();
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapImageTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets);
	UFUNCTION(BlueprintCallable) bool IsImageTrackingEnabled();
	UFUNCTION(BlueprintCallable) int32_t GetMaxSimultaneousTargets();
	UFUNCTION(BlueprintCallable) void EnableImageTracking(bool bEnable);
};

