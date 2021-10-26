// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8 {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4
};

// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8 {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature_MAX = 4
};

// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8 {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2
};

// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8 {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3
};

// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8 {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2
};

// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8 {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3
};

// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8 {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3
};

// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8 {
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6,
	EARSessionType_MAX = 7
};

// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8 {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3
};

// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8 {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3
};

// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8 {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3
};

// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8 {
	CameraImage = 0,
	CameraDepth = 1,
	EnvironmentCapture = 2,
	EARTextureType_MAX = 3
};

// Enum AugmentedReality.EAREye
enum class EAREye : uint8 {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2
};

// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8 {
	EyeBlinkLeft = 0,
	EyeLookDownLeft = 1,
	EyeLookInLeft = 2,
	EyeLookOutLeft = 3,
	EyeLookUpLeft = 4,
	EyeSquintLeft = 5,
	EyeWideLeft = 6,
	EyeBlinkRight = 7,
	EyeLookDownRight = 8,
	EyeLookInRight = 9,
	EyeLookOutRight = 10,
	EyeLookUpRight = 11,
	EyeSquintRight = 12,
	EyeWideRight = 13,
	JawForward = 14,
	JawLeft = 15,
	JawRight = 16,
	JawOpen = 17,
	MouthClose = 18,
	MouthFunnel = 19,
	MouthPucker = 20,
	MouthLeft = 21,
	MouthRight = 22,
	MouthSmileLeft = 23,
	MouthSmileRight = 24,
	MouthFrownLeft = 25,
	MouthFrownRight = 26,
	MouthDimpleLeft = 27,
	MouthDimpleRight = 28,
	MouthStretchLeft = 29,
	MouthStretchRight = 30,
	MouthRollLower = 31,
	MouthRollUpper = 32,
	MouthShrugLower = 33,
	MouthShrugUpper = 34,
	MouthPressLeft = 35,
	MouthPressRight = 36,
	MouthLowerDownLeft = 37,
	MouthLowerDownRight = 38,
	MouthUpperUpLeft = 39,
	MouthUpperUpRight = 40,
	BrowDownLeft = 41,
	BrowDownRight = 42,
	BrowInnerUp = 43,
	BrowOuterUpLeft = 44,
	BrowOuterUpRight = 45,
	CheekPuff = 46,
	CheekSquintLeft = 47,
	CheekSquintRight = 48,
	NoseSneerLeft = 49,
	NoseSneerRight = 50,
	TongueOut = 51,
	HeadYaw = 52,
	HeadPitch = 53,
	HeadRoll = 54,
	LeftEyeYaw = 55,
	LeftEyePitch = 56,
	LeftEyeRoll = 57,
	RightEyeYaw = 58,
	RightEyePitch = 59,
	RightEyeRoll = 60,
	MAX = 61
};

// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8 {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2
};

// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8 {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2
};

// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8 {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2
};

// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8 {
	NotApplicable = 0,
	Unknown = 1,
	Wall = 2,
	Ceiling = 3,
	Floor = 4,
	Table = 5,
	Seat = 6,
	Face = 7,
	Image = 8,
	World = 9,
	SceneObject = 10,
	HandMesh = 11,
	EARObjectClassification_MAX = 12
};

// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3
};

// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8 {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4
};

// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8 {
	NotStarted = 0,
	Running = 1,
	NotSupported = 2,
	FatalError = 3,
	PermissionNotGranted = 4,
	UnsupportedConfiguration = 5,
	Other = 6,
	EARSessionStatus_MAX = 7
};

// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8 {
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	EARTrackingQualityReason_MAX = 5
};

// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8 {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3
};

// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8 {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	EARLineTraceChannels_MAX = 9
};

// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// Size: 0x08 (Inherited: 0x00)
struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x00(0x04)
	int32_t ARWorldOffset; // 0x04(0x04)
};

// ScriptStruct AugmentedReality.ARTraceResult
// Size: 0x60 (Inherited: 0x00)
struct FARTraceResult {
	float DistanceFromCamera; // 0x00(0x04)
	enum class EARLineTraceChannels TraceChannel; // 0x04(0x01)
	FTransform LocalToTrackingTransform; // 0x10(0x30)
	UARTrackedGeometry* TrackedGeometry; // 0x40(0x08)
};

// ScriptStruct AugmentedReality.ARPose3D
// Size: 0x50 (Inherited: 0x00)
struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x00(0x28)
	TArray<FTransform> JointTransforms; // 0x28(0x10)
	TArray<bool> IsJointTracked; // 0x38(0x10)
	enum class EARJointTransformSpace JointTransformSpace; // 0x48(0x01)
};

// ScriptStruct AugmentedReality.ARSkeletonDefinition
// Size: 0x28 (Inherited: 0x00)
struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x00(0x04)
	TArray<FName> JointNames; // 0x08(0x10)
	TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// ScriptStruct AugmentedReality.ARPose2D
// Size: 0x48 (Inherited: 0x00)
struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x00(0x28)
	TArray<FVector2D> JointLocations; // 0x28(0x10)
	TArray<bool> IsJointTracked; // 0x38(0x10)
};

// ScriptStruct AugmentedReality.ARVideoFormat
// Size: 0x0c (Inherited: 0x00)
struct FARVideoFormat {
	int32_t FPS; // 0x00(0x04)
	int32_t Width; // 0x04(0x04)
	int32_t Height; // 0x08(0x04)
};

// ScriptStruct AugmentedReality.ARSessionStatus
// Size: 0x18 (Inherited: 0x00)
struct FARSessionStatus {
	FString AdditionalInfo; // 0x00(0x10)
	enum class EARSessionStatus Status; // 0x10(0x01)
};

