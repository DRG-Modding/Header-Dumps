// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8 {
	OnlyOnDataRestoration = 0,
	Always = 1,
	Never = 2,
	EMagicLeapAutoPinType_MAX = 3
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8 {
	None = 0,
	LowMapQuality = 1,
	UnableToLocalize = 2,
	Unavailable = 3,
	PrivilegeDenied = 4,
	InvalidParam = 5,
	UnspecifiedFailure = 6,
	PrivilegeRequestPending = 7,
	StartupPending = 8,
	NotImplemented = 9,
	PinNotFound = 10,
	EMagicLeapPassableWorldError_MAX = 11
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapARPinState {
	UPROPERTY(BlueprintReadWrite) float Confidence; 
	UPROPERTY(BlueprintReadWrite) float ValidRadius; 
	UPROPERTY(BlueprintReadWrite) float RotationError; 
	UPROPERTY(BlueprintReadWrite) float TranslationError; 
};

