// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8_t {
	None,
	FeaturePoint,
	InfinitePlane,
	PlaneUsingExtent,
	PlaneUsingBoundaryPolygon,
	FeaturePointWithSurfaceNormal,
	ELuminARLineTraceChannel_MAX,
};

// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8_t {
	Tracking,
	NotTracking,
	StoppedTracking,
	ELuminARTrackingState_MAX,
};

