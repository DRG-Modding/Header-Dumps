// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkMagicLeapHandTrackingSourceFactory : ULiveLinkSourceFactory {
};

// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHandTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	void SetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture, float Confidence);
	bool SetConfiguration(TArray<enum class EMagicLeapHandTrackingGesture> StaticGesturesToActivate, enum class EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
	bool IsHoldingControl(enum class EControllerHand Hand);
	float GetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture);
	bool GetMotionSourceForHandKeypoint(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, FName OutMotionSource);
	bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle SourceHandle);
	bool GetHandThumbTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, FTransform Secondary);
	bool GetHandKeypointForMotionSource(FName MotionSource, enum class EMagicLeapHandTrackingKeypoint OutKeyPoint);
	bool GetHandIndexFingerTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, FTransform Pointer);
	bool GetHandCenterNormalized(enum class EControllerHand Hand, FVector HandCenterNormalized);
	bool GetHandCenter(enum class EControllerHand Hand, FTransform HandCenter);
	bool GetGestureKeypointTransform(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, enum class EMagicLeapGestureTransformSpace TransformSpace, FTransform Transform);
	bool GetGestureKeypoints(enum class EControllerHand Hand, TArray<FTransform> Keypoints);
	bool GetCurrentGestureConfidence(enum class EControllerHand Hand, float Confidence);
	bool GetCurrentGesture(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingGesture Gesture);
	bool GetConfiguration(TArray<enum class EMagicLeapHandTrackingGesture> ActiveStaticGestures, enum class EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
};

