enum class EControllerFidelity {
    VR_ControllerFidelity_Estimated = 0,
    VR_ControllerFidelity_Full = 1,
    VR_ControllerFidelity_Partial = 2,
    VR_ControllerFidelity_MAX = 3,
};

enum class EHand {
    VR_LeftHand = 0,
    VR_RightHand = 1,
    VR_MAX = 2,
};

enum class EHandSkeleton {
    VR_SteamVRHandSkeleton = 0,
    VR_UE4HandSkeleton = 1,
    VR_MAX = 2,
};

enum class EMotionRange {
    VR_WithoutController = 0,
    VR_WithController = 1,
    VR_MAX = 2,
};

enum class ESkeletalSummaryDataType {
    VR_SummaryType_FromAnimation = 0,
    VR_SummaryType_FromDevice = 1,
    VR_SummaryType_MAX = 2,
};

enum class ESteamVRHand {
    VR_Left = 0,
    VR_Right = 1,
    VR_MAX = 2,
};

enum class ESteamVRInputStringBits {
    VR_InputString_Hand = 0,
    VR_InputString_ControllerType = 1,
    VR_InputString_InputSource = 2,
    VR_InputString_All = 3,
    VR_InputString_MAX = 4,
};

