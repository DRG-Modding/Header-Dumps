// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapControllerFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetMotionSourceForHand(enum class EControllerHand Hand, FName MotionSource);
	bool SetControllerTrackingMode(enum class EMagicLeapControllerTrackingMode TrackingMode);
	bool PlayLEDPattern(FName MotionSource, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayLEDEffect(FName MotionSource, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayHapticPattern(FName MotionSource, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity);
	bool PlayControllerLEDEffect(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayControllerLED(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayControllerHapticFeedback(enum class EControllerHand Hand, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity);
	int32_t MaxSupportedMagicLeapControllers();
	bool IsMLControllerConnected(FName MotionSource);
	void InvertControllerMapping();
	FName GetMotionSourceForHand(enum class EControllerHand Hand);
	enum class EMagicLeapControllerType GetMLControllerType(enum class EControllerHand Hand);
	enum class EControllerHand GetHandForMotionSource(FName MotionSource);
	enum class EMagicLeapControllerType GetControllerType(FName MotionSource);
	enum class EMagicLeapControllerTrackingMode GetControllerTrackingMode();
	bool GetControllerMapping(int32_t ControllerIndex, enum class EControllerHand Hand);
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// Size: 0x140 (Inherited: 0xb0)
struct UMagicLeapTouchpadGesturesComponent : UActorComponent {
	FMulticastInlineDelegate OnTouchpadGestureStart; // 0xb8(0x10)
	FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xc8(0x10)
	FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xd8(0x10)
};

