// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x320 (Inherited: 0x1f0)
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; // 0x1f0(0x10)
	int32_t UserIndex; // 0x200(0x04)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x204(0x01)
	bool bShouldPinActor; // 0x205(0x01)
	char UnknownData_206[0x2]; // 0x206(0x02)
	struct UMagicLeapARPinSaveGame* PinDataClass; // 0x208(0x08)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x210(0x10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x220(0x10)
	struct FGuid PinnedCFUID; // 0x230(0x10)
	struct USceneComponent* PinnedSceneComponent; // 0x240(0x08)
	struct UMagicLeapARPinSaveGame* PinData; // 0x248(0x08)
	char UnknownData_250[0xd0]; // 0x250(0xd0)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	bool PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	bool PinActor(struct AActor* ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	bool IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	bool GetPinState(struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	bool GetPinnedPinID(struct FGuid PinID); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	struct UMagicLeapARPinSaveGame* GetPinData(struct UMagicLeapARPinSaveGame* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
	bool IsTrackerValid(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t count); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector SearchPoint, struct FGuid PinID); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, struct TArray<struct FGuid> Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
	struct FString GetARPinStateToString(struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid PinID, struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid PinID, struct FVector Position, struct FRotator Orientation, bool PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
	bool GetARPinPositionAndOrientation(struct FGuid PinID, struct FVector Position, struct FRotator Orientation, bool PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
	enum class EMagicLeapPassableWorldError DestroyTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
	enum class EMagicLeapPassableWorldError CreateTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
	void BindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x40 (Inherited: 0x28)
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28(0x04)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c(0x10)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0xa0 (Inherited: 0x28)
struct UMagicLeapARPinSaveGame : USaveGame {
	struct FGuid PinnedID; // 0x28(0x10)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FTransform ComponentWorldTransform; // 0x40(0x30)
	struct FTransform PinTransform; // 0x70(0x30)
};

