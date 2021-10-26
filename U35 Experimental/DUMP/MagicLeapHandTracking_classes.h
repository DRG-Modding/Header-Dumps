// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkMagicLeapHandTrackingSourceFactory : ULiveLinkSourceFactory {
};

// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHandTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void SetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture, float Confidence);
	UFUNCTION(BlueprintCallable) bool SetConfiguration(TArray<enum class EMagicLeapHandTrackingGesture> StaticGesturesToActivate, enum class EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
	UFUNCTION(BlueprintCallable) bool IsHoldingControl(enum class EControllerHand Hand);
	UFUNCTION(BlueprintCallable) float GetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture);
	UFUNCTION(BlueprintCallable) bool GetMotionSourceForHandKeypoint(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, FName OutMotionSource);
	UFUNCTION(BlueprintCallable) bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle SourceHandle);
	UFUNCTION(BlueprintCallable) bool GetHandThumbTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, FTransform Secondary);
	UFUNCTION(BlueprintCallable) bool GetHandKeypointForMotionSource(FName MotionSource, enum class EMagicLeapHandTrackingKeypoint OutKeyPoint);
	UFUNCTION(BlueprintCallable) bool GetHandIndexFingerTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, FTransform Pointer);
	UFUNCTION(BlueprintCallable) bool GetHandCenterNormalized(enum class EControllerHand Hand, FVector HandCenterNormalized);
	UFUNCTION(BlueprintCallable) bool GetHandCenter(enum class EControllerHand Hand, FTransform HandCenter);
	UFUNCTION(BlueprintCallable) bool GetGestureKeypointTransform(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, enum class EMagicLeapGestureTransformSpace TransformSpace, FTransform Transform);
	UFUNCTION(BlueprintCallable) bool GetGestureKeypoints(enum class EControllerHand Hand, TArray<FTransform> Keypoints);
	UFUNCTION(BlueprintCallable) bool GetCurrentGestureConfidence(enum class EControllerHand Hand, float Confidence);
	UFUNCTION(BlueprintCallable) bool GetCurrentGesture(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingGesture Gesture);
	UFUNCTION(BlueprintCallable) bool GetConfiguration(TArray<enum class EMagicLeapHandTrackingGesture> ActiveStaticGestures, enum class EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
};

