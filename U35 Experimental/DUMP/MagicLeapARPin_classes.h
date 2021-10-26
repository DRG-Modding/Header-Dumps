// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x320 (Inherited: 0x1f0)
struct UMagicLeapARPinComponent : USceneComponent {
	UPROPERTY(BlueprintReadWrite) FString ObjectUID; 
	UPROPERTY(BlueprintReadWrite) int32_t UserIndex; 
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapAutoPinType AutoPinType; 
	UPROPERTY(BlueprintReadWrite) bool bShouldPinActor; 
	UPROPERTY(BlueprintReadWrite) UMagicLeapARPinSaveGame* PinDataClass; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnPersistentEntityPinned; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnPersistentEntityPinLost; 
	UPROPERTY(BlueprintReadWrite) FGuid PinnedCFUID; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* PinnedSceneComponent; 
	UPROPERTY(BlueprintReadWrite) UMagicLeapARPinSaveGame* PinData; 

	UFUNCTION(BlueprintCallable) void UnPin();
	UFUNCTION(BlueprintCallable) bool PinSceneComponent(USceneComponent* ComponentToPin);
	UFUNCTION(BlueprintCallable) bool PinRestoredOrSynced();
	UFUNCTION(BlueprintCallable) bool PinActor(AActor* ActorToPin);
	UFUNCTION(BlueprintCallable) void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	UFUNCTION(BlueprintCallable) void PersistentEntityPinLost__DelegateSignature();
	UFUNCTION(BlueprintCallable) bool IsPinned();
	UFUNCTION(BlueprintCallable) bool GetPinState(FMagicLeapARPinState State);
	UFUNCTION(BlueprintCallable) bool GetPinnedPinID(FGuid PinID);
	UFUNCTION(BlueprintCallable) UMagicLeapARPinSaveGame* GetPinData(UMagicLeapARPinSaveGame* PinDataClass);
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegate Delegate);
	UFUNCTION(BlueprintCallable) bool IsTrackerValid();
	UFUNCTION(BlueprintCallable) enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t count);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapPassableWorldError GetClosestARPin(FVector SearchPoint, FGuid PinID);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, TArray<FGuid> Pins);
	UFUNCTION(BlueprintCallable) FString GetARPinStateToString(FMagicLeapARPinState State);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapPassableWorldError GetARPinState(FGuid PinID, FMagicLeapARPinState State);
	UFUNCTION(BlueprintCallable) bool GetARPinPositionAndOrientation_TrackingSpace(FGuid PinID, FVector Position, FRotator Orientation, bool PinFoundInEnvironment);
	UFUNCTION(BlueprintCallable) bool GetARPinPositionAndOrientation(FGuid PinID, FVector Position, FRotator Orientation, bool PinFoundInEnvironment);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapPassableWorldError DestroyTracker();
	UFUNCTION(BlueprintCallable) enum class EMagicLeapPassableWorldError CreateTracker();
	UFUNCTION(BlueprintCallable) void BindToOnMagicLeapARPinUpdatedDelegate(FDelegate Delegate);
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x40 (Inherited: 0x28)
struct UMagicLeapARPinSettings : UObject {
	UPROPERTY(BlueprintReadWrite) float UpdateCheckFrequency; 
	UPROPERTY(BlueprintReadWrite) FMagicLeapARPinState OnUpdatedEventTriggerDelta; 
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0xa0 (Inherited: 0x28)
struct UMagicLeapARPinSaveGame : USaveGame {
	UPROPERTY(BlueprintReadWrite) FGuid PinnedID; 
	UPROPERTY(BlueprintReadWrite) FTransform ComponentWorldTransform; 
	UPROPERTY(BlueprintReadWrite) FTransform PinTransform; 
};

