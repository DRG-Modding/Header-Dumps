enum class EARAltitudeSource {
    Precise = 0,
    Coarse = 1,
    UserDefined = 2,
    Unknown = 3,
    EARAltitudeSource_MAX = 4,
};

enum class EARCandidateImageOrientation {
    Landscape = 0,
    Portrait = 1,
    EARCandidateImageOrientation_MAX = 2,
};

enum class EARCaptureType {
    Camera = 0,
    QRCode = 1,
    SpatialMapping = 2,
    SceneUnderstanding = 3,
    HandMesh = 4,
    EARCaptureType_MAX = 5,
};

enum class EARDepthAccuracy {
    Unkown = 0,
    Approximate = 1,
    Accurate = 2,
    EARDepthAccuracy_MAX = 3,
};

enum class EARDepthQuality {
    Unkown = 0,
    Low = 1,
    High = 2,
    EARDepthQuality_MAX = 3,
};

enum class EAREnvironmentCaptureProbeType {
    None = 0,
    Manual = 1,
    Automatic = 2,
    EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class EAREye {
    LeftEye = 0,
    RightEye = 1,
    EAREye_MAX = 2,
};

enum class EARFaceBlendShape {
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
};

enum class EARFaceTrackingDirection {
    FaceRelative = 0,
    FaceMirrored = 1,
    EARFaceTrackingDirection_MAX = 2,
};

enum class EARFaceTrackingUpdate {
    CurvesAndGeo = 0,
    CurvesOnly = 1,
    EARFaceTrackingUpdate_MAX = 2,
};

enum class EARFaceTransformMixing {
    ComponentOnly = 0,
    ComponentLocationTrackedRotation = 1,
    ComponentWithTracked = 2,
    TrackingOnly = 3,
    EARFaceTransformMixing_MAX = 4,
};

enum class EARFrameSyncMode {
    SyncTickWithCameraImage = 0,
    SyncTickWithoutCameraImage = 1,
    EARFrameSyncMode_MAX = 2,
};

enum class EARGeoTrackingAccuracy {
    Undetermined = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    EARGeoTrackingAccuracy_MAX = 4,
};

enum class EARGeoTrackingState {
    Initializing = 0,
    Localized = 1,
    Localizing = 2,
    NotAvailable = 3,
    EARGeoTrackingState_MAX = 4,
};

enum class EARGeoTrackingStateReason {
    None = 0,
    NotAvailableAtLocation = 1,
    NeedLocationPermissions = 2,
    DevicePointedTooLow = 3,
    WorldTrackingUnstable = 4,
    WaitingForLocation = 5,
    GeoDataNotLoaded = 6,
    VisualLocalizationFailed = 7,
    WaitingForAvailabilityCheck = 8,
    EARGeoTrackingStateReason_MAX = 9,
};

enum class EARJointTransformSpace {
    Model = 0,
    ParentJoint = 1,
    EARJointTransformSpace_MAX = 2,
};

enum class EARLightEstimationMode {
    None = 0,
    AmbientLightEstimate = 1,
    DirectionalLightEstimate = 2,
    EARLightEstimationMode_MAX = 3,
};

enum class EARLineTraceChannels {
    None = 0,
    FeaturePoint = 1,
    GroundPlane = 2,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
    EARLineTraceChannels_MAX = 9,
};

enum class EARObjectClassification {
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
    Door = 12,
    Window = 13,
    EARObjectClassification_MAX = 14,
};

enum class EARPlaneDetectionMode {
    None = 0,
    HorizontalPlaneDetection = 1,
    VerticalPlaneDetection = 2,
    EARPlaneDetectionMode_MAX = 3,
};

enum class EARPlaneOrientation {
    Horizontal = 0,
    Vertical = 1,
    Diagonal = 2,
    EARPlaneOrientation_MAX = 3,
};

enum class EARSceneReconstruction {
    None = 0,
    MeshOnly = 1,
    MeshWithClassification = 2,
    EARSceneReconstruction_MAX = 3,
};

enum class EARServiceAvailability {
    UnknownError = 0,
    UnknownChecking = 1,
    UnknownTimedOut = 2,
    UnsupportedDeviceNotCapable = 3,
    SupportedNotInstalled = 4,
    SupportedVersionTooOld = 5,
    SupportedInstalled = 6,
    EARServiceAvailability_MAX = 7,
};

enum class EARServiceInstallRequestResult {
    Installed = 0,
    DeviceNotCompatible = 1,
    UserDeclinedInstallation = 2,
    FatalError = 3,
    EARServiceInstallRequestResult_MAX = 4,
};

enum class EARServicePermissionRequestResult {
    Granted = 0,
    Denied = 1,
    EARServicePermissionRequestResult_MAX = 2,
};

enum class EARSessionConfigFlags {
    None = 0,
    GenerateMeshData = 1,
    RenderMeshDataInWireframe = 2,
    GenerateCollisionForMeshData = 4,
    GenerateNavMeshForMeshData = 8,
    UseMeshDataForOcclusion = 16,
    EARSessionConfigFlags_MAX = 17,
};

enum class EARSessionStatus {
    NotStarted = 0,
    Running = 1,
    NotSupported = 2,
    FatalError = 3,
    PermissionNotGranted = 4,
    UnsupportedConfiguration = 5,
    Other = 6,
    EARSessionStatus_MAX = 7,
};

enum class EARSessionTrackingFeature {
    None = 0,
    PoseDetection2D = 1,
    PersonSegmentation = 2,
    PersonSegmentationWithDepth = 3,
    SceneDepth = 4,
    SmoothedSceneDepth = 5,
    EARSessionTrackingFeature_MAX = 6,
};

enum class EARSessionType {
    None = 0,
    Orientation = 1,
    World = 2,
    Face = 3,
    Image = 4,
    ObjectScanning = 5,
    PoseTracking = 6,
    GeoTracking = 7,
    EARSessionType_MAX = 8,
};

enum class EARSpatialMeshUsageFlags {
    NotApplicable = 0,
    Visible = 1,
    Collision = 2,
    EARSpatialMeshUsageFlags_MAX = 3,
};

enum class EARTextureType {
    Unknown = 0,
    CameraImage = 1,
    CameraDepth = 2,
    EnvironmentCapture = 3,
    PersonSegmentationImage = 4,
    PersonSegmentationDepth = 5,
    SceneDepthMap = 6,
    SceneDepthConfidenceMap = 7,
    EARTextureType_MAX = 8,
};

enum class EARTrackingQuality {
    NotTracking = 0,
    OrientationOnly = 1,
    OrientationAndPosition = 2,
    EARTrackingQuality_MAX = 3,
};

enum class EARTrackingQualityReason {
    None = 0,
    Initializing = 1,
    Relocalizing = 2,
    ExcessiveMotion = 3,
    InsufficientFeatures = 4,
    InsufficientLight = 5,
    BadState = 6,
    EARTrackingQualityReason_MAX = 7,
};

enum class EARTrackingState {
    Unknown = 0,
    Tracking = 1,
    NotTracking = 2,
    StoppedTracking = 3,
    EARTrackingState_MAX = 4,
};

enum class EARWorldAlignment {
    Gravity = 0,
    GravityAndHeading = 1,
    Camera = 2,
    EARWorldAlignment_MAX = 3,
};

enum class EARWorldMappingState {
    NotAvailable = 0,
    StillMappingNotRelocalizable = 1,
    StillMappingRelocalizable = 2,
    Mapped = 3,
    EARWorldMappingState_MAX = 4,
};

enum class EFaceComponentDebugMode {
    None = 0,
    ShowEyeVectors = 1,
    ShowFaceMesh = 2,
    EFaceComponentDebugMode_MAX = 3,
};

enum class EGeoAnchorComponentDebugMode {
    None = 0,
    ShowGeoData = 1,
    EGeoAnchorComponentDebugMode_MAX = 2,
};

enum class EImageComponentDebugMode {
    None = 0,
    ShowDetectedImage = 1,
    EImageComponentDebugMode_MAX = 2,
};

enum class EPlaneComponentDebugMode {
    None = 0,
    ShowNetworkRole = 1,
    ShowClassification = 2,
    EPlaneComponentDebugMode_MAX = 3,
};

enum class EPoseComponentDebugMode {
    None = 0,
    ShowSkeleton = 1,
    EPoseComponentDebugMode_MAX = 2,
};

enum class EQRCodeComponentDebugMode {
    None = 0,
    ShowQRCode = 1,
    EQRCodeComponentDebugMode_MAX = 2,
};

