// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x320 (Inherited: 0x1f0)
struct UMagicLeapARPinComponent : USceneComponent {
	FString ObjectUID; // 0x1f0(0x10)
	int32_t UserIndex; // 0x200(0x04)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x204(0x01)
	bool bShouldPinActor; // 0x205(0x01)
	UMagicLeapARPinSaveGame* PinDataClass; // 0x208(0x08)
	FMulticastInlineDelegate OnPersistentEntityPinned; // 0x210(0x10)
	FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x220(0x10)
	FGuid PinnedCFUID; // 0x230(0x10)
	USceneComponent* PinnedSceneComponent; // 0x240(0x08)
	UMagicLeapARPinSaveGame* PinData; // 0x248(0x08)

	void UnPin();
	bool PinSceneComponent(USceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(AActor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	bool IsPinned();
	bool GetPinState(FMagicLeapARPinState State);
	bool GetPinnedPinID(FGuid PinID);
	UMagicLeapARPinSaveGame* GetPinData(UMagicLeapARPinSaveGame* PinDataClass);
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegate Delegate);
	bool IsTrackerValid();
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t count);
	enum class EMagicLeapPassableWorldError GetClosestARPin(FVector SearchPoint, FGuid PinID);
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, TArray<FGuid> Pins);
	FString GetARPinStateToString(FMagicLeapARPinState State);
	enum class EMagicLeapPassableWorldError GetARPinState(FGuid PinID, FMagicLeapARPinState State);
	bool GetARPinPositionAndOrientation_TrackingSpace(FGuid PinID, FVector Position, FRotator Orientation, bool PinFoundInEnvironment);
	bool GetARPinPositionAndOrientation(FGuid PinID, FVector Position, FRotator Orientation, bool PinFoundInEnvironment);
	enum class EMagicLeapPassableWorldError DestroyTracker();
	enum class EMagicLeapPassableWorldError CreateTracker();
	void BindToOnMagicLeapARPinUpdatedDelegate(FDelegate Delegate);
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x40 (Inherited: 0x28)
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28(0x04)
	FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c(0x10)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0xa0 (Inherited: 0x28)
struct UMagicLeapARPinSaveGame : USaveGame {
	FGuid PinnedID; // 0x28(0x10)
	FTransform ComponentWorldTransform; // 0x40(0x30)
	FTransform PinTransform; // 0x70(0x30)
};

