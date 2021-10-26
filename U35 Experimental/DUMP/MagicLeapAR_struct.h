// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8 {
	None = 0,
	FeaturePoint = 1,
	InfinitePlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	FeaturePointWithSurfaceNormal = 16,
	ELuminARLineTraceChannel_MAX = 17
};

// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8 {
	Tracking = 0,
	NotTracking = 1,
	StoppedTracking = 2,
	ELuminARTrackingState_MAX = 3
};

