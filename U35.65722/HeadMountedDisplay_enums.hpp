enum class EXRTrackedDeviceType {
    HeadMountedDisplay = 0,
    Controller = 1,
    TrackingReference = 2,
    Other = 3,
    Invalid = 254,
    Any = 255,
    EXRTrackedDeviceType_MAX = 256,
};

enum class ESpectatorScreenMode {
    Disabled = 0,
    SingleEyeLetterboxed = 1,
    Undistorted = 2,
    Distorted = 3,
    SingleEye = 4,
    SingleEyeCroppedToFill = 5,
    Texture = 6,
    TexturePlusEye = 7,
    ESpectatorScreenMode_MAX = 8,
};

namespace EHMDWornState {
    enum Type {
        Unknown = 0,
        Worn = 1,
        NotWorn = 2,
        EHMDWornState_MAX = 3,
    };
}

namespace EHMDTrackingOrigin {
    enum Type {
        Floor = 0,
        Eye = 1,
        Stage = 2,
        EHMDTrackingOrigin_MAX = 3,
    };
}

namespace EOrientPositionSelector {
    enum Type {
        Orientation = 0,
        Position = 1,
        OrientationAndPosition = 2,
        EOrientPositionSelector_MAX = 3,
    };
}

enum class ETrackingStatus {
    NotTracked = 0,
    InertialOnly = 1,
    Tracked = 2,
    ETrackingStatus_MAX = 3,
};

