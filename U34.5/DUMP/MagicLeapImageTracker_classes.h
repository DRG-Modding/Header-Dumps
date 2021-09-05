// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// Size: 0x270 (Inherited: 0x1f0)
struct UMagicLeapImageTrackerComponent : USceneComponent {
	UTexture2D* TargetImageTexture; // 0x1f0(0x08)
	FString Name; // 0x1f8(0x10)
	float LongerDimension; // 0x208(0x04)
	bool bIsStationary; // 0x20c(0x01)
	bool bUseUnreliablePose; // 0x20d(0x01)
	FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x210(0x10)
	FMulticastInlineDelegate OnSetImageTargetFailed; // 0x220(0x10)
	FMulticastInlineDelegate OnImageTargetFound; // 0x230(0x10)
	FMulticastInlineDelegate OnImageTargetLost; // 0x240(0x10)
	FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x250(0x10)

	bool SetTargetAsync(UTexture2D* ImageTarget);
	bool RemoveTargetAsync();
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapImageTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets);
	bool IsImageTrackingEnabled();
	int32_t GetMaxSimultaneousTargets();
	void EnableImageTracking(bool bEnable);
};

