// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapControllerFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) bool SetMotionSourceForHand(enum class EControllerHand Hand, FName MotionSource);
	UFUNCTION(BlueprintCallable) bool SetControllerTrackingMode(enum class EMagicLeapControllerTrackingMode TrackingMode);
	UFUNCTION(BlueprintCallable) bool PlayLEDPattern(FName MotionSource, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	UFUNCTION(BlueprintCallable) bool PlayLEDEffect(FName MotionSource, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	UFUNCTION(BlueprintCallable) bool PlayHapticPattern(FName MotionSource, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity);
	UFUNCTION(BlueprintCallable) bool PlayControllerLEDEffect(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	UFUNCTION(BlueprintCallable) bool PlayControllerLED(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	UFUNCTION(BlueprintCallable) bool PlayControllerHapticFeedback(enum class EControllerHand Hand, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity);
	UFUNCTION(BlueprintCallable) int32_t MaxSupportedMagicLeapControllers();
	UFUNCTION(BlueprintCallable) bool IsMLControllerConnected(FName MotionSource);
	UFUNCTION(BlueprintCallable) void InvertControllerMapping();
	UFUNCTION(BlueprintCallable) FName GetMotionSourceForHand(enum class EControllerHand Hand);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapControllerType GetMLControllerType(enum class EControllerHand Hand);
	UFUNCTION(BlueprintCallable) enum class EControllerHand GetHandForMotionSource(FName MotionSource);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapControllerType GetControllerType(FName MotionSource);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapControllerTrackingMode GetControllerTrackingMode();
	UFUNCTION(BlueprintCallable) bool GetControllerMapping(int32_t ControllerIndex, enum class EControllerHand Hand);
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// Size: 0x140 (Inherited: 0xb0)
struct UMagicLeapTouchpadGesturesComponent : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnTouchpadGestureStart; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnTouchpadGestureContinue; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnTouchpadGestureEnd; 
};

