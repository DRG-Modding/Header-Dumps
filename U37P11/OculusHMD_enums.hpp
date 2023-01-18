enum class EBoundaryType {
    Boundary_Outer = 0,
    Boundary_PlayArea = 1,
    Boundary_MAX = 2,
};

enum class EColorSpace {
    Unknown = 0,
    Unmanaged = 1,
    Rec_2020 = 2,
    Rec_709 = 3,
    Rift_CV1 = 4,
    Rift_S = 5,
    Quest = 6,
    P3 = 7,
    Adobe_RGB = 8,
    EColorSpace_MAX = 9,
};

enum class EFixedFoveatedRenderingLevel {
    FFR_Off = 0,
    FFR_Low = 1,
    FFR_Medium = 2,
    FFR_High = 3,
    FFR_HighTop = 4,
    FFR_MAX = 5,
};

enum class EHandTrackingSupport {
    ControllersOnly = 0,
    ControllersAndHands = 1,
    HandsOnly = 2,
    EHandTrackingSupport_MAX = 3,
};

enum class EOculusDeviceType {
    OculusMobile_Deprecated0 = 0,
    OculusQuest = 1,
    OculusQuest2 = 2,
    Rift = 100,
    Rift_S = 101,
    Quest_Link = 102,
    Quest2_Link = 103,
    OculusUnknown = 200,
    EOculusDeviceType_MAX = 201,
};

enum class ETrackedDeviceType {
    None = 0,
    HMD = 1,
    LTouch = 2,
    RTouch = 3,
    Touch = 4,
    DeviceObjectZero = 5,
    All = 6,
    ETrackedDeviceType_MAX = 7,
};

