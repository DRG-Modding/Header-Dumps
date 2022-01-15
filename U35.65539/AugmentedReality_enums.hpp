enum class EARTrackingState
{
    Unknown = 0,
    Tracking = 1,
    NotTracking = 2,
    StoppedTracking = 3,
    EARTrackingState_MAX = 4,
}

enum class EARSessionTrackingFeature
{
    None = 0,
    PoseDetection2D = 1,
    PersonSegmentation = 2,
    PersonSegmentationWithDepth = 3,
    EARSessionTrackingFeature_MAX = 4,
}

enum class EARFaceTrackingUpdate
{
    CurvesAndGeo = 0,
    CurvesOnly = 1,
    EARFaceTrackingUpdate_MAX = 2,
}

enum class EAREnvironmentCaptureProbeType
{
    None = 0,
    Manual = 1,
    Automatic = 2,
    EAREnvironmentCaptureProbeType_MAX = 3,
}

enum class EARFrameSyncMode
{
    SyncTickWithCameraImage = 0,
    SyncTickWithoutCameraImage = 1,
    EARFrameSyncMode_MAX = 2,
}

enum class EARLightEstimationMode
{
    None = 0,
    AmbientLightEstimate = 1,
    DirectionalLightEstimate = 2,
    EARLightEstimationMode_MAX = 3,
}

enum class EARPlaneDetectionMode
{
    None = 0,
    HorizontalPlaneDetection = 1,
    VerticalPlaneDetection = 2,
    EARPlaneDetectionMode_MAX = 3,
}

enum class EARSessionType
{
    None = 0,
    Orientation = 1,
    World = 2,
    Face = 3,
    Image = 4,
    ObjectScanning = 5,
    PoseTracking = 6,
    EARSessionType_MAX = 7,
}

enum class EARWorldAlignment
{
    Gravity = 0,
    GravityAndHeading = 1,
    Camera = 2,
    EARWorldAlignment_MAX = 3,
}

enum class EARDepthAccuracy
{
    Unkown = 0,
    Approximate = 1,
    Accurate = 2,
    EARDepthAccuracy_MAX = 3,
}

enum class EARDepthQuality
{
    Unkown = 0,
    Low = 1,
    High = 2,
    EARDepthQuality_MAX = 3,
}

enum class EARTextureType
{
    CameraImage = 0,
    CameraDepth = 1,
    EnvironmentCapture = 2,
    EARTextureType_MAX = 3,
}

enum class EAREye
{
    LeftEye = 0,
    RightEye = 1,
    EAREye_MAX = 2,
}

enum class EARFaceBlendShape
{
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
    MAX = 61,
}

enum class EARFaceTrackingDirection
{
    FaceRelative = 0,
    FaceMirrored = 1,
    EARFaceTrackingDirection_MAX = 2,
}

enum class EARCandidateImageOrientation
{
    Landscape = 0,
    Portrait = 1,
    EARCandidateImageOrientation_MAX = 2,
}

enum class EARJointTransformSpace
{
    Model = 0,
    ParentJoint = 1,
    EARJointTransformSpace_MAX = 2,
}

enum class EARObjectClassification
{
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
    EARObjectClassification_MAX = 12,
}

enum class EARPlaneOrientation
{
    Horizontal = 0,
    Vertical = 1,
    Diagonal = 2,
    EARPlaneOrientation_MAX = 3,
}

enum class EARWorldMappingState
{
    NotAvailable = 0,
    StillMappingNotRelocalizable = 1,
    StillMappingRelocalizable = 2,
    Mapped = 3,
    EARWorldMappingState_MAX = 4,
}

enum class EARSessionStatus
{
    NotStarted = 0,
    Running = 1,
    NotSupported = 2,
    FatalError = 3,
    PermissionNotGranted = 4,
    UnsupportedConfiguration = 5,
    Other = 6,
    EARSessionStatus_MAX = 7,
}

enum class EARTrackingQualityReason
{
    None = 0,
    Initializing = 1,
    Relocalizing = 2,
    ExcessiveMotion = 3,
    InsufficientFeatures = 4,
    EARTrackingQualityReason_MAX = 5,
}

enum class EARTrackingQuality
{
    NotTracking = 0,
    OrientationOnly = 1,
    OrientationAndPosition = 2,
    EARTrackingQuality_MAX = 3,
}

enum class EARLineTraceChannels
{
    None = 0,
    FeaturePoint = 1,
    GroundPlane = 2,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
    EARLineTraceChannels_MAX = 9,
}

